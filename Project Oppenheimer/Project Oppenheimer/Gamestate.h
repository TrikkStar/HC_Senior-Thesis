#pragma once
#include "CountryList.h"

class Gamestate
{
public:
	Gamestate();
private:
	int score;
	int defcon;
	int turn;
	int round;
public:
	CountryList countryLst;
	int get_score();
	void set_score(int x);
	int get_defcon();
	void set_defcon(int x);
	int get_turn();
	int get_round();
	void set_turn(int x);
	void set_round(int x);
};
