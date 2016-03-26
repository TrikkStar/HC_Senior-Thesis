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
        private Random rng;
        public int player;
        public int AI;
        public string AiOuput;
        public string GameOutput;

        public Supervisor()
        {
            game = new Gamestate();
            rng = new Random();
            player = 0;
            AI = 0;
            AiOuput = "";
            GameOutput = "";
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

        public void getAiMove()
        {
            Robert rob = new Robert(game, AI);
            AiOuput = rob.actionType + "\r\n";
            if (AI == 1)
            {
                Card card = new Card();
                foreach (Card crd in game.cards.usHand)
                {
                    if (crd.id == rob.cardToPlay)
                    {
                        card = crd;
                        break;
                    }
                }
                AiOuput = AiOuput + "Card to Play: " + card.name + "\r\n OPS Value: " + card.opsValue.ToString() + "\r\n";
            }
            else
            {
                Card card = new Card();
                foreach (Card crd in game.cards.ussrHand)
                {
                    if (crd.id == rob.cardToPlay)
                    {
                        card = crd;
                        break;
                    }
                }
                AiOuput = AiOuput + "Card to Play: " + card.name + "\r\n OPS Value: " + card.opsValue.ToString() + "\r\n";
            }
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
                AiOuput = AiOuput + "Something didn't quite go right \r\n";
            }
            applyAIAction(rob);
        }

        private void applyAIAction(Robert agent)
        {
            switch (agent.actionType)
            {
                case "Desperation":
                case "Super Desperation":
                    if ((agent.cardToPlay != 2) && (agent.cardToPlay != 1) && (agent.cardToPlay != 3) && (agent.cardToPlay != 38) && (agent.cardToPlay != 81) && (agent.cardToPlay != 37) && (agent.cardToPlay != 79))
                    {
                        applyEvent(AI, agent.cardToPlay, agent.targets, agent.targetAmounts);
                    }
                    else
                    {
                        game.scoreRegion(agent.cardToPlay);
                    }
                    playCard(AI, agent.cardToPlay, true, false);
                    break;
                case "Scoring":
                    game.scoreRegion(agent.cardToPlay);
                    playCard(AI, agent.cardToPlay, true, false);
                    break;
                case "Event":
                    applyEvent(AI, agent.cardToPlay, agent.targets, agent.targetAmounts);
                    playCard(AI, agent.cardToPlay, true, false);
                    break;
                case "SpaceRace":
                    attemptSpaceRace(AI);
                    playCard(AI, agent.cardToPlay, false, true);
                    break;
                case "Realingment":
                    //need to make sure apropriate number of realingments are made
                    foreach (int target in agent.targets)
                    {
                        attempRealignment(AI, target);
                    }
                    playCard(AI, agent.cardToPlay, false, false);
                    break;
                case "Coup":
                    attemptCoup(AI, agent.targets[0], agent.targetAmounts[0]);
                    playCard(AI, agent.cardToPlay, false, false);
                    break;
                case "Inital Placement":
                    for (int i = 0; i < agent.targets.Count; i++)
                    {
                        placeInfluence(AI, agent.targets[i], agent.targetAmounts[i]);
                    }
                    break;
                case "Place Influence":
                    for (int i = 0; i < agent.targets.Count; i++)
                    {
                        placeInfluence(AI, agent.targets[i], agent.targetAmounts[i]);
                    }
                    playCard(AI, agent.cardToPlay, false, false);
                    break;
            }
        }

        public void playCard(int player, int card, bool isEvent, bool isDiscarded)
        {
            //only discardes or removes card
            //need to figure out how to trigger events caused by player not playing card
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
                if (((isEvent) || ((toPlay.affiliation == -1) && (!isDiscarded))) && (toPlay.oneTimeEvent))
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
                if (((isEvent) || ((toPlay.affiliation == 1) && (!isDiscarded))) && (toPlay.oneTimeEvent))
                {
                    game.cards.remove(toPlay);
                }
                else
                {
                    game.cards.discard(toPlay);
                }
            }
        }

        public void applyEvent(int player, int id, List<int> target, List<int> amount)
        {
            //figure out how this will target stuff
            switch (id)
            {
                case 4:
                    break;
            }
        }

        public void attemptSpaceRace(int player)
        {
            var rand = rng.Next(1, 7);
            GameOutput = "Space Race Attempt \r\n Roll: " + rand.ToString() + "\r\n";
            if (player == 1)
            {
                switch (game.usSpaceRace)
                {
                    case 0:
                        if (rand <= 3)
                        {
                            GameOutput = GameOutput + "Outcome: Success!";
                            game.usSpaceRace++;
                            if (game.usSpaceRace > game.ussrSpaceRace)
                            {
                                game.scoreUSA(2);
                            }
                            else
                            {
                                game.scoreUSA(1);
                            }
                        }
                        else
                        {
                            GameOutput = GameOutput + "Outcome: Failure!";
                        }
                        game.usSrPlayed = true;
                        break;
                    case 1:
                        if (rand <= 4)
                        {
                            GameOutput = GameOutput + "Outcome: Success!";
                            game.usSpaceRace++;
                        }
                        else
                        {
                            GameOutput = GameOutput + "Outcome: Failure!";
                        }
                        game.usSrPlayed = true;
                        break;
                    case 2:
                        if (rand <= 3)
                        {
                            GameOutput = GameOutput + "Outcome: Success!";
                            game.usSpaceRace++;
                            if (game.usSpaceRace > game.ussrSpaceRace)
                            {
                                game.scoreUSA(2);
                            }
                        }
                        else
                        {
                            GameOutput = GameOutput + "Outcome: Failure!";
                        }
                        game.usSrPlayed = true;
                        break;
                    case 3:
                        if (rand <= 4)
                        {
                            GameOutput = GameOutput + "Outcome: Success!";
                            game.usSpaceRace++;
                        }
                        else
                        {
                            GameOutput = GameOutput + "Outcome: Failure!";
                        }
                        game.usSrPlayed = true;
                        break;
                    case 4:
                        if (rand <= 3)
                        {
                            GameOutput = GameOutput + "Outcome: Success!";
                            game.usSpaceRace++;
                            if (game.usSpaceRace > game.ussrSpaceRace)
                            {
                                game.scoreUSA(3);
                            }
                            else
                            {
                                game.scoreUSA(1);
                            }
                        }
                        else
                        {
                            GameOutput = GameOutput + "Outcome: Failure!";
                        }
                        game.usSrPlayed = true;
                        break;
                    case 5:
                        if (rand <= 4)
                        {
                            GameOutput = GameOutput + "Outcome: Success!";
                            game.usSpaceRace++;
                        }
                        else
                        {
                            GameOutput = GameOutput + "Outcome: Failure!";
                        }
                        game.usSrPlayed = true;
                        break;
                    case 6:
                        if (rand <= 3)
                        {
                            GameOutput = GameOutput + "Outcome: Success!";
                            game.usSpaceRace++;
                            if (game.usSpaceRace > game.ussrSpaceRace)
                            {
                                game.scoreUSA(4);
                            }
                            else
                            {
                                game.scoreUSA(2);
                            }
                        }
                        else
                        {
                            GameOutput = GameOutput + "Outcome: Failure!";
                        }
                        game.usSrPlayed = true;
                        break;
                    case 7:
                        if (rand <= 2)
                        {
                            GameOutput = GameOutput + "Outcome: Success!";
                            game.usSpaceRace++;
                            if (game.usSpaceRace > game.ussrSpaceRace)
                            {
                                game.scoreUSA(2);
                            }
                        }
                        else
                        {
                            GameOutput = GameOutput + "Outcome: Failure!";
                        }
                        game.usSrPlayed = true;
                        break;
                }
            }
            else
            {
                switch (game.ussrSpaceRace)
                {
                    case 0:
                        if (rand <= 3)
                        {
                            GameOutput = GameOutput + "Outcome: Success!";
                            game.ussrSpaceRace++;
                            if (game.usSpaceRace < game.ussrSpaceRace)
                            {
                                game.scoreUSSR(2);
                            }
                            else
                            {
                                game.scoreUSSR(1);
                            }
                        }
                        else
                        {
                            GameOutput = GameOutput + "Outcome: Failure!";
                        }
                        game.ussrSrPlayed = true;
                        break;
                    case 1:
                        if (rand <= 4)
                        {
                            GameOutput = GameOutput + "Outcome: Success!";
                            game.ussrSpaceRace++;
                        }
                        else
                        {
                            GameOutput = GameOutput + "Outcome: Failure!";
                        }
                        game.ussrSrPlayed = true;
                        break;
                    case 2:
                        if (rand <= 3)
                        {
                            GameOutput = GameOutput + "Outcome: Success!";
                            game.ussrSpaceRace++;
                            if (game.usSpaceRace < game.ussrSpaceRace)
                            {
                                game.scoreUSSR(2);
                            }
                        }
                        else
                        {
                            GameOutput = GameOutput + "Outcome: Failure!";
                        }
                        game.ussrSrPlayed = true;
                        break;
                    case 3:
                        if (rand <= 4)
                        {
                            GameOutput = GameOutput + "Outcome: Success!";
                            game.ussrSpaceRace++;
                        }
                        else
                        {
                            GameOutput = GameOutput + "Outcome: Failure!";
                        }
                        game.ussrSrPlayed = true;
                        break;
                    case 4:
                        if (rand <= 3)
                        {
                            GameOutput = GameOutput + "Outcome: Success!";
                            game.ussrSpaceRace++;
                            if (game.usSpaceRace < game.ussrSpaceRace)
                            {
                                game.scoreUSSR(3);
                            }
                            else
                            {
                                game.scoreUSSR(1);
                            }
                        }
                        else
                        {
                            GameOutput = GameOutput + "Outcome: Failure!";
                        }
                        game.ussrSrPlayed = true;
                        break;
                    case 5:
                        if (rand <= 4)
                        {
                            GameOutput = GameOutput + "Outcome: Success!";
                            game.ussrSpaceRace++;
                        }
                        else
                        {
                            GameOutput = GameOutput + "Outcome: Failure!";
                        }
                        game.ussrSrPlayed = true;
                        break;
                    case 6:
                        if (rand <= 3)
                        {
                            GameOutput = GameOutput + "Outcome: Success!";
                            game.ussrSpaceRace++;
                            if (game.usSpaceRace < game.ussrSpaceRace)
                            {
                                game.scoreUSSR(4);
                            }
                            else
                            {
                                game.scoreUSSR(2);
                            }
                        }
                        else
                        {
                            GameOutput = GameOutput + "Outcome: Failure!";
                        }
                        game.ussrSrPlayed = true;
                        break;
                    case 7:
                        if (rand <= 2)
                        {
                            GameOutput = GameOutput + "Outcome: Success!";
                            game.ussrSpaceRace++;
                            if (game.usSpaceRace < game.ussrSpaceRace)
                            {
                                game.scoreUSSR(2);
                            }
                        }
                        else
                        {
                            GameOutput = GameOutput + "Outcome: Failure!";
                        }
                        game.ussrSrPlayed = true;
                        break;
                }
            }
        }

        public void attempRealignment(int player, int target)
        {
            int usRoll = rng.Next(1, 7);
            int ussrRoll = rng.Next(1, 7);
            int usBonus = usRoll;
            int ussrBonus = ussrRoll;
            Country country = game.countryLst.countries[target];
            if (country.influenceUSA > country.influenceUSSR)
            {
                usBonus++;
            }
            else if (country.influenceUSSR > country.influenceUSA)
            {
                ussrBonus++;
            }
            foreach (var adj in country.adjacent)
            {
                if ((adj == -5) && (player == 1))
                {
                    usBonus++;
                }
                else if ((adj == -10) && (player == -1))
                {
                    ussrBonus++;
                }
                else if (game.countryLst.countries[adj].controller == 1)
                {
                    usBonus++;
                }
                else if (game.countryLst.countries[adj].controller == -1)
                {
                    ussrBonus++;
                }
            }
            GameOutput = "Realignment Attempt \r\n US Roll: " + usRoll + "\r\n USSR Roll: " + ussrRoll + "\r\n";
            if (player == 1)
            {
                if (usBonus > ussrBonus)
                {
                    GameOutput = GameOutput + "Outcome: Success!";
                    country.set_infUSSR(-(usBonus - ussrBonus));
                }
                else
                {
                    GameOutput = GameOutput + "Outcome: Failure!";
                }
            }
            else
            {
                if (usBonus < ussrBonus)
                {
                    GameOutput = GameOutput + "Outcome: Success!";
                    country.set_infUSSR(-(ussrBonus - usBonus));
                }
                else
                {
                    GameOutput = GameOutput + "Outcome: Failure!";
                }
            }
        }

        public void attemptCoup(int player, int target, int ops)
        {
            int rand = rng.Next(1, 7);
            int attempt = rand + ops;
            int dificulty = game.countryLst.countries[target].stability * 2;
            if (game.countryLst.countries[target].battleground)
            {
                game.defcon--;
            }
            GameOutput = "Coup Attempt: rolled " + rand.ToString() + "\r\n Target: " + game.countryLst.countries[target].name + "\r\n Strength: " + attempt.ToString() + "\r\n";
            if (attempt > dificulty)
            {
                GameOutput = GameOutput + "Outcome: Success!";
                var country = game.countryLst.countries[target];
                var success = attempt - dificulty;
                if (player == 1)
                {
                    if (country.influenceUSSR >= success)
                    {
                        country.set_infUSSR(-success);
                    }
                    else
                    {
                        success = success - country.influenceUSSR;
                        country.influenceUSSR = 0;
                        country.set_infUSA(success);
                    }
                    game.usMillOp(ops);
                }
                else
                {
                    if (country.influenceUSA >= success)
                    {
                        country.set_infUSA(-success);
                    }
                    else
                    {
                        success = success - country.influenceUSA;
                        country.influenceUSA = 0;
                        country.set_infUSSR(success);
                    }
                    game.ussrMillOp(ops);
                }
            }
            else
            {
                GameOutput = GameOutput + "Outcome: Failure!";
            }
        }

        public void placeInfluence(int player, int target, int amount)
        {
            if (player == 1)
            {
                game.countryLst.countries[target].set_infUSA(amount);
            }
            else
            {
                game.countryLst.countries[target].set_infUSSR(amount);
            }
        }
    }
}
