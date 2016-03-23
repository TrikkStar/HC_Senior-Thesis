using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Project_Oppenheimer.Properties
{
    public class Supervisor
    {
        public Gamestate game;
        public Random rng;
        public int player;
        public int AI;
        public string AiOuput;

        public Supervisor()
        {
            game = new Gamestate();
            rng = new Random();
            player = 0;
            AI = 0;
            AiOuput = "";
        }

        public void newGame()
        {
            game.countryLst.countries[4].set_infUSA(4);
            game.countryLst.countries[58].set_infUSA(1);
            game.countryLst.countries[41].set_infUSA(1);
            game.countryLst.countries[66].set_infUSA(1);
            game.countryLst.countries[52].set_infUSSR(3);
            game.countryLst.countries[65].set_infUSA(1);
            game.countryLst.countries[36].set_infUSA(1);
            game.countryLst.countries[38].set_infUSA(1);
            game.countryLst.countries[37].set_infUSSR(1);
            game.countryLst.countries[70].set_infUSSR(1);
            game.countryLst.countries[66].set_infUSA(1);
            game.countryLst.countries[26].set_infUSSR(1);
            game.countryLst.countries[21].set_infUSSR(3);
            game.countryLst.countries[75].set_infUSA(5);
            game.countryLst.countries[13].set_infUSA(2);
            game.countryLst.countries[55].set_infUSA(2);
            game.cards.deal(0);
        }

        public void initialInfluencePlacement()
        {
            //stuff
        }

        public void getAiMove()
        {
            AiOuput = "";
            Robert rob = new Robert(game, AI);
            AiOuput = rob.actionType + "\r\n";
            AiOuput = AiOuput + "Card to Play: " + rob.cardToPlay.ToString() + "\r\n";
            if (rob.targets.Count == rob.targetAmounts.Count)
            {
                for (int i = 0; i < rob.targets.Count; i++)
                {
                    AiOuput = AiOuput + "Target: " + game.countryLst.countries[rob.targets[i]].name + " Amount: " + rob.targetAmounts[i].ToString() + "\r\n";
                }
            }
            //in case something breaks
            else
            {
                foreach (var x in rob.targets)
                {
                    AiOuput = AiOuput + "Target: " + game.countryLst.countries[x].name + "\r\n";
                }
                foreach(var y in rob.targetAmounts)
                {
                    AiOuput = AiOuput + "Amount: " + y.ToString() + "\r\n";
                }
            }
            playCard(AI, rob.cardToPlay);
            //apply Ai Move;
        }

        public void playCard(int player, int card)
        {
            //only discardes or removes card, doesn't do anything more yet
            Card toPlay = new Card();
            if (player == 1)
            {
                foreach (var crd in game.cards.usHand)
                {
                    if (crd.id == card)
                    {
                        toPlay = crd;
                        break;
                    }
                }
                if (toPlay.oneTimeEvent)
                {
                    game.cards.remove(toPlay);
                }
                else
                {
                    game.cards.discard(toPlay);
                }
            }
            else
            {
                foreach (var crd in game.cards.ussrHand)
                {
                    if (crd.id == card)
                    {
                        toPlay = crd;
                        break;
                    }
                }
                if (toPlay.oneTimeEvent)
                {
                    game.cards.remove(toPlay);
                }
                else
                {
                    game.cards.discard(toPlay);
                }
            }
        }
    }
}
