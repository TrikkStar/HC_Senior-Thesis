#pragma once
#include <string>

ref class Country
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

