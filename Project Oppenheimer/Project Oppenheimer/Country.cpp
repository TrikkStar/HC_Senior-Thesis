#include "Country.h"



Country::Country(std::string n, int i, int s, bool b, std::vector<int> vect)
{
	stability = s;
	std::string name = n;
	id = i;
	battleground = b;
	std::vector<int> adjacent = vect;
	influenceUSA = 0;
	influenceUSSR = 0;
	controlled = false;
	controller = "NONE";
}


int Country::get_stability()
{
	return this->stability;
}


std::string Country::get_name()
{
	return this->name;
}


int Country::get_id()
{
	return this->id;
}


std::vector<int> Country::get_adjacent()
{
	return this->adjacent;
}


std::vector<int> Country::get_influence()
{
	std::vector<int> vect = {this->influenceUSA, this->influenceUSSR};
	return vect;
}


bool Country::is_controlled()
{
	return this->controlled;
}


std::string Country::get_controller()
{
	return this->controller;
}


void Country::set_infUSA(int x)
{
	this->influenceUSA = x;
	this->updateControl();
}


void Country::set_infUSSR(int x)
{
	this->influenceUSSR = x;
	this->updateControl();
}

//checks to see if a country is controlled by either player
void Country::updateControl()
{
	if (this->influenceUSA != this->influenceUSSR) {
		//if USA influence is higher and the difference is at least as high as the stability value
		if ((this->influenceUSA > this->influenceUSSR) && ((this->influenceUSA - this->influenceUSSR) >= this->stability)) {
			this->controlled = true;
			this->controller = "USA";
			return;
		}
		//same as above but with USSR
		else if ((this->influenceUSSR > this->influenceUSA) && ((this->influenceUSSR - this->influenceUSA) >= this->stability)) {
			this->controlled = true;
			this->controller = "USSR";
			return;
		}
	}
	this->controlled = false;
	this->controller = "NONE";
}


bool Country::is_battleground()
{
	return this->battleground;
}
