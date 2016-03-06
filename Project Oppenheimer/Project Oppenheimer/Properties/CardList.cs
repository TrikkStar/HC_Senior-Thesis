using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Security.Cryptography;

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
            ussrHand = new List<Card>();
            init_EW();
            init_MW();
            init_LW();
        }

        public void deal(int x)
        {

        }

        public void shuffel()
        {
            deck.AddRange(discarded.Take(discarded.Count));
            discarded.Clear();

            RNGCryptoServiceProvider provider = new RNGCryptoServiceProvider();
            int n = deck.Count;
            while (n > 1)
            {
                byte[] box = new byte[1];
                do provider.GetBytes(box);
                while (!(box[0] < n * (Byte.MaxValue / n)));
                int k = (box[0] % n);
                n--;
                var value = deck[k];
                deck[k] = deck[n];
                deck[n] = value;
            }
        }

        public void discard(int x)
        {

        }

        public void remove(int x)
        {

        }

        private void add_MW()
        {
            deck.AddRange(midWar.Take(midWar.Count));
        }

        private void add_LW()
        {
            deck.AddRange(lateWar.Take(lateWar.Count));
        }

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
