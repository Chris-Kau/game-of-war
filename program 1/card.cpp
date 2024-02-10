// Author: Chris Kau
// CECS 325-02
// WAR (Prog 1 - WAR)
// Due 02/15/2024
// I certify that this program is my own original work. I did not copy any part of this program from any other source. I further certify that I typed each and every line of code in this program.
#include <iostream>
#include <string>
#include "card.h"
using namespace std;

Card::Card(char r, char s){
	rank = r;
	suit = s;
}

void Card::display(){

	if (rank == 'T'){
		cout << "10" << suit;		
	}else{
		cout << rank << suit;
	}

}

int Card::compare(Card other){
	int cardRank;
	int otherRank;
	if(rank == 'T'){
		cardRank = 10;
	}else if(rank == 'A'){
		cardRank = 1;
	}else{
		cardRank = rank - '0'; //Converts the char into an integer
	}

	if(other.rank == 'T'){
		otherRank = 10;
	}else if(other.rank == 'A'){
		otherRank = 1;
	}else{
		otherRank = other.rank - '0'; //Converts the char into an integer
	}

	if (cardRank > otherRank){
		return 1;
	}else if(cardRank < otherRank){
		return -1;
	}else{
		return 0;
	}

}

