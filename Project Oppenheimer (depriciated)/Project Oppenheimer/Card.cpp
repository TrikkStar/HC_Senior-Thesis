#include "Card.h"

Card::Card(int i, int o, int a)
{
	id = i;
	opsValue = o;
	affiliation = a;
}

int Card::get_id()
{
	return this->id;
}


int Card::get_value()
{
	return this->opsValue;
}


int Card::get_affiliation()
{
	return this->affiliation;
}
