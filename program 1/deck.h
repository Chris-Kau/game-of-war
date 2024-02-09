// Author: Chris Kau
// CECS 325-02
// WAR (Prog 1 - WAR)
// Due 02/15/2024
// I certify that this program is my own original work. I did not copy any part of this program from any other source. I further certify that I typed each and every line of code in this program.
#ifndef DECK_H
#define DECK_H
#include <string>
#include <vector>
#include "card.h"
class Deck
{
	private:
		std::vector<char> suits;
		std::vector<char> ranks;
		std::vector<Card> myDeck;
	public:
		Deck();
		Card deal();
		void display();
		void shuffle();
};
#endif
