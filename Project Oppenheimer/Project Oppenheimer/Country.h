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
public:
	int get_stability();
	std::string get_name();
	int get_id();
	std::vector<int> get_adjacent();
	std::vector<int> get_influence();
	bool is_controlled();
	std::string get_controller();
	void set_infUSA(int x);
	void set_infUSSR(int x);
private:
	void updateControl();
};

