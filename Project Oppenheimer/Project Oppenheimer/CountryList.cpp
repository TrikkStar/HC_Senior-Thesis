#include "Country.h"
#include "CountryList.h"

CountryList::CountryList()
{
	countries.reserve(83);
	Country algeria("stuff", 1, 3, std::vector<int>{2, 3, 4, 5});

	algeria.get_name();

	this->countries.push_back(algeria);
}

