#pragma once

class Card
{
public:
	Card(int id, int ops, int affiliation);
private:
	int id;
	int opsValue;
	//-1 USSR, 0 Neutral, 1 USA
	int affiliation;
public:
	int get_id();
	int get_value();
	int get_affiliation();
};
