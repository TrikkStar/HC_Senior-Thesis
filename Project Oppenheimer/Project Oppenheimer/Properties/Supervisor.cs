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

        }

        public void playCard(int player, int card)
        {

        }
    }
}
