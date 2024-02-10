// Author: Chris Kau
// CECS 325-02
// WAR (Prog 1 - WAR)
// Due 02/15/2024
// I certify that this program is my own original work. I did not copy any part of this program from any other source. I further certify that I typed each and every line of code in this program.
#include <iostream>
#include "card.h"
#include "deck.h"
#include <string>
using namespace std;
int main(){
	string player1;
	string player2;
	cout << "Enter the name of the first player: "; 
	getline(cin, player1);
	cout << endl;
	cout << "Enter the name of the second player: ";
	getline(cin, player2);
	cout << endl;
	Deck deck;
	cout << "Original Deck" << endl;
	deck.display();
	deck.shuffle();
	cout << "Shuffled Deck" <<endl;
	deck.display();
	cout << endl;
	int p1wins;
	int p1losses;
	int p2wins;
	int p2losses;
	int ties;
	int gameCount = 1;
	while(gameCount <= 26)
	{
		cout << "Game " << gameCount << endl << "--------" << endl;
		Card p1card = deck.deal();
		Card p2card = deck.deal();
		cout << player1 << "=>";
		p1card.display();
		cout << endl;
		cout << player2 << "=>";
		p2card.display();
		cout << endl;
		int comparison = p1card.compare(p2card);
		//Checks to see who wins
		if (comparison == 1)
		{
			p1wins++;
			p2losses++;
			cout << player1 << "=> " << "Winner" << endl;
		}else if (comparison == -1)
		{
			p1losses++;
			p2wins++;
			cout << player2 << "=> " << "Winner" << endl;
		}else if (comparison == 0)
		{
			ties++;
			cout << "Tie Game" << endl;
		}
		gameCount++;
		cout << endl;
	}
	//turned to string so we can get length() for proper formatting
	string p1winsString = to_string(p1wins);
	string p1lossesString = to_string(p1losses);
	string tiesString = to_string(ties);
	cout << "------Final Stats------" << endl << string(7, ' ') << player1 << " vs. " << player2 << endl;
	cout << "Wins   " << p1wins << string(player1.length() + 5 - p1winsString.length(), ' ') << p2wins << endl;
	cout << "Losses " << p1losses << string(player1.length() + 5 - p1lossesString.length(), ' ') << p2losses << endl;
	cout << "Ties   " << ties << string(player1.length() + 5 - tiesString.length(), ' ') << ties << endl;
	
}
