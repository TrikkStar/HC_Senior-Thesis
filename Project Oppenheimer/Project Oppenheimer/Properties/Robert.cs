using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Project_Oppenheimer.Properties
{
    class Robert
    {
        public string actionType;
        public int cardToPlay;
        public List<int> targets;
        private bool completed = false;
        private List<Card> hand;
        private Gamestate game;
        private int side;

        public Robert(Gamestate gme, int sde)
        {
            game = gme;
            side = sde;
            if (side == 1)
            {
                hand = game.cards.usHand;
            }
            else
            {
                hand = game.cards.ussrHand;
            }
            playScoringCard();
        }

        private int playScoringCard()
        {
            foreach (int regionId in new List<int> {2, 1, 3, 81, 79, 37, 38})
            {
                foreach (Card card in hand)
                {
                    if ((regionId == card.id) && (checkRegionCondition(regionId)))
                    {
                        cardToPlay = regionId;
                        actionType = "Scoring";
                        completed = true;
                        return 0;
                    }
                }
            }
            return 0;
        }

        private bool checkRegionCondition(int x)
        {
            var region = getRegion(x);
            bool returnVal = false;
            int usPresence = 0;
            int ussrPresence = 0;
            int usBattlegrounds = 0;
            int ussrBattlegrounds = 0;
            foreach (int element in region)
            {
                var temp = game.countryLst.countries[element];
                if (temp.controlled)
                {
                    if (temp.controller == -1)
                    {
                        ussrPresence++;
                        if (temp.battleground)
                        {
                            ussrBattlegrounds++;
                        }
                    }
                    else
                    {
                        usPresence++;
                        if (temp.battleground)
                        {
                            usBattlegrounds++;
                        }
                    }
                }
            }
            if (side == -1)
            {
                if ((lastRound()) || (ussrPresence >= usPresence) && (ussrBattlegrounds >= usBattlegrounds) && (ussrPresence >= 2) && (ussrBattlegrounds >= 1))
                {
                    returnVal = true;
                }
            }
            else
            {
                if ((lastRound()) || (ussrPresence <= usPresence) && (ussrBattlegrounds <= usBattlegrounds) && (ussrPresence <= 2) && (ussrBattlegrounds <= 1))
                {
                    returnVal = true;
                }
            }
            return returnVal;
        }

        private List<int> getRegion(int x)
        {
            List<int> region = new List<int>();
            switch (x)
            {
                case 2:
                    region = game.countryLst.Europe;
                    break;
                case 1:
                    region = game.countryLst.Asia;
                    break;
                case 3:
                    region = game.countryLst.MiddleEast;
                    break;
                case 81:
                    region = game.countryLst.SouthAmerica;
                    break;
                case 79:
                    region = game.countryLst.Africa;
                    break;
                case 37:
                    region = game.countryLst.CentralAmerica;
                    break;
                case 38:
                    region = game.countryLst.SoutheastAsia;
                    break;
            }
            return region;
        }

        private bool lastRound()
        {
            if (side == -1)
            {
                if ((game.turn < 4) && (game.round == 13))
                {
                    return true;
                }
                else if (game.round == 15)
                {
                    return true;
                }
            }
            else
            {
                if ((game.turn < 4) && (game.round == 14))
                {
                    return true;
                }
                else if (game.round == 16)
                {
                    return true;
                }
            }
            return false;
        }
    }
}
