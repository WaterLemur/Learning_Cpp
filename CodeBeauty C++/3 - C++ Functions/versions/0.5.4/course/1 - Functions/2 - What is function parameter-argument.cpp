#include "../1 - Functions.h"
#include <iostream>

using namespace std;


void introduceMe(string name,string city, int age = 0) {
	cout << "My name is " << name << endl;
	cout << "Im from " << city << endl;
	if (age != 0) {
		cout << "I am " << age << " years old" << endl;
	}
}
void C1C2() {
	/*introduceMe("Saldina", "Mostar", 25);
	introduceMe("Anna", "NY");*/

	string name, city;
	int age;
	cout << "Name: ";
	cin >> name;
	cout << "City: ";
	cin >> city;
	cout << "Age: ";
	cin >> age;

	introduceMe(name, city, age);
}