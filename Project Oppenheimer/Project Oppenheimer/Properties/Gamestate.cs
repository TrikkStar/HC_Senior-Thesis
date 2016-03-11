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

        public Gamestate()
        {
            score = 0;
            defcon = 5;
            turn = 0;
            //round 0 = headline phase
            round = 0;
            countryLst = new CountryList();
            cards = new CardList();
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

        }

        public string Victory(int x)
        {
            return "you win";
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

        }

        private void scoreEurope()
        {

        }

        private void scoreCentralAmerica()
        {

        }

        private void scoreSouthAmerica()
        {

        }

        private void scoreAfrica()
        {

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
