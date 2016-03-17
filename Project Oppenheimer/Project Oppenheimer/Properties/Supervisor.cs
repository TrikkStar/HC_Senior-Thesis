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

        public Supervisor()
        {
            game = new Gamestate();
            rng = new Random();
        }

        public void playCard(int x)
        {

        }
    }
}
