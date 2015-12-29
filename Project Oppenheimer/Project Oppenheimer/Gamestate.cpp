#include "Gamestate.h"



Gamestate::Gamestate()
{
	score = 0;
	defcon = 0;
	turn = 0;
	round = 0;
}


int Gamestate::get_score()
{
	return this->score;
}


void Gamestate::set_score(int x)
{
	this->score = x;
}


int Gamestate::get_defcon()
{
	return this->defcon;
}


void Gamestate::set_defcon(int x)
{
	this->defcon = x;
}


int Gamestate::get_turn()
{
	return this->turn;
}


int Gamestate::get_round()
{
	return this->round;
}


void Gamestate::set_turn(int x)
{
	this->turn = x;
}


void Gamestate::set_round(int x)
{
	this->round = x;
}
