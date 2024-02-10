// Author: Chris Kau
// CECS 325-02
// WAR (Prog 1 - WAR)
// Due 02/15/2024
// I certify that this program is my own original work. I did not copy any part of this program from any other source. I further certify that I typed each and every line of code in this program.
#include <iostream>
#include "card.h"
#include "deck.h"
using namespace std;
int main(){
	Deck dck;
	dck.display();
	Card dckCard = dck.deal();
	Card dckCard2 = dck.deal();
	cout << endl;
	cout << "DISPLAYED: ";
	dckCard.display();
	cout << ' ';
	dckCard2.display();
	cout << endl;
	cout << dckCard.compare(dckCard2);
}
