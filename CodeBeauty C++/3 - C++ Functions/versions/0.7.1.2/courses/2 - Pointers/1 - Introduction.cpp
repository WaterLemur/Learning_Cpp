#include "../2 - Pointers.h"

#include <iostream>
using namespace std;

void C2C1() 
{
	int n = 5;
	cout << n << endl;
	cout << &n << endl;// &x = the adress of x
	int* ptr = &n;
	cout << ptr << endl;
	cout << *ptr << endl;// *x = the value of x

	*ptr = 10;
	cout << *ptr << endl;
	cout << n << endl;

	int v;
	int* ptr2 = &v;
	*ptr2 = 7;
	cout << "v=" << v << endl;
	 

	system("pause >0");
}