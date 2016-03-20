using System.Collections.Generic;

namespace Project_Oppenheimer.Properties
{
    public class Country
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

        public void set_infUSA(int x)
        {
            influenceUSA = influenceUSA + x;
            updateControl();
        }

        public void set_infUSSR(int x)
        {
            influenceUSSR = influenceUSSR + x;
            updateControl();
        }

        private void updateControl()
        {
            if (influenceUSA != influenceUSSR)
            {
                if ((influenceUSA > influenceUSSR) && ((influenceUSA - influenceUSSR) >= stability))
                {
                    controlled = true;
                    controller = 1;
                }
                else if ((influenceUSSR > influenceUSA) && ((influenceUSSR - influenceUSA) >= stability))
                {
                    controlled = true;
                    controller = -1;
                }
                else
                {
                    controlled = false;
                    controller = 0;
                }
            }
            else
            {
                controlled = false;
                controller = 0;
            }
        }
    }
}
