#include "../h/Menu.h"

int starter_color;
int menu_iterations = 1;

string options_menu[1] = {
	{"0. List of commands"}
};
string options_functions[8] = {
{"1. What are functions?"},
{"2. What is function parameter/argument (multiple, default)"},
{"3. Functions return statement, How to check prime number"},
{"4. What is function overloading?"},
{"5. How to build an ATM application in C++? (For beginners)"},
{"6. What is recursion? Learn recursive functions!"},
{"7. What are generic functions and templates?"},
{"8. Lambda expressions in modern C++ (in depth step by step tutorial)"},
};
string options_pointers[9] = {
	{"1. Introduction to C++ pointers (for beginners)"},
	{"2. What is a void pointer? (for beginners)"},
	{"3. How to use pointers and arrays (for beginners)"},
	{"4. Return multiple values from a function using pointers?"},
	{"5. How to create/change arrays at runtime? (Dynamic arrays)"},
	{"6. What is a dynamic two-dimensional array?"},
	{"7. SMART POINTERS in C++ (for beginners in 20 minutes)"},
	{"8. Function Pointers for beginners! How and when to use Function Pointers?"},
	{"9. Function pointers, delegates and callbacks | Beginner friendly"},
};



void window_size(int width, int height) {
	try {
		HWND console = GetConsoleWindow();
		RECT r;
		GetWindowRect(console, &r); //stores the console's current dimensions

		MoveWindow(console, r.left, r.top, width, height, TRUE);
	}
	catch (int ex) {
		Error("Menu.cpp", "window_size(int, int)", ex);
	}
}
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

void Title(string text) {
	cout << endl;
	Space(SPACE_TITLE);

	try {
		Space(SPACE_TITLE);
		cout << '[' << menu_iterations << "] -";
		cout << text << endl;
		cout << endl;
		menu_iterations++;
	}
	catch (int ex) {
		Error("System.cpp", "Title(string)", ex);
	}
}


int Menu_Main() {
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

		window_size(250, 300);
		new_page();
		Title("Main menu");

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
		Title("Course Menu");

		cout << "0. List of commands" << endl;
		cout << endl;
		cout << "1. Functions" << endl;
		cout << "2. Pointers" << endl;
		cout << "3. Data structures" << endl;
		cout << endl;

		int j;
		cin >> j;



		window_size(500, 300);
		switch (j) {
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

		Title("Menu 2");
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

	Title("Course:Functions Menu");

	cout << options_menu[0] << endl;
	cout << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << options_pointers[i] << endl;
	}
	cout << endl;


	string j;
	cin >> j;








	window_size(300,500);
	set_color(COLOR_TUTORIAL);

	cout << endl;
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++";
	//cout << endl;

	if (j == "0") {
		return 0;
	}
	else if (j == "1") {
		Title(options_functions[0]); C1C1();
	}
	else if (j == "2") {
		Title(options_functions[1]); C1C2();
	}
	else if (j == "3") {
		Title(options_functions[2]); C1C3();
	}
	else if (j == "4") {
		Title(options_functions[3]); C1C4();
	}
	else if (j == "5") {
		Title(options_functions[4]); C1C5();
	}
	else if (j == "5.1") {
		Title(options_functions[4]); C1C51();
	}
	else if (j == "6") {
		Title(options_functions[5]); C1C6();
	}
	else if (j == "6.1") {
		Title(options_functions[5]); C1C61();
	}
	else if (j == "7") {
		Title(options_functions[6]); C1C7();
	}
	else if (j == "8") {
		Title(options_functions[7]); C1C8();
	}


	cout << endl;
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++";
	cout << endl << endl;
	set_color(COLOR_TUTORIAL);

	cin.get();
}


int Menu_Pointers() {
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

	Title("Course:Pointers Menu");

	cout << "0. List of commands" << endl;
	cout << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << options_pointers[i] << endl;
	}
	cout << endl;

	string j;
	cin >> j;








	window_size(300, 500);
	set_color(COLOR_TUTORIAL);

	cout << endl;
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++";
	//cout << endl;

	if (j == "0") {
		return 0;
	}
	else if (j == "1") {
		Title(options_pointers[0]); C2C1();
	}
	else if (j == "2") {
		Title(options_pointers[1]); C2C2();
	}
	else if (j == "3") {
		Title(options_pointers[2]); C2C3();
	}
	else if (j == "4") {
		Title(options_pointers[3]); C2C4();
	}
	else if (j == "5") {
		Title(options_pointers[4]); C2C5();
	}
	else if (j == "6") {
		Title(options_pointers[5]); C2C6();
	}
	else if (j == "7") {
		Title(options_pointers[6]); C2C7();
	}
	else if (j == "8") {
		Title(options_pointers[7]); C2C8();
	}
	else if (j == "9") {
		Title(options_pointers[8]); C2C9();
	}


	cout << endl;
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++";
	cout << endl << endl;
	set_color(COLOR_TUTORIAL);

	cin.get();
	return 0;
}

int Menu_Data_Structures() {
	return 0;
}