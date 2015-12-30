#include "Country.h"



Country::Country(std::string n, int s, int i, std::vector<int> vect)
{
	stability = s;
	std::string name = n;
	id = i;
	std::vector<int> adjacent = vect;
	influenceUSA = 0;
	influenceUSSR = 0;
	controlled = false;
	controller = "NONE";
}


int Country::get_stability()
{
	return 0;
}


std::string Country::get_name()
{
	return std::string();
}


int Country::get_id()
{
	return 0;
}


std::vector<int> Country::get_adjacent()
{
	return std::vector<int>();
}


std::vector<int> Country::get_influence()
{
	return std::vector<int>();
}


bool Country::is_controlled()
{
	return false;
}


std::string Country::get_controller()
{
	return std::string();
}


void Country::set_infUSA(int x)
{
}


void Country::set_infUSSR(int x)
{
}


void Country::updateControl()
{
}
