#include "Gamestate.h"



Gamestate::Gamestate()
{
	score = 0;
	defcon = 0;
	turn = 0;
	round = 0;
}


// returns score
int Gamestate::get_score()
{
	return this->score;
}


// sets score
void Gamestate::set_score(int x)
{
	this->score = x;
}
