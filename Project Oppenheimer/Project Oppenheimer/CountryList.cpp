#include "Country.h"
#include "CountryList.h"

CountryList::CountryList()
{
	countries.reserve(84);

	//Adjacency to USA -5, USSR -10
	Country* Afghanistan = new Country("Afghanistan", 0, 2, false, std::vector<int>{-10, 36, 54});
	this->countries.push_back(Afghanistan);

	Country* Algeria = new Country("Algeria", 1, 2, true, std::vector<int>{27, 49, 62, 73});
	this->countries.push_back(Algeria);

	Country* Angola = new Country("Angola", 2, 1, true, std::vector<int>{8, 65, 82, 83});
	this->countries.push_back(Angola);

	Country* Argentina = new Country("Argentina", 3, 2, true, std::vector<int>{14, 56, 76});
	this->countries.push_back(Argentina);

	Country* Australia = new Country("Australia", 4, 4, false, std::vector<int>{47});
	this->countries.push_back(Australia);

	Country* Austria = new Country("Austria", 5, 4, false, std::vector<int>{21, 33, 39, 79});
	this->countries.push_back(Austria);

	Country* Benlux = new Country("Benlux", 6, 3, false, std::vector<int>{79});
	this->countries.push_back(Benlux);

	Country* Bolivia = new Country("Bolivia", 7, 2, false, std::vector<int>{56, 57});
	this->countries.push_back(Bolivia);

	Country* Botswana = new Country("Botswana", 8, 2, false, std::vector<int>{2, 65, 83});
	this->countries.push_back(Botswana);

	Country* Brazil = new Country("Brazil", 9, 2, true, std::vector<int>{76, 77});
	this->countries.push_back(Brazil);

	Country* Bulgaria = new Country("Bulgaria", 10, 3, false, std::vector<int>{28, 74});
	this->countries.push_back(Bulgaria);

	Country* Burma = new Country("Burma", 11, 2, false, std::vector<int>{44, 34});
	this->countries.push_back(Burma);

	Country* Cameroon = new Country("Cameroon", 12, 1, false, std::vector<int>{51, 82});
	this->countries.push_back(Cameroon);

	Country* Canada = new Country("Canada", 13, 4, false, std::vector<int>{-5, 75});
	this->countries.push_back(Canada);

	Country* Chile = new Country("Chile", 14, 3, true, std::vector<int>{3, 57});
	this->countries.push_back(Chile);

	Country* Colombia = new Country("Colombia", 15, 1, false, std::vector<int>{22, 55, 77});
	this->countries.push_back(Colombia);

	Country* CostaRica = new Country("Costa Rica", 16, 3, false, std::vector<int>{32, 50, 55});
	this->countries.push_back(CostaRica);

	Country* Cuba = new Country("Cuba", 17, 3, true, std::vector<int>{-5, 31, 50});
	this->countries.push_back(Cuba);

	Country* Czechoslovakia = new Country("Czechoslovakia", 18, 3, false, std::vector<int>{21, 33, 59});
	this->countries.push_back(Czechoslovakia);

	Country* Denmark = new Country("Denmark", 19, 3, false, std::vector<int>{69, 79});
	this->countries.push_back(Denmark);

	Country* DominicanRep = new Country("Dominican Republic", 20, 1, false, std::vector<int>{31});
	this->countries.push_back(DominicanRep);

	Country* EGermany = new Country("East Germany", 21, 3, true, std::vector<int>{5, 59, 79});
	this->countries.push_back(EGermany);

	Country* Ecuador = new Country("Ecuador", 22, 2, false, std::vector<int>{15, 57});
	this->countries.push_back(Ecuador);

	Country* Egypt = new Country("Egypt", 23, 2, true, std::vector<int>{38, 46, 68});
	this->countries.push_back(Egypt);

	Country* ElSalvador = new Country("El Salvador", 24, 1, false, std::vector<int>{29, 32});
	this->countries.push_back(ElSalvador);

	Country* Ethiopia = new Country("Ethiopia", 25, 1, false, std::vector<int>{64, 68});
	this->countries.push_back(Ethiopia);

	Country* Finland = new Country("Finland", 26, 4, false, std::vector<int>{-10, 69});
	this->countries.push_back(Finland);

	Country* France = new Country("France", 27, 3, true, std::vector<int>{1, 39, 67, 75, 79});
	this->countries.push_back(France);

	Country* Greece = new Country("Greece", 28, 2, false, std::vector<int>{10, 39, 74, 81});
	this->countries.push_back(Greece);

	Country* Guatemala = new Country("Guatemala", 29, 1, false, std::vector<int>{24, 32, 48});
	this->countries.push_back(Guatemala);

	Country* GulfStates = new Country("Gulf States", 30, 3, false, std::vector<int>{37, 63});
	this->countries.push_back(GulfStates);

	Country* Haiti = new Country("Haiti", 31, 1, false, std::vector<int>{17, 20});
	this->countries.push_back(Haiti);

	Country* Honduras = new Country("Honduras", 32, 2, false, std::vector<int>{16, 24, 29, 50});
	this->countries.push_back(Honduras);

	Country* Hungary = new Country("Hungary", 33, 3, false, std::vector<int>{5, 18, 60, 81});
	this->countries.push_back(Hungary);

	Country* India = new Country("India", 34, 3, true, std::vector<int>{11, 54});
	this->countries.push_back(India);

	Country* Indonesia = new Country("Indonesia", 35, 1, false, std::vector<int>{47, 58});
	this->countries.push_back(Indonesia);

	Country* Iran = new Country("Iran", 36, 2, true, std::vector<int>{0, 37, 54});
	this->countries.push_back(Iran);

	Country* Iraq = new Country("Iraq", 37, 3, true, std::vector<int>{30, 36, 42, 63});
	this->countries.push_back(Iraq);

	Country* Israel = new Country("Israel", 38, 4, true, std::vector<int>{23, 42, 45, 70});
	this->countries.push_back(Israel);

	Country* Italy = new Country("Italy", 39, 2, true, std::vector<int>{5, 27, 28, 67, 81});
	this->countries.push_back(Italy);

	Country* IvoryCoast = new Country("Ivory Coast", 40, 2, false, std::vector<int>{51, 80});
	this->countries.push_back(IvoryCoast);

	Country* Japan = new Country("Japan", 41, 4, true, std::vector<int>{-5, 58, 66, 71});
	this->countries.push_back(Japan);

	Country* Jordan = new Country("Jordan", 42, 2, false, std::vector<int>{37, 38, 63});
	this->countries.push_back(Jordan);

	Country* Kenya = new Country("Kenya", 43, 2, false, std::vector<int>{61, 64});
	this->countries.push_back(Kenya);

	Country* LaosCambodia = new Country("Laos/Cambodia", 44, 1, false, std::vector<int>{11, 73, 78});
	this->countries.push_back(LaosCambodia);

	Country* Lebanon = new Country("Lebanon", 45, 1, false, std::vector<int>{48, 42, 70});
	this->countries.push_back(Lebanon);

	Country* Libya = new Country("Libya", 46, 2, true, std::vector<int>{23, 62, 73});
	this->countries.push_back(Libya);

	Country* Malaysia = new Country("Malaysia", 47, 2, false, std::vector<int>{4, 35, 72});
	this->countries.push_back(Malaysia);

	Country* Mexico = new Country("Mexico", 48, 2, true, std::vector<int>{-5, 29});
	this->countries.push_back(Mexico);

	Country* Morocco = new Country("Morocco", 49, 3, false, std::vector<int>{1, 67, 80});
	this->countries.push_back(Morocco);

	Country* Nicaragua = new Country("Nicaragua", 50, 1, false, std::vector<int>{16, 17, 32});
	this->countries.push_back(Nicaragua);

	Country* Nigeria = new Country("Nigeria", 51, 1, true, std::vector<int>{12, 40, 62});
	this->countries.push_back(Nigeria);

	Country* NorthKorea = new Country("North Korea", 52, 3, true, std::vector<int>{-10, 66});
	this->countries.push_back(NorthKorea);

	Country* Norway = new Country("Norway", 53, 4, false, std::vector<int>{69, 75});
	this->countries.push_back(Norway);

	Country* Pakistan = new Country("Pakistan", 54, 2, true, std::vector<int>{0, 34, 36});
	this->countries.push_back(Pakistan);

	Country* Panama = new Country("Panama", 55, 2, true, std::vector<int>{17, 18});
	this->countries.push_back(Panama);

	Country* Paraguay = new Country("Paraguay", 56, 2, false, std::vector<int>{3, 7, 76});
	this->countries.push_back(Paraguay);

	Country* Peru = new Country("Peru", 57, 2, false, std::vector<int>{7, 14, 22});
	this->countries.push_back(Peru);

	Country* Philippians = new Country("Philippians", 58, 2, false, std::vector<int>{35, 41});
	this->countries.push_back(Philippians);

	Country* Poland = new Country("Poland", 59, 3, true, std::vector<int>{-10, 18, 21});
	this->countries.push_back(Poland);

	Country* Romania = new Country("Romania", 60, 3, false, std::vector<int>{-10, 33, 76, 81});
	this->countries.push_back(Romania);

	Country* SEAfricanStates = new Country("South-East African States", 61, 1, false, std::vector<int>{43, 83});
	this->countries.push_back(SEAfricanStates);

	Country* SaharanStates = new Country("Saharan States", 62, 1, false, std::vector<int>{1, 51});
	this->countries.push_back(SaharanStates);

	Country* SaudiArabia = new Country("Saudi Arabia", 63, 3, true, std::vector<int>{30, 37, 42});
	this->countries.push_back(SaudiArabia);

	Country* Somalia = new Country("Somalia", 64, 2, false, std::vector<int>{25, 43});
	this->countries.push_back(Somalia);

	Country* SouthAfrica = new Country("South Africa", 65, 3, true, std::vector<int>{2, 8});
	this->countries.push_back(SouthAfrica);

	Country* SouthKorea = new Country("South Korea", 66, 3, true, std::vector<int>{41, 52, 71});
	this->countries.push_back(SouthKorea);

	Country* SpainPortugul = new Country("Spain/Portugul", 67, 2, false, std::vector<int>{27, 39, 49});
	this->countries.push_back(SpainPortugul);

	Country* Sudan = new Country("Sudan", 68, 1, false, std::vector<int>{23, 25});
	this->countries.push_back(Sudan);

	Country* Sweden = new Country("Sweden", 69, 4, false, std::vector<int>{19, 26, 53});
	this->countries.push_back(Sweden);

	Country* Syria = new Country("Syria", 70, 2, false, std::vector<int>{38, 45, 74});
	this->countries.push_back(Syria);

	Country* Taiwan = new Country("Taiwan", 71, 3, false, std::vector<int>{41, 66});
	this->countries.push_back(Taiwan);

	Country* Thailand = new Country("Thailand", 72, 2, true, std::vector<int>{44, 47, 78});
	this->countries.push_back(Thailand);

	Country* Tunisia = new Country("Tunisia", 73, 2, false, std::vector<int>{1, 46});
	this->countries.push_back(Tunisia);

	Country* Turkey = new Country("Turkey", 74, 2, false, std::vector<int>{10, 28, 60, 70});
	this->countries.push_back(Turkey);

	Country* UK = new Country("United Kingdom", 75, 5, false, std::vector<int>{15, 27, 53});
	this->countries.push_back(UK);

	Country* Uruguay = new Country("Uruguay", 76, 2, false, std::vector<int>{3, 9, 56});
	this->countries.push_back(Uruguay);

	Country* Venezuela = new Country("Venezuela", 77, 2, true, std::vector<int>{9, 15});
	this->countries.push_back(Venezuela);

	Country* Vietnam = new Country("Vietnam", 78, 1, false, std::vector<int>{44, 72});
	this->countries.push_back(Vietnam);

	Country* WGermany = new Country("West Germany", 79, 4, true, std::vector<int>{5, 6, 19, 21, 27});
	this->countries.push_back(WGermany);

	Country* WAfricanStates = new Country("West African States", 80, 2, false, std::vector<int>{40, 49});
	this->countries.push_back(WAfricanStates);

	Country* Yugoslavia = new Country("Yugoslavia", 81, 3, false, std::vector<int>{28, 33, 39, 60});
	this->countries.push_back(Yugoslavia);

	Country* Zaire = new Country("Zaire", 82, 1, true, std::vector<int>{2, 12, 83});
	this->countries.push_back(Zaire);

	Country* Zimbabwe = new Country("Zimbabwe", 83, 1, false, std::vector<int>{8, 61, 82});
	this->countries.push_back(Zimbabwe);

	Europe = {21, 59, 18, 33, 60, 81, 10, 13, 26, 69, 19, 53, 75, 6, 79, 27, 5, 67, 39, 28, 74 };
	WesternEurope = {13, 26, 69, 19, 53, 75, 6, 79, 27, 5, 67, 39, 28, 74};
	EasternEurope = {26, 21, 59, 18, 5, 33, 60, 81, 10};
	CentralAmerica = {48, 17, 29, 31, 20, 24, 32, 50, 16, 55};
	SouthAmerica = {77, 15, 22, 57, 7, 14, 56, 3, 76, 9};
	Africa = {73, 1, 49, 80, 62, 40, 51, 12, 82, 2, 83, 8, 65, 61, 43, 64, 25, 68};
	MiddleEast = {45, 70, 38, 37, 36, 46, 23, 42, 30, 63};
	Asia = { 11, 44, 72, 78, 47, 35, 58, 0, 54, 34, 4, 41, 71, 66, 52};
	SoutheastAsia = {11, 44, 72, 78, 47, 35, 58};
}


Country* CountryList::get_country(int x)
{
	return this->countries.at(x);
}
