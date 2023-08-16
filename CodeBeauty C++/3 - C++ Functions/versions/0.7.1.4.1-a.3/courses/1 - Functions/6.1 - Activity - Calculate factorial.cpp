#include "../1 - Functions.h"
#include <iostream>

using namespace std;

int recursive_multiplication(int number) {
	if (number == 1)
		return number;

	return number * recursive_multiplication(number - 1);
}
void C1C61()
{
	int number;
	cout << "Calculate factorial...\n";
	cout << "Enter a number: ";
	cin >> number;
	cout << "Factorial: " << recursive_multiplication(number);


	system("pause>0");
}