#ifndef RPS_H
#define RPS_H
#include <iostream>

class Tool {
protected:
	int strength;
	char type;
public:
	Tool(int, char);
	int getStrength();
	void setStrength(int);
	char getType();
	void setType(char);
};

class Rock:public Tool {
public:
	Rock(int);
	bool fight(Tool);
};

class Paper:public Tool {
public:
	Paper(int);
	bool fight(Tool);	
};

class Scissors:public Tool {
public:
	Scissors(int);
	bool fight(Tool);
};

void timeDelay(time_t, time_t);

#endif
