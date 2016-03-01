#include "CountryList.h"

CountryList::CountryList()
{

	Country^ a = gcnew Country(1);
	this->countries->Add(a);

	Country^ b = gcnew Country(2);
	this->countries->Add(b);

	Country^ c = gcnew Country(3);
	this->countries->Add(c);
}

Country^ CountryList::get_country(int x)
{
	return this->countries[x];
}