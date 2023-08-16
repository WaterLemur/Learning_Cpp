#include "../h/Menu.h"



//extern const int SPACE_TITLE;
//extern const int SPACE_INPUT;
//
//extern const int COLOR_TITLE;
//extern const int COLOR_TUTORIAL;
//
//
//extern const int COLOR_R_MENU_MAIN;
//extern const int COLOR_R_MENU_COURSE;
//extern const int COLOR_R_MENU_FUNCTIONS;
//
//
//extern const int COLOR_G_MENU_MAIN;
//extern const int COLOR_G_MENU_COURSE;
//extern const int COLOR_G_MENU_FUNCTIONS;
//
//
//extern const int COLOR_B_MENU_MAIN;
//extern const int COLOR_B_MENU_COURSE;
//extern const int COLOR_B_MENU_FUNCTIONS;
//
//
////color functions: red
////color pointers: gree
////color data structures: blue
//
//extern const int COLOR_INFORMATION;
//extern const int COLOR_ERROR;
//
//
//extern int starter_color;
//extern int menu_iterations;


const int SPACE_TITLE = 3;
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



string options_menu[3] = {
	{"/commands = List of commands"},
	{"/commands = List of commands"},
	{"/commands = List of commands"}
};



int Menu_Main() {
	try {
		/*format();

		cout << endl;
		Space(SPACE_TITLE);
		*/
		random_color(starter_color);
		int i = 0;
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
		new_page(SPACE_TITLE);
		Title("Main menu", SPACE_TITLE, menu_iterations);

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
		new_page(SPACE_TITLE);
		int i = 0;
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
		Title("Course Menu", SPACE_TITLE, menu_iterations);

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
			int r;
			do {
				r = Menu_Functions(
					starter_color, 
					COLOR_R_MENU_FUNCTIONS, 
					COLOR_G_MENU_FUNCTIONS, 
					COLOR_B_MENU_FUNCTIONS, 
					COLOR_TUTORIAL,
					
					SPACE_TITLE,
					menu_iterations);
			} while (r == 0);
			
			break;
		case 2:
			// pointers
			break;
		case 3:
			// data structs
			break;
		}

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