#include "../2 - Pointers.h"

#include <iostream>
using namespace std;


void C2C3()
{
	int luckyNumbers[5];
	/*cout << luckyNumbers << endl;
	cout << &luckyNumbers[0] << endl;
	cout << luckyNumbers[2] << endl;
	cout << *(luckyNumbers + 2) << endl;*/

	for (int i = 0; i <= 4; i++)
	{
		cout << "Number: ";
		cin >> luckyNumbers[i];
	}

	for (int i = 0; i <= 4; i++)
	{
		cout << *(luckyNumbers + i) << "  ";
	}


	system("pause>0");
}