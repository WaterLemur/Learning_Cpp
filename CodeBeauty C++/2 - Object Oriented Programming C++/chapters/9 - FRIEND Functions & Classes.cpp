#include "Headers/9 - FRIEND Functions & Classes.h"
#include "../def/System.h"


using std::cout;
using std::cin;
using std::endl;


class Equilateral_Triangle {
private:
	float a;
	float circumference;
	float area;
public:
	void setA(float length) {
		a = length;
		circumference = a * 3;
		area = (1.73 * a * a) / 4;
	}

	friend void PrintResults(Equilateral_Triangle);//friend function
	friend class Homework;
};


void PrintResults(Equilateral_Triangle et) {
	try {
		cout << "circumference = " << et.circumference << endl;
		cout << "area = " << et.area << endl;
	}
	catch (int ex) {

	}
}

class Homework {
public:
	void PrintResults2(Equilateral_Triangle et) {
		cout << "circumference = " << et.circumference << endl;
		cout << "area = " << et.area << endl;
	}
};


void N9_FRIEND_Functions_and_Classes() {
	try {
		Title(9.0f, "FRIEND Functions and Classes");

		Equilateral_Triangle et;
		et.setA(3);

		PrintResults(et);

		cout << endl << endl;//Friend class

		Homework h;
		h.PrintResults2(et);
	}
	catch (int ex) {

	}
}