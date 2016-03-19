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
            targets = new List<int>();
            playScoringCard();
            if (!completed)
            {
                playEventCard();
            }
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
                case -2:
                    region = game.countryLst.EasternEurope;
                    break;
                case -4:
                    region = game.countryLst.WesternEurope;
                    break;
                case 00:
                    region = Enumerable.Range(0, 83).ToList();
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

        private int playEventCard()
        {
            List<int> cardLst;
            if (game.turn < 4)
            {
                //earlyWar priority lists
                if (side == -1)
                {
                    cardLst = new List<int> {31, 16, 28, 7, 17, 14, 9, 30, 24, 11, 13, 10, 15, 12, 8, 33, 104, 20, 34, 18, 32};
                }
                else
                {
                    cardLst = new List<int> {25, 31, 21, 23, 27, 106, 105, 24, 29, 22, 4, 34, 20, 35, 19, 5, 103, 18, 26, 32};
                }
            }
            else if (game.turn < 8)
            {
                //midWar priority list-need to make priority
                if (side == -1)
                {
                    cardLst = new List<int> { };
                }
                else
                {
                    cardLst = new List<int> { };
                }
            }
            else
            {
                //lateWar priority list-need to make priority
                if (side == -1)
                {
                    cardLst = new List<int> { };
                }
                else
                {
                    cardLst = new List<int> { };
                }
            }
            foreach (int cardId in cardLst)
            {
                foreach (Card card in hand)
                {
                    if ((cardId == card.id) && (checkEventCondition(cardId)))
                    {
                        cardToPlay = cardId;
                        actionType = "Event";
                        completed = true;
                        return 0;
                    }
                }
            }
            return 0;
        }

        private bool checkEventCondition (int x)
        {
            bool returnValue = false;
            switch (x)
            {
                case 25:
                    returnValue = (game.turn == 2);
                    break;
                case 31:
                    returnValue = ((game.turn == 1) || (game.turn == 2));
                    break;
                case 21:
                    returnValue = ((game.MarshallPlan) || (game.WarsawPactFormed));
                    break;
                case 23:
                    returnValue = ((!game.NATO) || (!checkRegionCondition(2)));
                    break;
                case 27:
                    returnValue = (game.countryLst.countries[41].influenceUSA < 3);
                    break;
                case 106:
                    returnValue = (game.countryLst.countries[13].controller == 1);
                    break;
                case 105:
                    returnValue = ((game.NATO) && (game.countryLst.countries[75].controller == 1));
                    break;
                case 24:
                    returnValue = IndoPakistaniWarCondidtion();
                    break;
                case 29:
                    if (game.turn < 8)
                    {
                        if (numBattlegrounds(-1, -2) >= 3)
                        {
                            targetCountryRemoval(-1, -2, 1);
                            returnValue = true;
                            break;
                        }
                    }
                    else
                    {
                        if (numCountries(-1, -2) >= 3)
                        {
                            targetCountryRemoval(-1, -2, 2);
                            returnValue = true;
                            break;
                        }
                    }
                    break;
                case 22:
                    returnValue = IndependentRedsCondition();
                    break;
                case 4:
                    break;
                case 34:
                    break;
                case 20:
                    break;
                case 35:
                    break;
                case 19:
                    break;
                case 5:
                    break;
                case 103:
                    break;
                case 18:
                    break;
                case 26:
                    break;
                case 32:
                    break;
                case 104:
                    break;
                case 10:
                    break;
                case 13:
                    break;
                case 11:
                    break;
                case 30:
                    break;
                case 9:
                    break;
                case 17:
                    break;
                case 14:
                    break;
                case 16:
                    break;
                case 28:
                    break;
                case 7:
                    break;
                case 33:
                    break;
                case 8:
                    break;
                case 12:
                    break;
                case 15:
                    break;
            }
            return returnValue;
        }

        private int numCountries(int player, int location)
        {
            var region = getRegion(location);
            int controlled = 0;
            foreach (int element in region)
            {
                if (game.countryLst.countries[element].controller == player)
                {
                    controlled++;
                }
            }
            return controlled;
        }

        private int numBattlegrounds(int player, int location)
        {
            var region = getRegion(location);
            int battleground = 0;
            foreach (int element in region)
            {
                if ((game.countryLst.countries[element].battleground) && (game.countryLst.countries[element].controller == player))
                {
                    battleground++;
                }
            }
            return battleground;
        }

        private int targetCountryRemoval(int player, int area, int amount)
        {
            var region = getRegion(area);
            foreach (var influence in Enumerable.Range(amount, 0).ToList())
            {
                foreach (var stability in Enumerable.Range(5, 1).ToList())
                {
                    foreach (var country in region)
                    {
                        var temp = game.countryLst.countries[country];
                        if ((!targets.Contains(country)) && (temp.battleground) && (temp.stability == stability))
                        {
                            if (player == 1)
                            {
                                if (temp.influenceUSA >= influence)
                                {
                                    targets.Add(country);
                                    return 0;
                                }
                            }
                            else
                            {
                                if (temp.influenceUSSR >= influence)
                                {
                                    targets.Add(country);
                                    return 0;
                                }
                            }
                        }
                    }
                }
                foreach (var stability in Enumerable.Range(5, 1).ToList())
                {
                    foreach (var country in region)
                    {
                        var temp = game.countryLst.countries[country];
                        if ((!targets.Contains(country)) && (temp.stability == stability))
                        {
                            if (player == 1)
                            {
                                if (temp.influenceUSA >= influence)
                                {
                                    targets.Add(country);
                                    return 0;
                                }
                            }
                            else
                            {
                                if (temp.influenceUSSR >= influence)
                                {
                                    targets.Add(country);
                                    return 0;
                                }
                            }
                        }
                    }
                }
            }
            return 0;
        }
        
        private bool IndoPakistaniWarCondidtion()
        {
            var india = game.countryLst.countries[34];
            var pakistan = game.countryLst.countries[54];
            if (side == 1)
            {
                if (game.usMilOps <= 3)
                {
                    if (india.influenceUSA < india.influenceUSSR)
                    {
                        if ((pakistan.controller != -1) && (game.countryLst.countries[75].controller != -1))
                        {
                            targets.Add(34);
                            return true;
                        }
                    }
                    if (pakistan.influenceUSA < pakistan.influenceUSSR)
                    {
                        if ((india.controller != -1) && (game.countryLst.countries[0].controller != -1) && (game.countryLst.countries[36].controller != -1))
                        {
                            targets.Add(54);
                            return true;
                        }
                    }
                }
            }
            else
            {
                if (game.ussrMilOps <= 3)
                {
                    if (india.influenceUSA > india.influenceUSSR)
                    {
                        if ((pakistan.controller != 1) && (game.countryLst.countries[75].controller != 1))
                        {
                            targets.Add(34);
                            return true;
                        }
                    }
                    if (pakistan.influenceUSA > pakistan.influenceUSSR)
                    {
                        if ((india.controller != 1) && (game.countryLst.countries[0].controller != 1) && (game.countryLst.countries[36].controller != 1))
                        {
                            targets.Add(54);
                            return true;
                        }
                    }
                }
            }
            return false;
        }

        private bool IndependentRedsCondition()
        {
            var region = new List<int> {60, 81, 10, 33, 18};
            foreach (int country in region)
            {
                if (game.countryLst.countries[country].influenceUSSR >= 2)
                {
                    targets.Add(country);
                    return true;
                }
            }
            return false;
        }
    }
}
