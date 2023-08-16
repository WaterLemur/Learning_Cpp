#include "../h/Menu.h"

int starter_color;


void random_color() {
	try {
		int color = 0;
		srand((unsigned int)time(NULL));
		starter_color = rand() % 3 + 1;
	}
	catch (int ex) {
		Error("Menu.cpp", "random_color()", ex);
	}
}
void set_color(int COLOR) {
	try {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, COLOR);
	}
	catch (int ex) {
		Error("Menu.cpp", "set_color()", ex);
	}
}
void new_page() {
	try {
		system("cls");
		format();

		cout << endl;
		Space(SPACE_TITLE);
	}
	catch (int ex) {
		Error("Menu.cpp", "new_page()", ex);
	}
}
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


int Menu_Main(int iterations) {
	try {
		/*format();

		cout << endl;
		Space(SPACE_TITLE);
		*/
		random_color();
		int i;
		switch (starter_color) {
		case 1:
			i = COLOR_R_MENU_MAIN;
			break;
		case 2:
			i = COLOR_G_MENU_MAIN;
			break;
		case 3:
			i = COLOR_B_MENU_MAIN;
			break;
		}
		set_color(i);


		new_page();
		Title(iterations, "Main menu");

		cout << "0. List of commands" << endl;
		cout << endl;
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
		Error("Menu.cpp", "Menu_Main(int iterations)", ex);
		return 1;
	}
}
int Menu_Course() {
	try {
		new_page();
		int i;
		switch (starter_color) {
		case 1:
			i = COLOR_R_MENU_COURSE;
			break;
		case 2:
			i = COLOR_G_MENU_COURSE;
			break;
		case 3:
			i = COLOR_B_MENU_COURSE;
			break;
		}
		set_color(i);
		Title(1, "Course Menu");

		cout << "0. List of commands" << endl;
		cout << endl;
		cout << "1. Functions" << endl;
		cout << "2. Pointers" << endl;
		cout << "3. Data structures" << endl;
		cout << endl;

		int J;
		cin >> J;
		switch (J) {
		default:
			//default
			break;
		case 0:
			command_list();
			break;
		case 1:
			Menu_Functions();
			break;
		case 2:
			// pointers
			break;
		case 3:
			// data structs
			break;
		}

		Title(0, "Menu 2");
		test_01_noName();

		format();
		return 2;
	}
	catch (int ex) {
		Error("Menu.cpp", "Menu_Course()", ex);
		return 1;
	}
}
int Menu_Functions() {
	new_page();
	int i;
	switch (starter_color) {
	case 1:
		i = COLOR_R_MENU_FUNCTIONS;
		break;
	case 2:
		i = COLOR_G_MENU_FUNCTIONS;
		break;
	case 3:
		i = COLOR_B_MENU_FUNCTIONS;
		break;
	}
	set_color(i);

	Title(1, "Course:Functions Menu");

	cout << "0. List of commands" << endl;
	cout << endl;
	cout << "1. What are functions?" << endl;
	cout << "2. What is function parameter/argument (multiple, default)" << endl;
	cout << "3. Functions return statement, How to check prime number" << endl;
	cout << endl;

	int J;
	cin >> J;







	set_color(COLOR_TUTORIAL);

	cout << endl;
	cout << " ++++++++++++++++++++++++++++++++++++++";
	//cout << endl;

	switch (i) {
	case 0:
		return 0;
	case 1:
		Title(-1, "What are functions?");
		C1C1();
		break;
	case 2:
		Title(-1, " What is function parameter/argument (multiple, default)");
		C1C2();
	}

	cout << endl << endl;
	cout << " ++++++++++++++++++++++++++++++++++++++";
	cout << endl << endl;
	set_color(COLOR_TUTORIAL);

	cin.get();
}