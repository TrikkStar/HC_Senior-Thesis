#include "Country.h"

Country::Country() {
	bar = 0;
}

Country::Country(int x)
{
	bar = x;
}

int Country::get_bar()
{
	return this->bar;
}