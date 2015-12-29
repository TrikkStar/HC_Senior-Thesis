#pragma once
#include <string>

class Country
{
public:
	Country();
	const int stability;
private:
	int influenceUSA;
	int influenceUSSR;
	bool controlled;
	std::string controller;
};

