#include <iostream>
#include "../def/System.h"

using std::cout;
using std::cin;
using std::endl;

class Smartphone {
public:
	virtual void Take_A_Selfie() = 0;
	virtual void Make_A_Call() = 0;
};

class Android : public Smartphone {
public:
	void Take_A_Selfie() {
		cout << "Android selfie\n";
	}
	void Make_A_Call() {
		cout << "Android calling\n";
	}
};

class Iphone:public Smartphone {
public:
	void Take_A_Selfie() {
		cout << "Iphone selfie\n";
	}
	void Make_A_Call() {
		cout << "Iphone calling\n";
	}
};

void N7_ABSTRACTION() {
	try {
		Title(7.0f, "ABSTRACTION");

		Smartphone* s1 = new Android();
		s1->Take_A_Selfie();

		Smartphone* s2 = new Iphone();
		s2->Take_A_Selfie();

		s1->Make_A_Call();
		s2->Make_A_Call();
	}
	catch (int ex) {

	}
}