#include "../h/Menu.h"



const int SPACE_TITLE = 3;
const int SPACE_MENU = 6;
const int SPACE_INPUT = SPACE_TITLE + 6;

const int COLOR_TITLE = 7;
const int COLOR_TUTORIAL = 7;


const int COLOR_R_MENU_MAIN = 4;
const int COLOR_R_MENU_COURSE = 6;
const int COLOR_R_MENU_FUNCTIONS = 14;


const int COLOR_G_MENU_MAIN = 10;
const int COLOR_G_MENU_COURSE = 2;
const int COLOR_G_MENU_FUNCTIONS = 11;


const int COLOR_B_MENU_MAIN = 1;
const int COLOR_B_MENU_COURSE = 3;
const int COLOR_B_MENU_FUNCTIONS = 11;


//color functions: red
//color pointers: gree
//color data structures: blue

const int COLOR_INFORMATION = 7;
const int COLOR_ERROR = 7;



int starter_color = 0;
int menu_iterations = 1;


const string OPTIONS_MAINMENU[3] = {
	{"MAIN MENU"},
	{"1. Continue"},
	{"2. Close application"}
};


const int OPTIONS_COURSE_SIZE = 4;
const string OPTIONS_COURSE[4] = {
	{"COURSE MENU"},
	{"1. Functions"},
	{"2. Pointers"},
	{"3. Data structures"}
};

const int OPTIONS_MENU_SIZE = 3;
const string OPTIONS_MENU[3] = {
	{"/. List of commands"},
	{"0. RETURN"},
	{"C. CLOSE"}
};



int Menu_Course() 
{
	try {
		window_size(260, 300);
		first_menu();
		print_menu();
		check_user_input();

		cin.get();


		Title("Menu 2", SPACE_TITLE, menu_iterations);
		test_01_noName();

		format();
		return 2;
	}
	catch (int ex) {
		Error("Menu.cpp", "Menu_Course()", ex);
		return 1;
	}
}


void first_menu() {
	int _i = 0;
	random_color(starter_color);
	switch (starter_color) {
	case 1: _i = COLOR_R_MENU_MAIN; break;
	case 2: _i = COLOR_G_MENU_MAIN; break;
	case 3: _i = COLOR_B_MENU_MAIN; break;
	}
	set_color(_i);
}

void print_lines(int i, int max_loops, const string OPTIONS[]) {
	for (i; i < max_loops; i++)
	{
		Space(SPACE_MENU); cout << *(OPTIONS + i) << endl;
	}
}
void print_menu() {
	new_page(SPACE_TITLE);


	Title(*OPTIONS_COURSE, SPACE_TITLE, menu_iterations);

	print_lines(0, OPTIONS_MENU_SIZE, OPTIONS_MENU);
	cout << endl;
	print_lines(1, OPTIONS_COURSE_SIZE, OPTIONS_COURSE);
	cout << endl;
}


int check_user_input() {
	string _input;
	cin >> _input;
	if (Check_Command(_input)) return 2;

	Space(SPACE_INPUT);
	int _number;
	_number = stoi(_input);
	if (_number == -858993460) {
		switch (_number) {
		default: command_list(); break;
		case 0: command_list(); break;
		case 1: return 1;
		case 2: return 2;
		case 3: return 3;
		}
	}
	switch (_number) {
	default: return 1;
	case 0: return 0;
	case 1: return 1;
	case 2: return 2;
	case 3: return 3;
	}

	format();
}