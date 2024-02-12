// Author: Chris Kau
// CECS 325-02
// WAR (Prog 1 - WAR)
// Due 02/15/2024
// I certify that this program is my own original work. I did not copy any part of this program from any other source. I further certify that I typed each and every line of code in this program.
#include <iostream>
#include <string>
#include "deck.h"
#include "card.h"
#include <random>
using namespace std;
Deck::Deck()
{
	suits = {'C', 'S','D','H'};
	ranks = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
	for (int i = 0; i < suits.size(); i++)
	{
		for (int j = 0; j < ranks.size(); j++)
		{
			myDeck.push_back(Card(ranks[j], suits[i]));	
		}
	}
}
void Deck::display()
{
	for (int k=0; k < myDeck.size(); k++)
	{
		if (k % 13  ==  0)
		{ 	//Makes a new line every 13 cards
			cout << endl;
		}
		myDeck[k].display();	//prints out the card
		if (k < myDeck.size() - 1) //Gets rid of last comma

		{	
			cout << ", ";
		}
	};
	cout << endl;
}

Card Deck::deal()
{
	Card card = myDeck.front();
	myDeck.erase(myDeck.begin());
	return card;
}

void Deck::shuffle()
{
	srand(time(0)); //generates a random seed based off the number of seconds since 00:00 hours, Jan1, 1970 UTC.
	for(int i = 0; i < myDeck.size();i++){
		int seed = rand(); //generates a random number based off the seed determined by srand
		swap(myDeck[i + (seed % (52 - i))], myDeck[i]); //swaps the index of random remaining cards/indexes
	}
}
