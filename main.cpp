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
	int enemyWeapon, enemyStrength;
	int weaponConvert;
	time_t start, end;
	bool outcome;

	do {
		cout << "\nChoose your weapon (r, p, s). Strength will be chosen later. ";
		cin >> choice;
	
		cout << "The computer will now have their weapon and strength"
			 <<	" randomly chosen." << endl;
		cout << "Calculating..." << endl;
		timeDelay(start, end);

		srand(time(NULL));
		enemyWeapon = rand() % 2 + 0; 
		if (enemyWeapon == 0) {enemy = 'r';}
		else if (enemyWeapon == 1) {enemy = 'p';}
		else {enemy = 's';}
		srand(time(NULL));
		enemyStrength = rand() % 10 + 1;
		cout << "The computer chose " << enemyWeapon << "and their strength is "
			 << enemyStrength << "." << endl;

		Tool foe(enemyStrength, enemy);
		foe.setType(enemy);

		if (choice == 'r') {
			outcome = rock.fight(foe);
			if (true)
				{cout << "You win!\n";}
			else
				{cout << "You lose!\n";}
		}


		cout << "Want to play again? (Y/N) \n";
		cin >> userResponse;
	} while (userResponse == 'Y' || userResponse == 'y');

	return 0;
}
