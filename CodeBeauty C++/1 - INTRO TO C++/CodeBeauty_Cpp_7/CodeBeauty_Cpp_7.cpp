// 7 - How to make BMI Calculator application PROGRAMMING TUTORIAL
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void main()
{
	float weight;
	float height;
	float bmi;

	cout << "Weight(Kg), Height(m):" << endl;
	cin >> weight >> height;

	bmi = weight / (height * height);
	if (bmi < 18.5)
	{
		cout << "You are really UNDERWEIGHT! :C";
	}
	else if (bmi > 25)
	{
		cout << "You are OVERWEIGHT! :/";
	}
	else
	{
		cout << "You weight is NORMAL! :D";
	}
	cout << endl << "BMI is: " << bmi << endl << endl;

	cout << "Thanks. Bye!" << endl;
}