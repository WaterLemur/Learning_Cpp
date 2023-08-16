#include "../3 - Data structures.h"

#include <iostream>
using namespace std;


void C3C2()
{
	//total, average, inTwoYears
	cout << "Enter size: ";
	int size;
	cin >> size;
	float* monthsArray = new float[size];
	//float monthsArray[6];// = { 100,220,300,0,200,250 };

	float total = 0;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter amount of month " << i + 1 << ": ";
		cin >> monthsArray[i];
		total += monthsArray[i];
	}

	float average = total / size;
	float inTwoYears = average * 24;

	cout << "total = " << total << endl;
	cout << "average = " << average << endl;
	cout << "inTwoYears = " << inTwoYears << endl;


	system("pause>0");
}