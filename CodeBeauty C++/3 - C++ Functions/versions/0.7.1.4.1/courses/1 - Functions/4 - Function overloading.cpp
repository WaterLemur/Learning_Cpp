#include "../1 - Functions.h"
#include <iostream>

using namespace std;

int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b, float c);

void C1C4() {
	cout << sum(4, 3) << endl;
	cout << sum(4.4, 3.3) << endl;
	cout << sum(4.4, 3.3, 2.2) << endl;

	system("pause>0");
}

int sum(int a, int b) {
	return a + b;
}
double sum(double a, double b) {
	return a + b;
}
float sum(float a, float b, float c) {
	return a + b + c;
}