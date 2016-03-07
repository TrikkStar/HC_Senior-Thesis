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

        public Card(string _name, int _id, int ops, int _affiliation, bool _scoring)
        {
            name = _name;
            id = _id;
            opsValue = ops;
            affiliation = _affiliation;
            scoring = _scoring;
        }
    }
}
