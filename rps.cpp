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
