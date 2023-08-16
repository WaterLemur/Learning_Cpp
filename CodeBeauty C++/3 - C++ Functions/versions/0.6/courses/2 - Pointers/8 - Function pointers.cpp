#include "../2 - Pointers.h"

#include <iostream>
using namespace std;


int getNumber() {
	return 5;
}

int add(int a, int b) {
	return a + b;
}

void part1(), part2(), part3();

void C2C8()
{
	part1();
	part2();
	part3();


	system("pause>0");
}


void part1() {
	cout << getNumber() << endl;
	cout << getNumber << endl;

	int(*funcPtr)();
	funcPtr = getNumber;
	cout << funcPtr();
}
void part2() {
	int(*funcPtr)(int, int) = add;
	cout << add(2, 3) << endl;
	cout << funcPtr(3, 4) << endl;
}
void part3() {

}