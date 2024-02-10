// Author: Chris Kau
// CECS 325-02
// WAR (Prog 1 - WAR)
// Due 02/15/2024
// I certify that this program is my own original work. I did not copy any part of this program from any other source. I further certify that I typed each and every line of code in this program.
#include <iostream>
#include <string>
#include "deck.h"
#include "card.h"
using namespace std;
Deck::Deck(){
	suits = {'C', 'S','D','H'};
	ranks = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
	for (int i = 0; i < suits.size(); i++){
		for (int j = 0; j < ranks.size(); j++){
			myDeck.push_back(Card(ranks[j], suits[i]));	
		}
	}
}
void Deck::display(){

	for (int k=0; k < this->myDeck.size(); k++){
		if (k % 13  ==  0){ 	//Makes a new line every 13 cards
			cout << endl;
		}
		this->myDeck[k].display();	//prints out the card
		if (k < this->myDeck.size() - 1){	//Gets rid of last comma
			cout << ", ";
		}
	};
	cout << endl;
}

Card Deck::deal(){
	Card card = this->myDeck.front();
	this->myDeck.erase(this->myDeck.begin());
	return cd;
}
