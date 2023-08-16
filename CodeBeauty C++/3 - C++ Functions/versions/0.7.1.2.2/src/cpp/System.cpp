#include "../h/System.h"


int Ending() 
{
	try {
		string s = " - - - - - - - - - - - - - -- - ";
		cout << endl << endl << s << endl << endl;
		cout << "...END.";
		cin.get();

		system("cls");
		Console_Color(6);
		cout << endl << endl;
		Space(INTRO_OUTRO_SPACE);
		cout << "Program closing...";
		cin.get();

		cout << endl;
		Console_Color(30);


		return 0;
	}
	catch (int ex) {
		Error("System.cpp", "Ending()", ex);
		return -1;
	}
}