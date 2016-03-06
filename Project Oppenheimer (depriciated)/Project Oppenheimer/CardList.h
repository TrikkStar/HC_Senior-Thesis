#pragma once
#include <vector>
#include "Card.h"

class CardList
{
public:
	CardList();
private:
	std::vector<Card> deck;
	std::vector<Card> discard;
	std::vector<Card> removed;
	std::vector<Card> usHand;
	std::vector<Card> ussrHand;
	std::vector<Card> earlyWar;
	std::vector<Card> midWar;
	std::vector<Card> lateWar;
public:
	void deal_cards(int x);
	void shuffel_cards();
	void discard_card(int x);
	void remove_card(int x);
	void add_EW();
	void add_MW();
	void add_LW();
private:
	Card find_card(int x);
public:
	std::vector<Card> get_usHand();
	std::vector<Card> get_ussrHand();
};

