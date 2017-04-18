#include <iostream>
using namespace std;

class Tool {
protected:
	int strength;
	char type;
public:
	Tool(int, char);
	int getStrenght(int);
	void setStrength(int);
	bool fight(Tool);
};

class Rock:public Tool {
public:
	Rock(int);
};

class Paper:public Tool {
public:
	Paper(int);
};

class Scissors:public Tool {
public:
	Scissors(int);
};
