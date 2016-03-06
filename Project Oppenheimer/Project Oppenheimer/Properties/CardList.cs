using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Project_Oppenheimer.Properties
{
    class CardList
    {
        public List<Card> deck;
        public List<Card> discarded;
        public List<Card> removed;
        public List<Card> usHand;
        public List<Card> ussrHand;
        public List<Card> earlyWar;
        public List<Card> midWar;
        public List<Card> lateWar;

        public CardList()
        {
            deck = new List<Card>();
            discarded = new List<Card>();
            removed = new List<Card>();
            usHand = new List<Card>();
            init_EW();
            init_MW();
            init_LW();
        }

        public void deal(int x)
        {

        }

        public void shuffel()
        {

        }

        public void discard(int x)
        {

        }

        public void remove(int x)
        {

        }

        /*private Card find(int x)
        {
            return null;
        }*/

        private void init_EW()
        {
            earlyWar = new List<Card>();
            //add cards
        }

        private void init_MW()
        {
            midWar = new List<Card>();
            //add cards
        }

        public void init_LW()
        {
            lateWar = new List<Card>();
            //add cards
        }
    }
}
