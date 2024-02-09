// Author: Chris Kau
// CECS 325-02
// WAR (Prog 1 - WAR)
// Due 02/15/2024
// I certify that this program is my own original work. I did not copy any part of this program from any other source. I further certify that I typed each and every line of code in this program.
#ifndef CARD_H
#define CARD_H
class Card
{
	private:
		char suit;
		char rank;
	public:
		Card(char rank, char suit);
		void display();
		int compare(Card other);

};
#endif
