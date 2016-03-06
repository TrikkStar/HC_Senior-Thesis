using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Project_Oppenheimer.Properties
{
    class CountryList
    {
        public List<Country> countries;
        public List<int> Europe;
        public List<int> WesternEurope;
        public List<int> EasternEurope;
        public List<int> CentralAmerica;
        public List<int> SouthAmerica;
        public List<int> Africa;
        public List<int> MiddleEast;
        public List<int> Asia;
        public List<int> SoutheastAsia;

        public CountryList()
        {
            Europe = new List<int> {21, 59, 18, 33, 60, 81, 10, 13, 26, 69, 19, 53, 75, 6, 79, 27, 5, 67, 39, 28, 74};
            WesternEurope = new List<int> {13, 26, 69, 19, 53, 75, 6, 79, 27, 5, 67, 39, 28, 74};
            EasternEurope = new List<int> {26, 21, 59, 18, 5, 33, 60, 81, 10};
            CentralAmerica = new List<int> {48, 17, 29, 31, 20, 24, 32, 50, 16, 55};
            SouthAmerica = new List<int> {77, 15, 22, 57, 7, 14, 56, 3, 76, 9};
            Africa = new List<int> {73, 1, 49, 80, 62, 40, 51, 12, 82, 2, 83, 8, 65, 61, 43, 64, 25, 68};
            MiddleEast = new List<int> {45, 70, 38, 37, 36, 46, 23, 42, 30, 63};
            Asia = new List<int> {11, 44, 72, 78, 47, 35, 58, 0, 54, 34, 4, 41, 71, 66, 52};
            SoutheastAsia = new List<int> {11, 44, 72, 78, 47, 35, 58};
            initiliseCountries();
        }

        private void initiliseCountries()
        {
            //Adjacency to USA -5, USSR -10
            countries = new List<Country>();

            Country Afghanistan = new Country("Afghanistan", 0, 2, false, new List<int>{-10, 36, 54});
            countries.Add(Afghanistan);

            Country Algeria = new Country("Algeria", 1, 2, true, new List<int>{27, 49, 62, 73});
            countries.Add(Algeria);

            Country Angola = new Country("Angola", 2, 1, true, new List<int>{8, 65, 82, 83});
            countries.Add(Angola);

            Country Argentina = new Country("Argentina", 3, 2, true, new List<int>{14, 56, 76});
            countries.Add(Argentina);

            Country Australia = new Country("Australia", 4, 4, false, new List<int>{47});
            countries.Add(Australia);

            Country Austria = new Country("Austria", 5, 4, false, new List<int>{21, 33, 39, 79});
            countries.Add(Austria);

            Country Benlux = new Country("Benlux", 6, 3, false, new List<int>{79});
            countries.Add(Benlux);

            Country Bolivia = new Country("Bolivia", 7, 2, false, new List<int>{56, 57});
            countries.Add(Bolivia);

            Country Botswana = new Country("Botswana", 8, 2, false, new List<int>{2, 65, 83});
            countries.Add(Botswana);

            Country Brazil = new Country("Brazil", 9, 2, true, new List<int>{76, 77});
            countries.Add(Brazil);

            Country Bulgaria = new Country("Bulgaria", 10, 3, false, new List<int>{28, 74});
            countries.Add(Bulgaria);

            Country Burma = new Country("Burma", 11, 2, false, new List<int>{44, 34});
            countries.Add(Burma);

            Country Cameroon = new Country("Cameroon", 12, 1, false, new List<int>{51, 82});
            countries.Add(Cameroon);

            Country Canada = new Country("Canada", 13, 4, false, new List<int>{-5, 75});
            countries.Add(Canada);

            Country Chile = new Country("Chile", 14, 3, true, new List<int>{3, 57});
            countries.Add(Chile);

            Country Colombia = new Country("Colombia", 15, 1, false, new List<int>{22, 55, 77});
            countries.Add(Colombia);

            Country CostaRica = new Country("Costa Rica", 16, 3, false, new List<int>{32, 50, 55});
            countries.Add(CostaRica);

            Country Cuba = new Country("Cuba", 17, 3, true, new List<int>{-5, 31, 50});
            countries.Add(Cuba);

            Country Czechoslovakia = new Country("Czechoslovakia", 18, 3, false, new List<int>{21, 33, 59});
            countries.Add(Czechoslovakia);

            Country Denmark = new Country("Denmark", 19, 3, false, new List<int>{69, 79});
            countries.Add(Denmark);

            Country DominicanRep = new Country("Dominican Republic", 20, 1, false, new List<int>{31});
            countries.Add(DominicanRep);

            Country EGermany = new Country("East Germany", 21, 3, true, new List<int>{5, 59, 79});
            countries.Add(EGermany);

            Country Ecuador = new Country("Ecuador", 22, 2, false, new List<int>{15, 57});
            countries.Add(Ecuador);

            Country Egypt = new Country("Egypt", 23, 2, true, new List<int>{38, 46, 68});
            countries.Add(Egypt);

            Country ElSalvador = new Country("El Salvador", 24, 1, false, new List<int>{29, 32});
            countries.Add(ElSalvador);

            Country Ethiopia = new Country("Ethiopia", 25, 1, false, new List<int>{64, 68});
            countries.Add(Ethiopia);

            Country Finland = new Country("Finland", 26, 4, false, new List<int>{-10, 69});
            countries.Add(Finland);

            Country France = new Country("France", 27, 3, true, new List<int>{1, 39, 67, 75, 79});
            countries.Add(France);

            Country Greece = new Country("Greece", 28, 2, false, new List<int>{10, 39, 74, 81});
            countries.Add(Greece);

            Country Guatemala = new Country("Guatemala", 29, 1, false, new List<int>{24, 32, 48});
            countries.Add(Guatemala);

            Country GulfStates = new Country("Gulf States", 30, 3, false, new List<int>{37, 63});
            countries.Add(GulfStates);

            Country Haiti = new Country("Haiti", 31, 1, false, new List<int>{17, 20});
            countries.Add(Haiti);

            Country Honduras = new Country("Honduras", 32, 2, false, new List<int>{16, 24, 29, 50});
            countries.Add(Honduras);

            Country Hungary = new Country("Hungary", 33, 3, false, new List<int>{5, 18, 60, 81});
            countries.Add(Hungary);

            Country India = new Country("India", 34, 3, true, new List<int>{11, 54});
            countries.Add(India);

            Country Indonesia = new Country("Indonesia", 35, 1, false, new List<int>{47, 58});
            countries.Add(Indonesia);

            Country Iran = new Country("Iran", 36, 2, true, new List<int>{0, 37, 54});
            countries.Add(Iran);

            Country Iraq = new Country("Iraq", 37, 3, true, new List<int>{30, 36, 42, 63});
            countries.Add(Iraq);

            Country Israel = new Country("Israel", 38, 4, true, new List<int>{23, 42, 45, 70});
            countries.Add(Israel);

            Country Italy = new Country("Italy", 39, 2, true, new List<int>{5, 27, 28, 67, 81});
            countries.Add(Italy);

            Country IvoryCoast = new Country("Ivory Coast", 40, 2, false, new List<int>{51, 80});
            countries.Add(IvoryCoast);

            Country Japan = new Country("Japan", 41, 4, true, new List<int>{-5, 58, 66, 71});
            countries.Add(Japan);

            Country Jordan = new Country("Jordan", 42, 2, false, new List<int>{37, 38, 63});
            countries.Add(Jordan);

            Country Kenya = new Country("Kenya", 43, 2, false, new List<int>{61, 64});
            countries.Add(Kenya);

            Country LaosCambodia = new Country("Laos/Cambodia", 44, 1, false, new List<int>{11, 73, 78});
            countries.Add(LaosCambodia);

            Country Lebanon = new Country("Lebanon", 45, 1, false, new List<int>{48, 42, 70});
            countries.Add(Lebanon);

            Country Libya = new Country("Libya", 46, 2, true, new List<int>{23, 62, 73});
            countries.Add(Libya);

            Country Malaysia = new Country("Malaysia", 47, 2, false, new List<int>{4, 35, 72});
            countries.Add(Malaysia);

            Country Mexico = new Country("Mexico", 48, 2, true, new List<int>{-5, 29});
            countries.Add(Mexico);

            Country Morocco = new Country("Morocco", 49, 3, false, new List<int>{1, 67, 80});
            countries.Add(Morocco);

            Country Nicaragua = new Country("Nicaragua", 50, 1, false, new List<int>{16, 17, 32});
            countries.Add(Nicaragua);

            Country Nigeria = new Country("Nigeria", 51, 1, true, new List<int>{12, 40, 62});
            countries.Add(Nigeria);

            Country NorthKorea = new Country("North Korea", 52, 3, true, new List<int>{-10, 66});
            countries.Add(NorthKorea);

            Country Norway = new Country("Norway", 53, 4, false, new List<int>{69, 75});
            countries.Add(Norway);

            Country Pakistan = new Country("Pakistan", 54, 2, true, new List<int>{0, 34, 36});
            countries.Add(Pakistan);

            Country Panama = new Country("Panama", 55, 2, true, new List<int>{17, 18});
            countries.Add(Panama);

            Country Paraguay = new Country("Paraguay", 56, 2, false, new List<int>{3, 7, 76});
            countries.Add(Paraguay);

            Country Peru = new Country("Peru", 57, 2, false, new List<int>{7, 14, 22});
            countries.Add(Peru);

            Country Philippians = new Country("Philippians", 58, 2, false, new List<int>{35, 41});
            countries.Add(Philippians);

            Country Poland = new Country("Poland", 59, 3, true, new List<int>{-10, 18, 21});
            countries.Add(Poland);

            Country Romania = new Country("Romania", 60, 3, false, new List<int>{-10, 33, 76, 81});
            countries.Add(Romania);

            Country SEAfricanStates = new Country("South-East African States", 61, 1, false, new List<int>{43, 83});
            countries.Add(SEAfricanStates);

            Country SaharanStates = new Country("Saharan States", 62, 1, false, new List<int>{1, 51});
            countries.Add(SaharanStates);

            Country SaudiArabia = new Country("Saudi Arabia", 63, 3, true, new List<int>{30, 37, 42});
            countries.Add(SaudiArabia);

            Country Somalia = new Country("Somalia", 64, 2, false, new List<int>{25, 43});
            countries.Add(Somalia);

            Country SouthAfrica = new Country("South Africa", 65, 3, true, new List<int>{2, 8});
            countries.Add(SouthAfrica);

            Country SouthKorea = new Country("South Korea", 66, 3, true, new List<int>{41, 52, 71});
            countries.Add(SouthKorea);

            Country SpainPortugul = new Country("Spain/Portugul", 67, 2, false, new List<int>{27, 39, 49});
            countries.Add(SpainPortugul);

            Country Sudan = new Country("Sudan", 68, 1, false, new List<int>{23, 25});
            countries.Add(Sudan);

            Country Sweden = new Country("Sweden", 69, 4, false, new List<int>{19, 26, 53});
            countries.Add(Sweden);

            Country Syria = new Country("Syria", 70, 2, false, new List<int> { 38, 45, 74});
            countries.Add(Syria);

            Country Taiwan = new Country("Taiwan", 71, 3, false, new List<int>{41, 66});
            countries.Add(Taiwan);

            Country Thailand = new Country("Thailand", 72, 2, true, new List<int>{44, 47, 78});
            countries.Add(Thailand);

            Country Tunisia = new Country("Tunisia", 73, 2, false, new List<int>{1, 46});
            countries.Add(Tunisia);

            Country Turkey = new Country("Turkey", 74, 2, false, new List<int>{10, 28, 60, 70});
            countries.Add(Turkey);

            Country UK = new Country("United Kingdom", 75, 5, false, new List<int>{15, 27, 53});
            countries.Add(UK);

            Country Uruguay = new Country("Uruguay", 76, 2, false, new List<int>{3, 9, 56});
            countries.Add(Uruguay);

            Country Venezuela = new Country("Venezuela", 77, 2, true, new List<int>{9, 15});
            countries.Add(Venezuela);

            Country Vietnam = new Country("Vietnam", 78, 1, false, new List<int>{44, 72});
            countries.Add(Vietnam);

            Country WGermany = new Country("West Germany", 79, 4, true, new List<int>{5, 6, 19, 21, 27});
            countries.Add(WGermany);

            Country WAfricanStates = new Country("West African States", 80, 2, false, new List<int>{40, 49});
            countries.Add(WAfricanStates);

            Country Yugoslavia = new Country("Yugoslavia", 81, 3, false, new List<int>{28, 33, 39, 60});
            countries.Add(Yugoslavia);

            Country Zaire = new Country("Zaire", 82, 1, true, new List<int>{2, 12, 83});
            countries.Add(Zaire);

            Country Zimbabwe = new Country("Zimbabwe", 83, 1, false, new List<int>{8, 61, 82});
            countries.Add(Zimbabwe);
        }
    }
}
