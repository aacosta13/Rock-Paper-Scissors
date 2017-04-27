#include <iostream>
#include <cstdlib>
#include <ctime>
#include "rps.h"
using namespace std;

Tool::Tool(int s, char t) {
	int strength = s;
	char type = t;
}

Rock::Rock(int s):Tool(s, 'r') {
}

Paper::Paper(int s):Tool(s, 'p') {
}

Scissors::Scissors(int s):Tool(s, 's') {
}

void Tool::setStrength(int s) {
	strength = s;
}

int Tool::getStrength() {
	return strength;
}

void Tool::setType(char t) {
	type = t;
}

char Tool::getType() {
	return type;
}

void timeDelay(time_t start, time_t end) {
	time(&start);
	do time(&end); while(difftime(end, start) <= 2);
}

bool Rock::fight(Tool foe) {
	int randStrength, userStrength, foeStrength;
	foeStrength = foe.getStrength();
	time_t start, end;
	
	cout << "\nYour strength will now be randomly chosen from 1-10." << endl;
	cout << "Calculating..." << endl;
	timeDelay(start, end);
	srand(time(NULL));
	randStrength = rand() % 10 + 1;
	cout << "Your strength is: " << randStrength << "." << endl;

	if (foe.getType() == 'r') {return false;}

	else if (foe.getType() == 's') {
		int newStrength = randStrength * 2;
		if (newStrength > foeStrength) {
			return true;
		}
		else {return false;}
	}

	else if (foe.getType() == 'p') {
		int newStrength = randStrength / 2;
		if (newStrength > foeStrength) {
			return true;
		}
		else {return false;}
	}
}

bool Paper::fight(Tool foe) {
	int randStrength, userStrength, foeStrength;
	foeStrength = foe.getStrength();
	time_t start, end;
	
	cout << "\nYour strength will now be randomly chosen from 1-10." << endl;
	cout << "Calculating..." << endl;
	timeDelay(start, end);
	srand(time(NULL));
	randStrength = rand() % 10 + 1;
	cout << "Your strength is: " << randStrength << "." << endl;

	if (foe.getType() == 'p') {return false;}

	else if (foe.getType() == 'r') {
		int newStrength = randStrength * 2;
		if (newStrength > foeStrength) {
			return true;
		}
		else {return false;}
	}

	else if (foe.getType() == 's') {
		int newStrength = randStrength / 2;
		if (newStrength > foeStrength) {
			return true;
		}
		else {return false;}
	}
}

bool Scissors::fight(Tool foe) {
	int randStrength, userStrength, foeStrength;
	foeStrength = foe.getStrength();
	time_t start, end;
	
	cout << "\nYour strength will now be randomly chosen from 1-10." << endl;
	cout << "Calculating..." << endl;
	timeDelay(start, end);
	srand(time(NULL));
	randStrength = rand() % 10 + 1;
	cout << "Your strength is: " << randStrength << "." << endl;

	if (foe.getType() == 's') {return false;}

	else if (foe.getType() == 'p') {
		int newStrength = randStrength * 2;
		if (newStrength > foeStrength) {
			return true;
		}
		else {return false;}
	}

	else if (foe.getType() == 'r') {
		int newStrength = randStrength / 2;
		if (newStrength > foeStrength) {
			return true;
		}
		else {return false;}
	}
}


