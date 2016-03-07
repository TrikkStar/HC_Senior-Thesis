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

        public void advanceTurn()
        {

        }
        public void advanceRound()
        {

        }
    }
}
