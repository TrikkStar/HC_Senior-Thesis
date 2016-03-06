#pragma once
#include <vector>
#include "Country.h"

class CountryList
{
public:
	CountryList();
	Country* get_country(int x);
	std::vector<Country> countries;
	Country cntry;
};