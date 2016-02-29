#pragma once
#include <vector>
#include "Country.h"

class CountryList
{
private:
	std::vector<Country*> countries;
public:
	CountryList();
	std::vector<int> Europe;
	std::vector<int> WesternEurope;
	std::vector<int> EasternEurope;
	std::vector<int> CentralAmerica;
	std::vector<int> SouthAmerica;
	std::vector<int> Africa;
	std::vector<int> MiddleEast;
	std::vector<int> Asia;
	std::vector<int> SoutheastAsia;
	Country* get_country(int x);
};