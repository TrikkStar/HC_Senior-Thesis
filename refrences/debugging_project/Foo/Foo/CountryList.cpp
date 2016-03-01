#include "Country.h"
#include "CountryList.h"

CountryList::CountryList()
{
	countries.reserve(3);

	Country a(1);
	this->countries.push_back(a);

	Country b(2);
	this->countries.push_back(b);

	Country c(3);
	this->countries.push_back(c);
}

Country* CountryList::get_country(int x)
{
	return &this->countries.at(x);
}