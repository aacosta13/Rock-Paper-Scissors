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
	int randStrength, enemyWeapon, enemyStrength;
	int weaponConvert;
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

		cout << "\nThe computer will now have their weapon and strength"
			 <<	" randomly chosen." << endl;
		srand(time(NULL));
		enemyWeapon = rand() % 2 + 0; 
		if (enemyWeapon == 0) {enemy = 'r';}
		else if (enemyWeapon == 1) {enemy = 'p';}
		else {enemy = 's';}
		srand(time(NULL));
		enemyStrength = rand() % 10 + 1;

		Tool foe(enemyStrength, enemy);
		foe.setStrength(enemyStrength);
		foe.setType(enemy);

		if (choice == 'r') {
			rock.setStrength(randStrength);
			rock.fight(foe);
			if (rock.fight(foe) == true)
				{cout << "You win!\n";}
			else
				{cout << "You lose!\n";}
		}


		cout << "Want to play again? (Y/N) \n";
		cin >> userResponse;
	} while (userResponse == 'Y' || userResponse == 'y');

	return 0;
}
