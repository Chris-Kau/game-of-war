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
		};
	};
}
void Deck::display(){
	cout << "Original Deck: ";

	for (int k=0; k < this->myDeck.size(); k++){
		if (k % 13  ==  0){
			cout << endl;
		}
		this->myDeck[k].display();
		if (k < this->myDeck.size() - 1){
			cout << ", ";
		}
	};
	cout << endl;
}
