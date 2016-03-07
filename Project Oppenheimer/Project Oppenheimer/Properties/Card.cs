using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Project_Oppenheimer.Properties
{
    struct Card
    {
        public string name;
        public int id;
        public int opsValue;
        public int affiliation;
        public bool scoring;

        public Card(string n, int i, int o, int a, bool s)
        {
            name = n;
            id = i;
            opsValue = o;
            affiliation = a;
            scoring = s;
        }
    }
}
