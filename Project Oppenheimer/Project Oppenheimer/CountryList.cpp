#include "Country.h"
#include "CountryList.h"

CountryList::CountryList()
{
	countries.reserve(83);
	//adjacencies are not currently implimented
	Country Afghanistan("Afghanistan", 1, 2, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Afghanistan);

	Country Algeria("Algeria", 2, 2, true, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Algeria);

	Country Angola("Angola", 3, 1, true, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Angola);

	Country Argentina("Argentina", 4, 2, true, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Argentina);

	Country Australia("Australia", 5, 4, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Australia);

	Country Austria("Austria", 6, 4, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Austria);

	Country Benlux("Benlux", 7, 3, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Benlux);

	Country Bolivia("Bolivia", 8, 2, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Bolivia);

	Country Botswana("Botswana", 9, 2, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Botswana);

	Country Brazil("Brazil", 10, 2, true, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Brazil);

	Country Bulgaria("Bulgaria", 11, 3, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Bulgaria);

	Country Burma("Burma", 12, 2, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Burma);

	Country Cameroon("Cameroon", 13, 1, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Cameroon);

	Country Canada("Canada", 14, 4, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Canada);

	Country Chile("Chile", 15, 3, true, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Chile);

	Country Colombia("Colombia", 16, 1, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Colombia);

	Country CostaRica("Costa Rica", 17, 3, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(CostaRica);

	Country Cuba("Cuba", 18, 3, true, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Cuba);

	Country Czechoslovakia("Czechoslovakia", 19, 3, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Czechoslovakia);

	Country Denmark("Denmark", 20, 3, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Denmark);

	Country DominicanRep("Dominican Republic", 21, 1, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(DominicanRep);

	Country EGermany("East Germany", 22, 3, true, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(EGermany);

	Country Ecuador("Ecuador", 23, 2, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Ecuador);

	Country Egypt("Egypt", 24, 2, true, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Egypt);

	Country ElSalvador("El Salvador", 25, 1, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(ElSalvador);

	Country Ethiopia("Ethiopia", 26, 1, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Ethiopia);

	Country Finland("Finland", 27, 4, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Finland);

	Country France("France", 28, 3, true, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(France);

	Country Greece("Greece", 29, 2, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Greece);

	Country Guatemala("Guatemala", 30, 1, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Guatemala);

	Country GulfStates("Gulf States", 31, 3, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(GulfStates);

	Country Haiti("Haiti", 32, 1, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Haiti);

	Country Honduras("Honduras", 33, 2, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Honduras);

	Country Hungary("Hungary", 34, 3, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Hungary);

	Country India("India", 35, 3, true, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(India);

	Country Indonesia("Indonesia", 36, 1, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Indonesia);

	Country Iran("Iran", 37, 2, true, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Iran);

	Country Iraq("Iraq", 38, 3, true, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Iraq);

	Country Israel("Israel", 39, 4, true, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Israel);

	Country Italy("Italy", 40, 2, true, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Italy);

	Country IvoryCoast("Ivory Coast", 41, 2, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(IvoryCoast);

	Country Japan("Japan", 42, 4, true, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Japan);

	Country Jordan("Jordan", 43, 2, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Jordan);

	Country Kenya("Kenya", 44, 2, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Kenya);

	Country LaosCambodia("Laos/Cambodia", 45, 1, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(LaosCambodia);

	Country Lebanon("Lebanon", 46, 1, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Lebanon);

	Country Libya("Libya", 47, 2, true, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Libya);

	Country Malaysia("Malaysia", 48, 2, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Malaysia);

	Country Mexico("Mexico", 49, 2, true, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Mexico);

	Country Morocco("Morocco", 50, 3, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Morocco);

	Country Nicaragua("Nicaragua", 51, 1, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Nicaragua);

	Country Nigeria("Nigeria", 52, 1, true, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Nigeria);

	Country NorthKorea("North Korea", 53, 3, true, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(NorthKorea);

	Country Norway("Norway", 54, 4, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Norway);

	Country Pakistan("Pakistan", 55, 2, true, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Pakistan);

	Country Panama("Panama", 56, 2, true, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Panama);

	Country Paraguay("Paraguay", 57, 2, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Paraguay);

	Country Peru("Peru", 58, 2, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Peru);

	Country Philippians("Philippians", 59, 2, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Philippians);

	Country Poland("Poland", 60, 3, true, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Poland);

	Country Romania("Romania", 61, 3, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Romania);

	Country SEAfricanStates("South-East African States", 62, 1, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(SEAfricanStates);

	Country SaharanStates("Saharan States", 63, 1, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(SaharanStates);

	Country SaudiArabia("Saudi Arabia", 64, 3, true, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(SaudiArabia);

	Country Somalia("Somalia", 65, 2, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Somalia);

	Country SouthAfrica("South Africa", 66, 3, true, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(SouthAfrica);

	Country SouthKorea("South Korea", 67, 3, true, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(SouthKorea);

	Country Sudan("Sudan", 68, 1, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Sudan);

	Country Sweden("Sweden", 69, 4, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Sweden);

	Country Syria("Syria", 70, 2, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Syria);

	Country Taiwan("Taiwan", 71, 3, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Taiwan);

	Country Thailand("Thailand", 72, 2, true, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Thailand);

	Country Tunisia("Tunisia", 73, 2, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Tunisia);

	Country Turkey("Turkey", 74, 2, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Turkey);

	Country UK("United Kingdom", 75, 5, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(UK);

	Country Uruguay("Uruguay", 76, 2, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Uruguay);

	Country Venezuela("Venezuela", 77, 2, true, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Venezuela);

	Country Vietnam("Vietnam", 78, 1, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Vietnam);

	Country WGermany("West Germany", 79, 4, true, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(WGermany);

	Country WAfricanStates("West African States", 80, 2, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(WAfricanStates);

	Country Yugoslavia("Yugoslavia", 81, 3, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Yugoslavia);

	Country Zaire("Zaire", 82, 1, true, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Zaire);

	Country Zimbabwe("Zimbabwe", 83, 1, false, std::vector<int>{2, 3, 4, 5});
	this->countries.push_back(Zimbabwe);
}
