#include "CardList.h"
#include <random>
#include <algorithm>

CardList::CardList()
{
	//initialise early war cards
	//initialise mid war cards
	//initialise late war cards
}

void CardList::deal_cards()
{
}


void CardList::shuffel_cards()
{
	//random number generator
	std::random_device rand;
	std::mt19937_64 gen(rand());

	deck.insert(deck.end(), std::make_move_iterator(discard.begin()), std::make_move_iterator(discard.end()));
	std::shuffle(deck.begin(), deck.end(), gen());
}


void CardList::discard_card(int x)
{
}


void CardList::remove_card(int x)
{
}


void CardList::add_EW()
{
	deck.insert(deck.end(), std::make_move_iterator(earlyWar.begin()), std::make_move_iterator(earlyWar.end()));
}


void CardList::add_MW()
{
	deck.insert(deck.end(), std::make_move_iterator(midWar.begin()), std::make_move_iterator(midWar.end()));
}


void CardList::add_LW()
{
	deck.insert(deck.end(), std::make_move_iterator(lateWar.begin()), std::make_move_iterator(lateWar.end()));
}
