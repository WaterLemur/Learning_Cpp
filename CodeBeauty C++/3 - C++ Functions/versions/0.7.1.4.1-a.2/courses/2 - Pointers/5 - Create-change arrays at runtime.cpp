#include "../2 - Pointers.h"

#include <iostream>
using namespace std;



void C2C5()
{
	int size;
	cout << "Size: ";
	cin >> size;
	//int myArray[5];
	//int myArray[size];
	int* myArray = new int[size];

	for (int i = 0; i < size; i++) {
		cout << "Array [" << i << "] ";
		cin >> myArray[i];
	}

	for (int i = 0; i < size; i++) {
		//cout << myArray[i] << " ";
		cout << *(myArray + i) << " ";
	}

	delete[] myArray;
	myArray = NULL;


	system("pause>0");
}