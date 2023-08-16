#include "../h/Menu.h"


void format() {
	try {
		string s = " - - - - - - - - - - - - - -- - ";
		cout << s << endl << endl;
	}
	catch (int ex) {
		Error("Menu.cpp", "format()", ex);

	}
}

void Title(int iterations, string text) {
	cout << endl;
	Space(SPACE_TITLE);

	try {
		Space(SPACE_TITLE);
		cout << '[' << iterations << "] -";
		cout << text << endl;
		cout << endl;
	}
	catch (int ex) {
		Error("System.cpp", "Title(string)", ex);
	}
}


int Menu_0(int iterations) {
	try {
		format();

		cout << endl;
		Space(SPACE_TITLE);

		Title(iterations, "Main menu");

		cout << "0. List of commands" << endl;
		cout << "1. Loop menu again" << endl;
		cout << "2. Continue" << endl;
		cout << "3. Close application" << endl;
		cout << endl;

		string s;
		cin >> s;
		if (Check_Command(s)) {
			return 1;
		}
		Space(SPACE_INPUT);
		int number;
		number = stoi(s);
		if (number == -858993460) {
			switch (number) {
			case 0:
				command_list();
				break;
			case 1:
				return 1;
			case 2:
				return 2;
			case 3:
				return 3;
			}
		}
		switch (number) {
		default:
			return 1;
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case3:
			return 3;
		}

		format();
		return 1;
	}
	catch (int ex) {
		Error("Menu.cpp", "Menu_0(int iterations)", ex);
		return 1;
	}
}
int Menu_1() {
	try {
		format();

		Title(0, "Menu 2");
		test_01_noName();

		format();
		return 2;
	}
	catch (int ex) {
		Error("Menu.cpp", "Menu_1()", ex);
		return 1;
	}
}