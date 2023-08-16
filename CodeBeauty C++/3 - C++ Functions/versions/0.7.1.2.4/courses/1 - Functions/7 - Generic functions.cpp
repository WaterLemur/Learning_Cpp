#include "../1 - Functions.h"
#include <iostream>

using namespace std;

template<typename T>//<class T>
void Swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}


void C1C7() 
{
	int a = 5, b = 7;
	cout << a << " - " << b << endl;
	Swap(a, b);
	cout << a << " - " << b << endl;

	char c = 'c', d = 'd';
	cout << c << " - " << d << endl;
	Swap(c, d);
	cout << c << " - " << d << endl;

	system("pause>0");
}