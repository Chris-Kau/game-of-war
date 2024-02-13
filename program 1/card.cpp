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
	cvals = {{'A', 1},{'2', 2},{'3',3},{'4',4},{'5',5},{'6',6},{'7',7},{'8',8},{'9',9},{'T',10},{'J',11},{'Q',12},{'K',13}};
}

void Card::display(){
	//Displays each card in a readable format subsituting 'T' for 10
	if (rank == 'T'){
		cout << "10" << suit;		
	}else{
		cout << rank << suit;
	}

}

int Card::compare(Card other){
	//Uses maps to get the values of each rank char to make comparing much easier
	if(cvals[rank] < cvals[other.rank])
	{
		return -1;
	}else if(cvals[rank] > cvals[other.rank])
	{
		return 1;
	}
	return 0;

}

