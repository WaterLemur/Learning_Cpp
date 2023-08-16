#include "../h/System.h"


void Ending() 
{
	try {
		system("cls");
		Console_Color(6);
		cout << endl << endl;
		Space(INTRO_OUTRO_SPACE);
		cout << "Program closing...";
		cin.get();

		cout << endl;
		Console_Color(30);
	}
	catch (int ex) {
		Error("System.cpp", "Ending()", ex);
	}
}