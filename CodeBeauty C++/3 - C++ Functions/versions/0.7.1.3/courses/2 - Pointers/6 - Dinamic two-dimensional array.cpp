#include "../2 - Pointers.h"

#include <iostream>
using namespace std;



void C2C6()
{
	int rows, cols;
	cout << "rows, cols: ";
	cin >> rows >> cols;

	int** table = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		table[i] = new int[cols];
	}

	table[1][2] = 88;
	for (int i = 0; i < rows; i++)
	{
		delete[] table[i];
		table[i] = NULL;
	}
	delete[] table;
	table = NULL;


	system("pause>0");
}