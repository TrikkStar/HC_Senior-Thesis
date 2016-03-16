using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Project_Oppenheimer.Properties
{
    class Gamestate
    {
        public CountryList countryLst;
        public CardList cards;
        public int score;
        public int defcon;
        public int turn;
        public int round;
        public int usMilOps;
        public int ussrMilOps;

        public Gamestate()
        {
            score = 0;
            defcon = 5;
            turn = 0;
            round = 0; //headline phase
            usMilOps = 0;
            ussrMilOps = 0;
            countryLst = new CountryList();
            cards = new CardList();
        }

        public void militaryOp(int x)
        {
            if ((x == -1) && (ussrMilOps <= 5))
            {
                ussrMilOps++;
            } else if ((x == 1) && (usMilOps <= 5))
            {
                usMilOps++;
            }
        }

        public void scoreUSSR (int x)
        {
            score = score - x;
        }

        public void scoreUSA (int x)
        {
            score = score + x;
        }

        public void endTurn()
        {
            scoreUSSR(ussrMilOps);
            scoreUSA(usMilOps);
            checkVictory();
            improveDefcon();
            advanceTurn();
        }

        private void improveDefcon()
        {
            if (defcon < 5)
            {
                defcon = defcon - 1;
            }
        }

        public string Victory(int x)
        {
            if (x == -1)
            {
                return "Soviet Victory!";
            } else
            {
                return "American Victory!";
            }
        }

        public void advanceTurn()
        {
            if (turn == 10)
            {
                finalScoring();
            }
            else
            {
                turn = turn + 1;
                round = 0;
                usMilOps = 0;
                ussrMilOps = 0;
                cards.deal(turn);
            }
        }

        public void advanceRound()
        {
            if (turn < 4)
            {
                if (round < 14)
                {
                    round = round + 1;
                }
                else
                {
                    endTurn();
                }
            }
            else
            {
                if (round < 16)
                {
                    round = round + 1;
                }
                else
                {
                    endTurn();
                }
            }
        }

        public void scoreRegion(int x)
        {
            if (x == 2)
            {
                scoreEurope();
            } else if (x == 1)
            {
                scoreAsia();
            } else if (x == 3)
            {
                scoreMiddleEast();
            } else if (x == 38)
            {
                scoreSoutheastAsia();
            } else if (x == 79)
            {
                scoreAfrica();
            } else if (x == 81)
            {
                scoreSouthAmerica();
            }
            else if (x == 37)
            {
                scoreCentralAmerica();
            }
            checkVictory();
        }

        public void finalScoring()
        {
            scoreEurope();
            scoreMiddleEast();
            scoreCentralAmerica();
            scoreAsia();
            scoreAfrica();
            scoreSouthAmerica();
            checkVictory();
        }

        public void checkVictory()
        {
            if (score <= -20)
            {
                Victory(-1);
            } else if (score >= 20)
            {
                Victory(1);
            }
        }

        private void scoreEurope()
        {
            //need to figure out a way to generalise
            int usPresence = 0;
            int ussrPresence = 0;
            int usBattlegrounds = 0;
            int ussrBattlegrounds = 0;
            foreach (int element in countryLst.Europe)
            {
                var temp = countryLst.countries[element];
                if (temp.controlled)
                {
                    if (temp.controller == -1)
                    {
                        ussrPresence++;
                        if (temp.battleground)
                        {
                            ussrBattlegrounds++;
                        }
                    } else if (temp.controller == 1)
                    {
                        usPresence++;
                        if (temp.battleground)
                        {
                            usBattlegrounds++;
                        }
                    }
                }
            }
            //end need generalise
            if ((usBattlegrounds == 5) && (usPresence > ussrPresence) && (usPresence >= 6))
            {
                Victory(1);
            } else if ((usBattlegrounds > ussrBattlegrounds) && (usPresence > ussrPresence) && (usPresence >= 2) && (usBattlegrounds >= 1))
            {
                scoreUSA(7);
            } else if (usPresence >= 1)
            {
                scoreUSA(3);
            }
            if ((ussrBattlegrounds == 5) && (usPresence < ussrPresence) && (ussrPresence >= 6))
            {
                Victory(-1);
            }
            else if ((usBattlegrounds < ussrBattlegrounds) && (usPresence < ussrPresence) && (ussrPresence >= 2) && (ussrBattlegrounds >= 1))
            {
                scoreUSSR(7);
            }
            else if (usPresence >= 1)
            {
                scoreUSSR(3);
            }
            scoreUSA(usBattlegrounds);
            scoreUSSR(ussrBattlegrounds);
            //need to add special cases for adjacent country scoring
            checkVictory();
        }

        private void scoreCentralAmerica()
        {
            int usPresence = 0;
            int ussrPresence = 0;
            int usBattlegrounds = 0;
            int ussrBattlegrounds = 0;
            foreach (int element in countryLst.CentralAmerica)
            {
                var temp = countryLst.countries[element];
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
                    else if (temp.controller == 1)
                    {
                        usPresence++;
                        if (temp.battleground)
                        {
                            usBattlegrounds++;
                        }
                    }
                }
            }
            if ((usBattlegrounds == 3) && (usPresence > ussrPresence) && (usPresence >= 4))
            {
                scoreUSA(5);
            }
            else if ((usBattlegrounds > ussrBattlegrounds) && (usPresence > ussrPresence) && (usPresence >= 2) && (usBattlegrounds >= 1))
            {
                scoreUSA(3);
            }
            else if (usPresence >= 1)
            {
                scoreUSA(1);
            }
            if ((ussrBattlegrounds == 3) && (usPresence < ussrPresence) && (ussrPresence >= 4))
            {
                scoreUSSR(5);
            }
            else if ((usBattlegrounds < ussrBattlegrounds) && (usPresence < ussrPresence) && (ussrPresence >= 2) && (ussrBattlegrounds >= 1))
            {
                scoreUSSR(3);
            }
            else if (usPresence >= 1)
            {
                scoreUSSR(1);
            }
            scoreUSA(usBattlegrounds);
            scoreUSSR(ussrBattlegrounds);
            //need to add special cases for adjacent country scoring
            checkVictory();
        }

        private void scoreSouthAmerica()
        {
            int usPresence = 0;
            int ussrPresence = 0;
            int usBattlegrounds = 0;
            int ussrBattlegrounds = 0;
            foreach (int element in countryLst.SouthAmerica)
            {
                var temp = countryLst.countries[element];
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
                    else if (temp.controller == 1)
                    {
                        usPresence++;
                        if (temp.battleground)
                        {
                            usBattlegrounds++;
                        }
                    }
                }
            }
            if ((usBattlegrounds == 4) && (usPresence > ussrPresence) && (usPresence >= 5))
            {
                scoreUSA(6);
            }
            else if ((usBattlegrounds > ussrBattlegrounds) && (usPresence > ussrPresence) && (usPresence >= 2) && (usBattlegrounds >= 1))
            {
                scoreUSA(5);
            }
            else if (usPresence >= 1)
            {
                scoreUSA(2);
            }
            if ((ussrBattlegrounds == 4) && (usPresence < ussrPresence) && (ussrPresence >= 5))
            {
                scoreUSSR(6);
            }
            else if ((usBattlegrounds < ussrBattlegrounds) && (usPresence < ussrPresence) && (ussrPresence >= 2) && (ussrBattlegrounds >= 1))
            {
                scoreUSSR(5);
            }
            else if (usPresence >= 1)
            {
                scoreUSSR(2);
            }
            scoreUSA(usBattlegrounds);
            scoreUSSR(ussrBattlegrounds);
            checkVictory();
        }

        private void scoreAfrica()
        {
            int usPresence = 0;
            int ussrPresence = 0;
            int usBattlegrounds = 0;
            int ussrBattlegrounds = 0;
            foreach (int element in countryLst.Africa)
            {
                var temp = countryLst.countries[element];
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
                    else if (temp.controller == 1)
                    {
                        usPresence++;
                        if (temp.battleground)
                        {
                            usBattlegrounds++;
                        }
                    }
                }
            }
            if ((usBattlegrounds == 5) && (usPresence > ussrPresence) && (usPresence >= 6))
            {
                scoreUSA(6);
            }
            else if ((usBattlegrounds > ussrBattlegrounds) && (usPresence > ussrPresence) && (usPresence >= 2) && (usBattlegrounds >= 1))
            {
                scoreUSA(4);
            }
            else if (usPresence >= 1)
            {
                scoreUSA(1);
            }
            if ((ussrBattlegrounds == 5) && (usPresence < ussrPresence) && (ussrPresence >= 6))
            {
                scoreUSSR(6);
            }
            else if ((usBattlegrounds < ussrBattlegrounds) && (usPresence < ussrPresence) && (ussrPresence >= 2) && (ussrBattlegrounds >= 1))
            {
                scoreUSSR(4);
            }
            else if (usPresence >= 1)
            {
                scoreUSSR(1);
            }
            scoreUSA(usBattlegrounds);
            scoreUSSR(ussrBattlegrounds);
            checkVictory();
        }

        private void scoreMiddleEast()
        {

        }

        private void scoreAsia()
        {

        }

        private void scoreSoutheastAsia()
        {

        }
    }
}
