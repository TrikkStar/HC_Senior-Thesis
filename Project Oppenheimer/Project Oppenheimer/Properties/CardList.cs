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
        private List<Card> facedownChinaUs;
        private List<Card> facedownChinaUssr;

        public CardList()
        {
            deck = new List<Card>();
            discarded = new List<Card>();
            removed = new List<Card>();
            usHand = new List<Card>();
            ussrHand = new List<Card>();
            facedownChinaUs = new List<Card>();
            facedownChinaUssr = new List<Card>();
            init_EW();
            init_MW();
            init_LW();
            
            Card china = new Card("China", 6, 4, 0, false);
            facedownChinaUssr.Add(china);
        }

        public void deal(int x)
        {
            if (x < 4)
            {
                dealX(8);
            }
            else if (x == 4)
            {
                deck.AddRange(midWar.Take(midWar.Count));
                dealX(9);
            }
            else if (x == 8)
            {
                deck.AddRange(lateWar.Take(lateWar.Count));
                dealX(9);
            }
            else
            {
                dealX(9);
            }
        }

        private void dealX(int x)
        {
            for (int i = 0; i < x; i++)
            {
                if (deck.Count == 0)
                {
                    shuffel();
                }
                if (ussrHand.Count < x)
                {
                    var tmp = deck[0];
                    ussrHand.Add(tmp);
                    deck.Remove(tmp);
                }
                if (deck.Count == 0)
                {
                    shuffel();
                }
                if (usHand.Count < x)
                {
                    var tmp = deck[0];
                    usHand.Add(tmp);
                    deck.Remove(tmp);
                }
            }
            dealChina();
        }

        private void dealChina()
        {
            if (facedownChinaUssr.Count != 0)
            {
                var temp = facedownChinaUssr[0];
                facedownChinaUssr.Remove(temp);
                ussrHand.Add(temp);
            }
            else if (facedownChinaUs.Count != 0)
            {
                var temp = facedownChinaUs[0];
                facedownChinaUs.Remove(temp);
                usHand.Add(temp);
            }
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

        public void discard(Card c)
        {
            if (c.id == 6)
            {
                discardChina(c);
            }
            else
            {
                if (ussrHand.Contains(c))
                {
                    discarded.Add(c);
                    ussrHand.Remove(c);
                }
                else if ((usHand.Contains(c)))
                {
                    discarded.Add(c);
                    usHand.Remove(c);
                }
            }
        }

        private void discardChina(Card c)
        {
            if (ussrHand.Contains(c))
            {
                facedownChinaUs.Add(c);
                ussrHand.Remove(c);
            }
            else if ((usHand.Contains(c)))
            {
                facedownChinaUssr.Add(c);
                usHand.Remove(c);
            }
        }

        public void remove(Card c)
        {
            if (ussrHand.Contains(c))
            {
                removed.Add(c);
                ussrHand.Remove(c);
            }
            else if ((usHand.Contains(c)))
            {
                removed.Add(c);
                usHand.Remove(c);
            }
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
