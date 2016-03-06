using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Project_Oppenheimer.Properties
{
    class Country
    {
        public string name;
        public int stability;
        public int id;
        public bool battleground;
        public List<int> adjacent;
        public int influenceUSA;
        public int influenceUSSR;
        public bool controlled;
        public int controller;

        public Country(string n, int i, int s, bool b, List<int> l)
        {
            name = n;
            id = i;
            stability = s;
            battleground = b;
            adjacent = l;
            influenceUSA = 0;
            influenceUSSR = 0;
            controlled = false;
            controller = 0;
        }
    }
}
