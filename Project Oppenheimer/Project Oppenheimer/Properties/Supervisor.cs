using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Project_Oppenheimer.Properties
{
    class Supervisor
    {
        public Gamestate game;
        public Random rng;
        public int player;
        public int AI;

        public Supervisor()
        {
            game = new Gamestate();
            rng = new Random();
            player = 0;
            AI = 0;
        }

        public void newGame()
        {
            game.countryLst.countries[4].set_infUSA(4);
            game.countryLst.countries[58].set_infUSA(1);
            game.countryLst.countries[41].set_infUSA(1);
            game.countryLst.countries[66].set_infUSA(1);
            game.countryLst.countries[52].set_infUSSR(3);
            game.countryLst.countries[65].set_infUSA(1);
            game.countryLst.countries[36].set_infUSA(1);
            game.countryLst.countries[38].set_infUSA(1);
            game.countryLst.countries[37].set_infUSSR(1);
            game.countryLst.countries[70].set_infUSSR(1);
            game.countryLst.countries[66].set_infUSA(1);
            game.countryLst.countries[26].set_infUSSR(1);
            game.countryLst.countries[21].set_infUSSR(3);
            game.countryLst.countries[75].set_infUSA(5);
            game.countryLst.countries[13].set_infUSA(2);
            game.countryLst.countries[55].set_infUSA(2);
            //not final stuff just testing
            game.advanceTurn();
        }

        public void playCard(int player, int card)
        {

        }
    }
}
