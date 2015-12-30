#pragma once
#include <string>
#include <vector>

class Country
{
public:
	Country(std::string str, int x, int i, std::vector<int> vect);
private:
	int influenceUSA;
	int influenceUSSR;
	bool controlled;
	std::string controller;
	int stability;
	std::string name;
	int id;
	std::vector<int> adjacent;
};

