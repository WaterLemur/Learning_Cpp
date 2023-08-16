#include <iostream>
#include "../def/System.h"

using std::cout;
using std::cin;
using std::endl;

class Superclass {
public:
	string name = "Superclass";

	virtual void Virtual_Function() {
		cout << "This is a VIRTUAL FUNCTION called from " << name << "...\n";
	}
};
class Subclass {
public:
	string name = "Subclass";

	virtual void Virtual_Function() {
		cout << "This is a VIRTUAL FUNCTION called from " << name << "...\n";
	}
};

class Instrument {
public:
	virtual void Make_Song() = 0;
};

class Accordion: public Instrument {
public:
void Make_Song() {
		cout << "Accordion is playing...\n";
	}
};

class Piano :public Instrument {
public:
	void Make_Song() {
		cout << "Piano is playing...\n";
	}
};

void N6_Relationship_between_VIRTUAL_FUNCTIONS_PURE_VIRTUAL_FUNCTIONS_and_ABSTRACT_CLASSES()
{
	try {
		Title(6.0f, "Relationship between VIRTUAL FUNCTIONS, PURE VIRTUAL FUNCTIONS and ABSTRACT CLASSES");

		Subclass s;
		s.Virtual_Function();

		Instrument* i1 = new Accordion();
		//i1->Make_Song();
		
		Instrument* i2 = new Piano();
		//i2->Make_Song();

		Instrument* instruments[2] = { i1,i2 };
		for (int i = 0; i < 2; i++)
		{
			instruments[i]->Make_Song();
		}
	}
	catch (int ex) {

	}
}