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
            if (game.turn == 0)
            {
                playScoringCard();
                if (!completed)
                {
                    playEventCard();
                }
                if (!completed)
                {
                    if (hand[0].id != 6)
                    {
                        cardToPlay = hand[0].id;
                        actionType = "Desperation";
                    }
                }
            }
            else
            {
                playScoringCard();
                if (!completed)
                {
                    playEventCard();
                }
                if (!completed)
                {
                    playSpaceRace();
                }
            }
        }

        private int playScoringCard()
        {
            foreach (int regionId in new List<int> {2, 1, 3, 81, 79, 37, 38})
            {
                foreach (Card card in hand)
                {
                    if ((regionId == card.id) && ((lastRound()) || (checkRegionCondition(regionId))))
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
                if ((ussrPresence >= usPresence) && (ussrBattlegrounds >= usBattlegrounds) && (ussrPresence >= 2) && (ussrBattlegrounds >= 1))
                {
                    returnVal = true;
                }
            }
            else
            {
                if ((ussrPresence <= usPresence) && (ussrBattlegrounds <= usBattlegrounds) && (ussrPresence <= 2) && (ussrBattlegrounds <= 1))
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
                    cardLst = new List<int> {31, 16, 28, 7, 17, 14, 9, 30, 24, 11, 13, 10, 15, 12, 8, 33, 104, 20, 34, 18, 32 };
                }
                else
                {
                    cardLst = new List<int> {25, 31, 21, 23, 27, 106, 105, 24, 29, 22, 4, 34, 20, 35, 19, 5, 103, 18, 26, 32 };
                }
            }
            else
            {
                //lateWar priority list-need to make priority
                if (side == -1)
                {
                    cardLst = new List<int> {31, 16, 28, 7, 17, 14, 9, 30, 24, 11, 13, 10, 15, 12, 8, 33, 104, 20, 34, 18, 32 };
                }
                else
                {
                    cardLst = new List<int> {25, 31, 21, 23, 27, 106, 105, 24, 29, 22, 4, 34, 20, 35, 19, 5, 103, 18, 26, 32 };
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
            switch (x)
            {
                case 25:
                    return ((game.round == 2) || (game.round == 0));
                case 31:
                    return (game.round < 3);
                case 21:
                    return ((game.MarshallPlan) || (game.WarsawPactFormed));
                case 23:
                    return ((!game.NATO) || (!checkRegionCondition(2)));
                case 27:
                    return (game.countryLst.countries[41].influenceUSA < 3);
                case 106:
                    return (game.countryLst.countries[13].controller == 1);
                case 105:
                    return ((game.NATO) && (game.countryLst.countries[75].controller == 1));
                case 24:
                    return IndoPakistaniWarCondidtion();
                case 29:
                    if (game.turn < 8)
                    {
                        if (numBattlegrounds(-1, -2) >= 3)
                        {
                            int var = 0;
                            while (var < 3)
                            {
                                targetCountryRemoval(-1, -2, 1);
                                var++;
                            }
                            return true;
                        }
                    }
                    else
                    {
                        if (numCountries(-1, -2) >= 3)
                        {
                            int var = 0;
                            while (var < 3)
                            {
                                targetCountryRemoval(-1, -2, 2);
                                var++;
                            }
                            return true;
                        }
                    }
                    return false;
                case 22:
                    return IndependentRedsCondition();
                case 4:
                    return (game.defcon == 3);
                case 34:
                    return ((game.defcon == 2) && (checkRegionCondition(2)) && (checkRegionCondition(1)) && (checkRegionCondition(3)));
                case 20:
                    return (game.defcon > 2);
                case 35:
                    return ((game.countryLst.countries[71].controller == 1) && (!cardInHand(6)));
                case 19:
                    return TrumanDoctrineCondition();
                case 5:
                    return (game.round == 2);
                case 103:
                    return (game.round == 0);
                case 18:
                    return true;
                case 26:
                    return true;
                case 32:
                    //need to think on this one
                    break;
                case 104:
                    if (game.turn < 8)
                    {
                        foreach (var region in new List<int> {2, 1, 3, 81, 79, 37, 38 })
                        {
                            foreach (var card in game.cards.usHand)
                            {
                                if ((region == card.id))
                                {
                                    targetCountryAdd(region, 1);
                                    return true;
                                }
                            }
                        }
                    }
                    return false;
                case 10:
                    return ((game.round >= 11) && (game.countryLst.countries[79].influenceUSA > 2));
                case 13:
                    if (game.ussrMilOps <= 3)
                    {
                        return ArabIsraeliWarCondition();
                    }
                    return false;
                case 11:
                    if (game.ussrMilOps <= 3)
                    {
                        return ((game.countryLst.countries[66].influenceUSA > 2) && (game.countryLst.countries[41].controller != 1) && (game.countryLst.countries[71].controller != 1));
                    }
                    return false;
                case 30:
                    if (!checkRegionCondition(79))
                    {
                        int itter = 0;
                        while (itter < 4)
                        {
                            targetCountryAdd(79, 1);
                            itter++;
                        }
                        return true;
                    }
                    else if (numCountries(-1, 38) < 5)
                    {
                        int itter = 0;
                        while (itter < 4)
                        {
                            targetCountryAdd(38, 1);
                            itter++;
                        }
                        return true;
                    }
                    return false;
                case 9:
                    return ((game.round < 7) && (game.countryLst.countries[78].influenceUSSR < 3));
                case 17:
                    return (game.countryLst.countries[27].influenceUSA <= 2);
                case 14:
                    if (!checkRegionCondition(2))
                    {
                        int itter = 0;
                        while (itter < 4)
                        {
                            targetCountryNotControlledAdd(-2, 1, 1);
                        }
                        return true;
                    }
                    return false;
                case 16:
                    if (!checkRegionCondition(2))
                    {
                        WarsawPactSelection();
                        return true;
                    }
                    return false;
                case 28:
                    return SuezCrisisCondition();
                case 7:
                    if ((!game.TheIronLady) && (!checkRegionCondition(2)))
                    {
                        targetCountryRemoval(1, -4, 2);
                        targetCountryRemoval(1, -4, 1);
                        return true;
                    }
                    return false;
                case 33:
                    //Ai not doing this unless I have extra time
                    break;
                case 8:
                    return ((game.countryLst.countries[17].influenceUSSR < 2) && (game.countryLst.countries[17].influenceUSA >= 2));
                case 12:
                    return ((game.countryLst.countries[60].influenceUSSR < 3) && (game.countryLst.countries[60].influenceUSA >= 2));
                case 15:
                    return ((game.countryLst.countries[23].influenceUSSR <= 2) && (game.countryLst.countries[23].influenceUSA >= 2));
            }
            return false;
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

        private bool cardInHand(int value)
        {
            //should generalise to work for either player
            foreach (var card in hand)
            {
                if (card.id == value)
                {
                    return true;
                }
            }
            return false;
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

        private int targetCountryAdd(int area, int amount)
        {
            var region = getRegion(area);
            foreach (var influence in Enumerable.Range(amount, amount + 5).ToList())
            {
                foreach (var country in region)
                {
                    var temp = game.countryLst.countries[country];
                    if ((!targets.Contains(country)) && (temp.battleground))
                    {
                        if (side == 1)
                        {
                            if (temp.stability - temp.influenceUSA <= influence)
                            {
                                targets.Add(country);
                                return 0;
                            }
                        }
                        else
                        {
                            if (temp.stability - temp.influenceUSSR <= influence)
                            {
                                targets.Add(country);
                                return 0;
                            }
                        }
                    }
                }
                foreach (var country in region)
                {
                    var temp = game.countryLst.countries[country];
                    if (!targets.Contains(country))
                    {
                        if (side == 1)
                        {
                            if (temp.stability - temp.influenceUSA <= influence)
                            {
                                targets.Add(country);
                                return 0;
                            }
                        }
                        else
                        {
                            if (temp.stability - temp.influenceUSSR <= influence)
                            {
                                targets.Add(country);
                                return 0;
                            }
                        }
                    }
                }
            }
            return 0;
        }

        private int targetCountryNotControlledAdd(int area, int amount, int controller)
        {
            var region = getRegion(area);
            foreach (var influence in Enumerable.Range(amount, amount + 5).ToList())
            {
                foreach (var country in region)
                {
                    var temp = game.countryLst.countries[country];
                    if ((!targets.Contains(country)) && (temp.battleground) &&(temp.controller != controller))
                    {
                        if (side == 1)
                        {
                            if (temp.stability - temp.influenceUSA <= influence)
                            {
                                targets.Add(country);
                                return 0;
                            }
                        }
                        else
                        {
                            if (temp.stability - temp.influenceUSSR <= influence)
                            {
                                targets.Add(country);
                                return 0;
                            }
                        }
                    }
                }
                foreach (var country in region)
                {
                    var temp = game.countryLst.countries[country];
                    if (!targets.Contains(country) && (temp.controller != controller))
                    {
                        if (side == 1)
                        {
                            if (temp.stability - temp.influenceUSA <= influence)
                            {
                                targets.Add(country);
                                return 0;
                            }
                        }
                        else
                        {
                            if (temp.stability - temp.influenceUSSR <= influence)
                            {
                                targets.Add(country);
                                return 0;
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

        private bool TrumanDoctrineCondition()
        {
            var region = getRegion(2);
            foreach (var stability in Enumerable.Range(5, 1).ToList())
            {
                foreach (var country in region)
                {
                    var temp = game.countryLst.countries[country];
                    if ((temp.stability == stability) && (temp.battleground) && (!temp.controlled))
                    {
                        if (stability - temp.influenceUSSR == 1)
                        {
                            targets.Add(country);
                            return true;
                        }
                    }
                }
                foreach (var country in region)
                {
                    var temp = game.countryLst.countries[country];
                    if ((temp.stability == stability) && (!temp.controlled))
                    {
                        if (stability - temp.influenceUSSR == 1)
                        {
                            targets.Add(country);
                            return true;
                        }
                    }
                }
            }
            return false;
        }

        private bool ArabIsraeliWarCondition()
        {
            int adjUs = 0;
            foreach (var country in new List<int> {45, 70, 42, 23 })
            {
                if (game.countryLst.countries[country].controller == 1)
                {
                    adjUs++;
                }
            }
            return ((game.countryLst.countries[38].influenceUSA > 2) && (adjUs < 2));
        }

        private void WarsawPactSelection()
        {
            if (numCountries(1, -2) >= 4)
            {
                int itter = 0;
                while (itter < 4)
                {
                    targetCountryRemoval(1, -2, 10);
                    itter++;
                }
            }
            else
            {
                targetCountryAdd(-2, 2);
                targetCountryAdd(-2, 2);
                targetCountryAdd(-2, 1);
            }
        }

        private bool SuezCrisisCondition()
        {
            var france = game.countryLst.countries[27];
            var UK = game.countryLst.countries[75];
            var israel = game.countryLst.countries[38];
            if (israel.influenceUSA + UK.influenceUSA + france.influenceUSA >= 5)
            {
                if (israel.influenceUSA >= 2)
                {
                    targets.Add(38);
                }
                if (france.influenceUSA >= 2)
                {
                    targets.Add(27);
                }
                if ((UK.influenceUSSR >= 2) && (targets.Count < 2))
                {
                    targets.Add(75);
                }
                return true;
            }
            return false;
        }

        private int playSpaceRace()
        {
            List<int> cardLst;
            if (game.turn < 4)
            {
                //earlyWar priority lists
                if (side == 1)
                {
                    cardLst = new List<int> {31, 16, 28, 7, 17, 14, 9, 30, 11, 13, 10, 15, 12, 8, 33, 104};
                }
                else
                {
                    cardLst = new List<int> {25, 31, 21, 23, 27, 106, 105, 29, 22, 4, 35, 19, 5, 103, 26};
                }
            }
            else if (game.turn < 8)
            {
                //midWar priority list-need to make priority
                if (side == 1)
                {
                    cardLst = new List<int> {31, 16, 28, 7, 17, 14, 9, 30, 11, 13, 10, 15, 12, 8, 33, 104};
                }
                else
                {
                    cardLst = new List<int> {25, 31, 21, 23, 27, 106, 105, 29, 22, 4, 35, 19, 5, 103, 26};
                }
            }
            else
            {
                //lateWar priority list-need to make priority
                if (side == 1)
                {
                    cardLst = new List<int> {31, 16, 28, 7, 17, 14, 9, 30, 11, 13, 10, 15, 12, 8, 33, 104};
                }
                else
                {
                    cardLst = new List<int> {25, 31, 21, 23, 27, 106, 105, 29, 22, 4, 35, 19, 5, 103, 26};
                }
            }
            List<int> valu = new List<int> {4, 3, 2, 1};
            foreach (int ops in valu)
            {
                foreach (int cardId in cardLst)
                {
                    foreach (Card card in hand)
                    {
                        if ((card.opsValue == ops) && (cardId == card.id) && (checkEventCondition(cardId)))
                        {
                            cardToPlay = cardId;
                            actionType = "SpaceRace";
                            completed = true;
                            return 0;
                        }
                    }
                }
            }
            return 0;
        }
    }
}
