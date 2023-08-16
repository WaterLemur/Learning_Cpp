#include "../h/Menu.h"


void Title(int iterations, string text) {
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

int Menu_1(int iterations) {
	try {
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
		int i;
		i = stoi(s);
		if (i == -858993460) {
			switch (i) {
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
		return 1;
	}
	catch (int ex) {
		Error("System.cpp", "Menu_1()", ex);
		return 1;
	}
}