#include <iostream>
#include "rps.h"

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
	int newStrength;
	if (foe.getType() == 'r') {return false;}

	else if (foe.getType() == 's') {
		newStrength = (rock.getStrength * 2);
		if (newStrength > foe.getStrength()) {
			return true;
		}
		else {return false;}
	}

	else if (foe.getType() == 'p') {
		newStrength = (rock.getStrength / 2);
		if (newStrength > foe.getStrength()) {
			return true;
		}
		else {return false;}
	}
}

