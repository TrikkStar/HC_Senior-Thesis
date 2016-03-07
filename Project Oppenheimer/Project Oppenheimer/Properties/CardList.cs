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
            
            Card china = new Card("The China Card", 6, 4, 0, false);
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
            
            Card card005 = new Card("Five-Year Plan", 5, 3, 1, false);
            earlyWar.Add(card005);

            Card card019 = new Card("Truman Doctrine", 19, 1, 1, false);
            earlyWar.Add(card019);

            Card card021 = new Card("NATO", 21, 4, 1, false);
            earlyWar.Add(card021);

            Card card022 = new Card("Independent Reds", 22, 2, 1, false);
            earlyWar.Add(card022);

            Card card023 = new Card("Mershal Plan", 23, 4, 1, false);
            earlyWar.Add(card023);

            Card card026 = new Card("CIA Created", 26, 1, 1, false);
            earlyWar.Add(card026);

            Card card025 = new Card("Containment", 25, 3, 1, false);
            earlyWar.Add(card025);

            Card card029 = new Card("East European Unrest", 29, 3, 1, false);
            earlyWar.Add(card029);

            Card card035 = new Card("Formosan Resolution", 35, 2, 1, false);
            earlyWar.Add(card035);

            Card card103 = new Card("Defectors", 103, 2, 1, false);
            earlyWar.Add(card103);

            Card card105 = new Card("Special Relationship", 105, 2, 1, false);
            earlyWar.Add(card105);

            Card card106 = new Card("NORAD", 106, 3, 1, false);
            earlyWar.Add(card106);

            Card card004 = new Card("Duck and Cover", 4, 3, 1, false);
            earlyWar.Add(card004);

            Card card027 = new Card("US/Japan Mutual Defense Pact", 27, 4, 1, false);
            earlyWar.Add(card027);

            Card card002 = new Card("Europe Scorinr", 2, 0, 0, true);
            earlyWar.Add(card002);

            Card card001 = new Card("Asia Scoring", 1, 0, 0, true);
            earlyWar.Add(card001);

            Card card003 = new Card("Middle East Scoring", 3, 0, 0, true);
            earlyWar.Add(card003);

            Card card031 = new Card("Red Scare/Purge", 31, 4, 0, false);
            earlyWar.Add(card031);

            Card card016 = new Card("Warsaw Pact Formed", 16, 3, -1, false);
            earlyWar.Add(card016);

            Card card028 = new Card("Suez Crisis", 28, 3, -1, false);
            earlyWar.Add(card028);

            Card card007 = new Card("Socialist Governments", 7, 3, -1, false);
            earlyWar.Add(card007);

            Card card018 = new Card("Captured Nazi Scientist", 18, 1, 0, false);
            earlyWar.Add(card018);

            Card card032 = new Card("UN Intervention", 32, 1, 0, false);
            earlyWar.Add(card032);

            Card card034 = new Card("Nuclear Test Ban", 34, 4, 0, false);
            earlyWar.Add(card034);

            Card card020 = new Card("Olympic Games", 20, 2, 0, false);
            earlyWar.Add(card020);

            Card card033 = new Card("De-Stalinization", 33, 3, -1, false);
            earlyWar.Add(card033);

            Card card008 = new Card("Fidel", 8, 2, -1, false);
            earlyWar.Add(card008);

            Card card012 = new Card("Romanian Abdication", 12, 1, -1, false);
            earlyWar.Add(card012);

            Card card015 = new Card("Nassir", 15, 1, -1, false);
            earlyWar.Add(card015);

            Card card104 = new Card("The Cambridge Five", 104, 2, -1, false);
            earlyWar.Add(card104);

            Card card010 = new Card("Blockade", 10, 1, -1, false);
            earlyWar.Add(card010);

            Card card013 = new Card("Arab-Israeli War", 13, 2, -1, false);
            earlyWar.Add(card013);

            Card card011 = new Card("Korean War", 11, 2, -1, false);
            earlyWar.Add(card011);

            Card card024 = new Card("Indo-Pakistani War", 24, 2, 0, false);
            earlyWar.Add(card024);

            Card card030 = new Card("Decolinization", 30, 2, -1, false);
            earlyWar.Add(card030);

            Card card009 = new Card("Vietnam Revolts", 9, 2, -1, false);
            earlyWar.Add(card009);

            Card card017 = new Card("De Gaulle Leads France", 17, 3, -1, false);
            earlyWar.Add(card017);

            Card card014 = new Card("COMECON", 14, 3, -1, false);
            earlyWar.Add(card014);

            deck.AddRange(earlyWar.Take(earlyWar.Count));
        }

        private void init_MW()
        {
            midWar = new List<Card>();
            //add cards
        }

        public void init_LW()
        {
            lateWar = new List<Card>();

            Card card087 = new Card("The Reformer", 87, 3, -1, false);
            lateWar.Add(card087);

            Card card102 = new Card("Iran-Iraq War", 102, 2, 0, false);
            lateWar.Add(card102);

            Card card086 = new Card("North Sea Oil", 86, 3, 1, false);
            lateWar.Add(card086);

            Card card084 = new Card("Reagan Bombs Libya", 84, 2, 1, false);
            lateWar.Add(card084);

            Card card083 = new Card("The Iron Lady", 83, 3, 1, false);
            lateWar.Add(card083);

            Card card096 = new Card("Tear Down This Wall", 96, 3, 1, false);
            lateWar.Add(card096);

            Card card110 = new Card("AWACS Sale to Saudis", 110, 3, 1, false);
            lateWar.Add(card110);

            Card card097 = new Card("An Evil Empire", 97, 3, 1, false);
            lateWar.Add(card097);

            Card card095 = new Card("Latin American Debt Crisis", 95, 2, -1, false);
            lateWar.Add(card095);

            Card card109 = new Card("Yuri and Samantha", 109, 2, -1, false);
            lateWar.Add(card109);

            Card card085 = new Card("Star Wars", 85, 2, 1, false);
            lateWar.Add(card085);

            Card card082 = new Card("Iranian Hostage Crisis", 82, 3, -1, false);
            lateWar.Add(card082);

            Card card094 = new Card("Chernobyl", 94, 3, -1, false);
            lateWar.Add(card094);

            Card card093 = new Card("Iran-Contra Scandal", 93, 2, -1, false);
            lateWar.Add(card093);

            Card card088 = new Card("Marine Baracks Bombing", 88, 2, -1, false);
            lateWar.Add(card088);

            Card card089 = new Card("Soviets Shoot Down KAL-007", 89, 4, 1, false);
            lateWar.Add(card089);

            Card card090 = new Card("Glasnost", 90, 4, -1, false);
            lateWar.Add(card090);

            Card card091 = new Card("Ortega Elected in Nicaragua", 91, 2, -1, false);
            lateWar.Add(card091);

            Card card092 = new Card("Terrorism", 92, 2, 0, false);
            lateWar.Add(card092);

            Card card098 = new Card("Aldrich AMES Remix", 98, 3, -1, false);
            lateWar.Add(card098);

            Card card099 = new Card("Pershing II Deployed", 99, 3, -1, false);
            lateWar.Add(card099);

            Card card101 = new Card("Solidarity", 101, 2, 1, false);
            lateWar.Add(card101);

            Card card100 = new Card("Wargames", 100, 4, 0, false);
            lateWar.Add(card100);
        }
    }
}
