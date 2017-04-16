#include <iostream>
#include <cstdlib>
#include <ctime>
#include "rps.h"
using namespace std;

int main() {
	Rock rock(4);
	Scissors scissors(2);
	Paper paper(1);
	char choice, enemy, userResponse;
	int randStrength, enemyStrength;
	time_t start, end;

	do {
		cout << "Choose your weapon (r, p, s): ";
		cin >> choice;
		cout << "\nYour strength will now be randomly chosen from 1-10." << endl;
		cout << "Calculating..." << endl;
		timeDelay(start, end);	
		srand(time(NULL));
		randStrength = rand() % 10 + 1;
		cout << "Your strength is: " << randStrength << "." << endl;

		cout << "\nThe computer shall now choose their weapon." << endl;
		cin >> enemy;

		
	

		cout << "Want to play again? (Y/N) \n";
		cin >> userResponse;
	} while (userResponse == 'Y' || userResponse == 'y');

	return 0;
}
