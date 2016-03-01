#pragma once
#include "Country.h"
using namespace System;
using namespace System::Collections::Generic;

ref class CountryList
{
public:
	CountryList();
	Country^ get_country(int x);
private:
	List<Country^>^ countries = gcnew List<Country^>;
};