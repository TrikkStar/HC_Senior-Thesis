#include "Country.h"



Country::Country(std::string n, int s, int i, std::vector<int> vect)
{
	stability = s;
	std::string name = n;
	id = i;
	std::vector<int> adjacent = vect;
	influenceUSA = 0;
	influenceUSSR = 0;
	controller = "NONE";
}
