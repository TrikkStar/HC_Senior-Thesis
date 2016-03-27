namespace Project_Oppenheimer.Properties
{
    public class Gamestate
    {
        public CountryList countryLst;
        public CardList cards;
        public int score;
        public int defcon;
        public int turn;
        public int round;
        public int usMilOps;
        public int ussrMilOps;
        public int usSpaceRace;
        public int ussrSpaceRace;
        public bool usSrPlayed;
        public bool ussrSrPlayed;
        public bool usSrSecond;
        public bool ussrSrSecond;
        public bool gameOver;
        public string victor;
        //EW
        public bool DeGualleLeadsFrance;
        public bool WarsawPactFormed;
        public bool USJapanMutualDefensePact;
        public bool NORAD;
        public bool FormosanResolution;
        public bool MarshallPlan;
        public bool NATO;
        //MW
        public bool BearTrap;
        public bool WillyBrandt;
        public bool CampDavidAccords;
        public bool ShuttleDiplomacy;
        public bool FlowerPower;
        public bool Quagmire;
        public bool JohnPaulIIElectedPope;
        //LW
        public bool IranianHostageCrisis;
        public bool AnEvilEmpire;
        public bool AwacsSaleToSaudis;
        public bool TearDownThisWall;
        public bool TheIronLady;
        public bool NorthSeaOil;
        public bool TheReformer;

        public Gamestate()
        {
            score = 0;
            defcon = 5;
            turn = 0;
            round = 0; //headline phase
            usMilOps = 0;
            ussrMilOps = 0;
            usSpaceRace = 0;
            ussrSpaceRace = 0;
            usSrPlayed = false;
            ussrSrPlayed = false;
            usSrSecond = false;
            ussrSrSecond = false;
            gameOver = false;
            victor = "N/A";
            countryLst = new CountryList();
            cards = new CardList();
            //permanent status markers
            DeGualleLeadsFrance = false;
            WarsawPactFormed = false;
            USJapanMutualDefensePact = false;
            NORAD = false;
            MarshallPlan = false;
            NATO = false;
            FormosanResolution = false;
            BearTrap = false;
            WillyBrandt = false;
            CampDavidAccords = false;
            ShuttleDiplomacy = false;
            FlowerPower = false;
            Quagmire = false;
            JohnPaulIIElectedPope = false;
            IranianHostageCrisis = false;
            AnEvilEmpire = false;
            AwacsSaleToSaudis = false;
            TearDownThisWall = false;
            TheIronLady = false;
            NorthSeaOil = false;
            TheReformer = false;
        }

        public void advanceSpaceRace(int x)
        {
            //special space race functions taken care of by supervisor
            if (x == -1)
            {
                advanceUssrSR();
            }
            else
            {
                advanceUsSR();
            }
            checkVictory();
        }

        private void advanceUssrSR()
        {
            if (ussrSpaceRace == 0)
            {
                if (usSpaceRace <= ussrSpaceRace)
                {
                    scoreUSSR(2);
                }
                else
                {
                    scoreUSSR(1);
                }
                ussrSpaceRace++;
            }
            else if (ussrSpaceRace == 2)
            {
                if (usSpaceRace <= ussrSpaceRace)
                {
                    scoreUSSR(2);
                }
                ussrSpaceRace++;
            }
            else if (ussrSpaceRace == 4)
            {
                if (usSpaceRace <= ussrSpaceRace)
                {
                    scoreUSSR(3);
                }
                else
                {
                    scoreUSSR(1);
                }
                ussrSpaceRace++;
            }
            else if (ussrSpaceRace == 6)
            {
                if (usSpaceRace <= ussrSpaceRace)
                {
                    scoreUSSR(4);
                }
                else
                {
                    scoreUSSR(2);
                }
                ussrSpaceRace++;
            }
            else if (ussrSpaceRace == 7)
            {
                if (usSpaceRace <= ussrSpaceRace)
                {
                    scoreUSSR(2);
                }
                ussrSpaceRace++;
            }
            else if (ussrSpaceRace < 8)
            {
                ussrSpaceRace++;
            }
        }

        private void advanceUsSR()
        {
            if (usSpaceRace == 0)
            {
                if (usSpaceRace >= ussrSpaceRace)
                {
                    scoreUSA(2);
                }
                else
                {
                    scoreUSA(1);
                }
                usSpaceRace++;
            }
            else if (usSpaceRace == 2)
            {
                if (usSpaceRace >= ussrSpaceRace)
                {
                    scoreUSA(2);
                }
                usSpaceRace++;
            }
            else if (usSpaceRace == 4)
            {
                if (usSpaceRace >= ussrSpaceRace)
                {
                    scoreUSA(3);
                }
                else
                {
                    scoreUSA(1);
                }
                usSpaceRace++;
            }
            else if (usSpaceRace == 6)
            {
                if (usSpaceRace >= ussrSpaceRace)
                {
                    scoreUSA(4);
                }
                else
                {
                    scoreUSA(2);
                }
                usSpaceRace++;
            }
            else if (usSpaceRace == 7)
            {
                if (usSpaceRace >= ussrSpaceRace)
                {
                    scoreUSA(2);
                }
                usSpaceRace++;
            }
            else if (usSpaceRace < 8)
            {
                usSpaceRace++;
            }
        }

        public void ussrMillOp(int x)
        {
            ussrMilOps = ussrMilOps + x;
            if (ussrMilOps > 5)
            {
                ussrMilOps = 5;
            }
        }

        public void usMillOp(int x)
        {
            usMilOps = usMilOps + x;
            if (usMilOps > 5)
            {
                usMilOps = 5;
            }
        }

        public void scoreUSSR (int x)
        {
            score = score - x;
        }

        public void scoreUSA (int x)
        {
            score = score + x;
        }

        public void endTurn()
        {
            scoreUSSR(ussrMilOps);
            scoreUSA(usMilOps);
            checkVictory();
            advanceTurn();
        }

        public void Victory(int x)
        {
            if (x == -1)
            {
                victor = "Soviet Victory!";
                gameOver = true;
            }
            else
            {
                victor = "American Victory!";
                gameOver = true;
            }
        }

        public void advanceTurn()
        {
            if (turn == 10)
            {
                finalScoring();
            }
            else
            {
                if (defcon < 5)
                {
                    defcon++;
                }
                turn++;
                round = 0;
                usMilOps = 0;
                ussrMilOps = 0;
                ussrSrPlayed = false;
                usSrPlayed = false;
                ussrSrSecond = false;
                usSrSecond = false;
                cards.deal(turn);
            }
        }

        public void advanceRound()
        {
            //need to add special case for spacerace
            if (turn == 0)
            {
                turn = 1;
                round = 0;
            }
            else if (turn < 4)
            {
                if (round < 14)
                {
                    round = round + 1;
                }
                else
                {
                    endTurn();
                }
            }
            else
            {
                if (round < 16)
                {
                    round = round + 1;
                }
                else
                {
                    endTurn();
                }
            }
        }

        public void scoreRegion(int x)
        {
            switch (x)
            {
                case 2:
                    scoreEurope();
                    break;
                case 1:
                    scoreAsia();
                    break;
                case 3:
                    scoreMiddleEast();
                    break;
                case 38:
                    scoreSoutheastAsia();
                    break;
                case 79:
                    scoreAfrica();
                    break;
                case 81:
                    scoreSouthAmerica();
                    break;
                case 37:
                    scoreCentralAmerica();
                    break;
            }
            checkVictory();
        }

        public void finalScoring()
        {
            scoreEurope();
            scoreMiddleEast();
            scoreCentralAmerica();
            scoreAsia();
            scoreAfrica();
            scoreSouthAmerica();
            checkVictory();
            if (!gameOver)
            {
                gameOver = true;
                victor = "Draw";
            }
        }

        public void checkVictory()
        {
            if (score <= -20)
            {
                Victory(-1);
            } else if (score >= 20)
            {
                Victory(1);
            }
        }

        public void checkDefcon(int side)
        {
            if (defcon == 1)
            {
                Victory(-side);
            }
        }

        private void scoreEurope()
        {
            //need to figure out a way to generalise out into a seperate function
            int usPresence = 0;
            int ussrPresence = 0;
            int usBattlegrounds = 0;
            int ussrBattlegrounds = 0;
            foreach (int element in countryLst.Europe)
            {
                var temp = countryLst.countries[element];
                if (temp.controlled)
                {
                    if (temp.controller == -1)
                    {
                        ussrPresence++;
                        if (temp.battleground)
                        {
                            ussrBattlegrounds++;
                        }
                    } else
                    {
                        usPresence++;
                        if (temp.battleground)
                        {
                            usBattlegrounds++;
                        }
                    }
                }
            }
            //end need generalise
            if ((usBattlegrounds == 5) && (usPresence > ussrPresence) && (usPresence >= 6))
            {
                Victory(1);
            } else if ((usBattlegrounds > ussrBattlegrounds) && (usPresence > ussrPresence) && (usPresence >= 2) && (usBattlegrounds >= 1))
            {
                scoreUSA(7);
            } else if (usPresence >= 1)
            {
                scoreUSA(3);
            }
            if ((ussrBattlegrounds == 5) && (usPresence < ussrPresence) && (ussrPresence >= 6))
            {
                Victory(-1);
            }
            else if ((usBattlegrounds < ussrBattlegrounds) && (usPresence < ussrPresence) && (ussrPresence >= 2) && (ussrBattlegrounds >= 1))
            {
                scoreUSSR(7);
            }
            else if (usPresence >= 1)
            {
                scoreUSSR(3);
            }
            scoreUSA(usBattlegrounds);
            scoreUSSR(ussrBattlegrounds);
            //special cases for adjacentcy
            //Finland
            if (countryLst.countries[26].controller == 1)
            {
                scoreUSA(1);
            }
            //Poland
            if (countryLst.countries[59].controller == 1)
            {
                scoreUSA(1);
            }
            //Romania
            if (countryLst.countries[60].controller == 1)
            {
                scoreUSA(1);
            }
            //Canada
            if (countryLst.countries[13].controller == -1)
            {
                scoreUSSR(1);
            }
            checkVictory();
        }

        private void scoreCentralAmerica()
        {
            int usPresence = 0;
            int ussrPresence = 0;
            int usBattlegrounds = 0;
            int ussrBattlegrounds = 0;
            foreach (int element in countryLst.CentralAmerica)
            {
                var temp = countryLst.countries[element];
                if (temp.controlled)
                {
                    if (temp.controller == -1)
                    {
                        ussrPresence++;
                        if (temp.battleground)
                        {
                            ussrBattlegrounds++;
                        }
                    }
                    else
                    {
                        usPresence++;
                        if (temp.battleground)
                        {
                            usBattlegrounds++;
                        }
                    }
                }
            }
            if ((usBattlegrounds == 3) && (usPresence > ussrPresence) && (usPresence >= 4))
            {
                scoreUSA(5);
            }
            else if ((usBattlegrounds > ussrBattlegrounds) && (usPresence > ussrPresence) && (usPresence >= 2) && (usBattlegrounds >= 1))
            {
                scoreUSA(3);
            }
            else if (usPresence >= 1)
            {
                scoreUSA(1);
            }
            if ((ussrBattlegrounds == 3) && (usPresence < ussrPresence) && (ussrPresence >= 4))
            {
                scoreUSSR(5);
            }
            else if ((usBattlegrounds < ussrBattlegrounds) && (usPresence < ussrPresence) && (ussrPresence >= 2) && (ussrBattlegrounds >= 1))
            {
                scoreUSSR(3);
            }
            else if (usPresence >= 1)
            {
                scoreUSSR(1);
            }
            scoreUSA(usBattlegrounds);
            scoreUSSR(ussrBattlegrounds);
            //Cuba
            if (countryLst.countries[17].controller == -1)
            {
                scoreUSSR(1);
            }
            //Mexico
            if (countryLst.countries[48].controller == -1)
            {
                scoreUSSR(1);
            }
            checkVictory();
        }

        private void scoreSouthAmerica()
        {
            int usPresence = 0;
            int ussrPresence = 0;
            int usBattlegrounds = 0;
            int ussrBattlegrounds = 0;
            foreach (int element in countryLst.SouthAmerica)
            {
                var temp = countryLst.countries[element];
                if (temp.controlled)
                {
                    if (temp.controller == -1)
                    {
                        ussrPresence++;
                        if (temp.battleground)
                        {
                            ussrBattlegrounds++;
                        }
                    }
                    else
                    {
                        usPresence++;
                        if (temp.battleground)
                        {
                            usBattlegrounds++;
                        }
                    }
                }
            }
            if ((usBattlegrounds == 4) && (usPresence > ussrPresence) && (usPresence >= 5))
            {
                scoreUSA(6);
            }
            else if ((usBattlegrounds > ussrBattlegrounds) && (usPresence > ussrPresence) && (usPresence >= 2) && (usBattlegrounds >= 1))
            {
                scoreUSA(5);
            }
            else if (usPresence >= 1)
            {
                scoreUSA(2);
            }
            if ((ussrBattlegrounds == 4) && (usPresence < ussrPresence) && (ussrPresence >= 5))
            {
                scoreUSSR(6);
            }
            else if ((usBattlegrounds < ussrBattlegrounds) && (usPresence < ussrPresence) && (ussrPresence >= 2) && (ussrBattlegrounds >= 1))
            {
                scoreUSSR(5);
            }
            else if (usPresence >= 1)
            {
                scoreUSSR(2);
            }
            scoreUSA(usBattlegrounds);
            scoreUSSR(ussrBattlegrounds);
            checkVictory();
        }

        private void scoreAfrica()
        {
            int usPresence = 0;
            int ussrPresence = 0;
            int usBattlegrounds = 0;
            int ussrBattlegrounds = 0;
            foreach (int element in countryLst.Africa)
            {
                var temp = countryLst.countries[element];
                if (temp.controlled)
                {
                    if (temp.controller == -1)
                    {
                        ussrPresence++;
                        if (temp.battleground)
                        {
                            ussrBattlegrounds++;
                        }
                    }
                    else
                    {
                        usPresence++;
                        if (temp.battleground)
                        {
                            usBattlegrounds++;
                        }
                    }
                }
            }
            if ((usBattlegrounds == 5) && (usPresence > ussrPresence) && (usPresence >= 6))
            {
                scoreUSA(6);
            }
            else if ((usBattlegrounds > ussrBattlegrounds) && (usPresence > ussrPresence) && (usPresence >= 2) && (usBattlegrounds >= 1))
            {
                scoreUSA(4);
            }
            else if (usPresence >= 1)
            {
                scoreUSA(1);
            }
            if ((ussrBattlegrounds == 5) && (usPresence < ussrPresence) && (ussrPresence >= 6))
            {
                scoreUSSR(6);
            }
            else if ((usBattlegrounds < ussrBattlegrounds) && (usPresence < ussrPresence) && (ussrPresence >= 2) && (ussrBattlegrounds >= 1))
            {
                scoreUSSR(4);
            }
            else if (usPresence >= 1)
            {
                scoreUSSR(1);
            }
            scoreUSA(usBattlegrounds);
            scoreUSSR(ussrBattlegrounds);
            checkVictory();
        }

        private void scoreMiddleEast()
        {
            int usPresence = 0;
            int ussrPresence = 0;
            int usBattlegrounds = 0;
            int ussrBattlegrounds = 0;
            foreach (int element in countryLst.MiddleEast)
            {
                var temp = countryLst.countries[element];
                if (temp.controlled)
                {
                    if (temp.controller == -1)
                    {
                        ussrPresence++;
                        if (temp.battleground)
                        {
                            ussrBattlegrounds++;
                        }
                    }
                    else
                    {
                        usPresence++;
                        if (temp.battleground)
                        {
                            usBattlegrounds++;
                        }
                    }
                }
            }
            if ((usBattlegrounds == 6) && (usPresence > ussrPresence) && (usPresence >= 7))
            {
                scoreUSA(7);
            }
            else if ((usBattlegrounds > ussrBattlegrounds) && (usPresence > ussrPresence) && (usPresence >= 2) && (usBattlegrounds >= 1))
            {
                scoreUSA(5);
            }
            else if (usPresence >= 1)
            {
                scoreUSA(3);
            }
            if ((ussrBattlegrounds == 6) && (usPresence < ussrPresence) && (ussrPresence >= 7))
            {
                scoreUSSR(7);
            }
            else if ((usBattlegrounds < ussrBattlegrounds) && (usPresence < ussrPresence) && (ussrPresence >= 2) && (ussrBattlegrounds >= 1))
            {
                scoreUSSR(5);
            }
            else if (usPresence >= 1)
            {
                scoreUSSR(3);
            }
            scoreUSA(usBattlegrounds);
            scoreUSSR(ussrBattlegrounds);
            checkVictory();
        }

        private void scoreAsia()
        {
            int usPresence = 0;
            int ussrPresence = 0;
            int usBattlegrounds = 0;
            int ussrBattlegrounds = 0;
            foreach (int element in countryLst.Asia)
            {
                var temp = countryLst.countries[element];
                if (temp.controlled)
                {
                    if (temp.controller == -1)
                    {
                        ussrPresence++;
                        if (temp.battleground)
                        {
                            ussrBattlegrounds++;
                        }
                    }
                    else
                    {
                        usPresence++;
                        if (temp.battleground)
                        {
                            usBattlegrounds++;
                        }
                    }
                }
            }
            //need to add special case for FormosaResolution
            if ((usBattlegrounds == 6) && (usPresence > ussrPresence) && (usPresence >= 7))
            {
                scoreUSA(9);
            }
            else if ((usBattlegrounds > ussrBattlegrounds) && (usPresence > ussrPresence) && (usPresence >= 2) && (usBattlegrounds >= 1))
            {
                scoreUSA(7);
            }
            else if (usPresence >= 1)
            {
                scoreUSA(3);
            }
            if ((ussrBattlegrounds == 6) && (usPresence < ussrPresence) && (ussrPresence >= 7))
            {
                scoreUSSR(9);
            }
            else if ((usBattlegrounds < ussrBattlegrounds) && (usPresence < ussrPresence) && (ussrPresence >= 2) && (ussrBattlegrounds >= 1))
            {
                scoreUSSR(7);
            }
            else if (usPresence >= 1)
            {
                scoreUSSR(3);
            }
            scoreUSA(usBattlegrounds);
            scoreUSSR(ussrBattlegrounds);
            //Afghanistan
            if (countryLst.countries[0].controller == 1)
            {
                scoreUSA(1);
            }
            //North Korea
            if (countryLst.countries[52].controller == 1)
            {
                scoreUSA(1);
            }
            //Japan
            if (countryLst.countries[41].controller == -1)
            {
                scoreUSSR(1);
            }
            checkVictory();
        }

        private void scoreSoutheastAsia()
        {
            foreach (int element in countryLst.SoutheastAsia)
            {
                var temp = countryLst.countries[element];
                if (temp.controlled)
                {
                    if (temp.id == 72)
                    {
                        if (temp.controller == 1)
                        {
                            scoreUSA(2);
                        }
                        else
                        {
                            scoreUSSR(2);
                        }
                    }
                    else
                    {
                        if (temp.controller == 1)
                        {
                            scoreUSA(1);
                        }
                        else
                        {
                            scoreUSSR(1);
                        }
                    }
                }
            }
            checkVictory();
        }
    }
}
