#include "CardList.h"
#include <random>
#include <algorithm>

CardList::CardList()
{
	//initialise early war cards
	//initialise mid war cards
	//initialise late war cards
}

void CardList::deal_cards(int x)
{
}


void CardList::shuffel_cards()
{
	//random number generator
	std::random_device rand;
	std::mt19937_64 gen(rand());

	deck.insert(deck.end(), std::make_move_iterator(discard.begin()), std::make_move_iterator(discard.end()));

	//need to test if this actually works
	std::shuffle(deck.begin(), deck.end(), gen);
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


Card CardList::find_card(int x)
{
	for (int i = 0; i < usHand.size(); i++)
	{
		if (x == usHand[i].get_id())
		{
			return usHand[i];
		}
	}
	for (int i = 0; i < ussrHand.size(); i++)
	{
		if (x == ussrHand[i].get_id())
		{
			return ussrHand[i];
		}
	}
	throw "card not in hand";
}


std::vector<Card> CardList::get_usHand()
{
	return this->usHand;
}


std::vector<Card> CardList::get_ussrHand()
{
	return this->ussrHand;
}
