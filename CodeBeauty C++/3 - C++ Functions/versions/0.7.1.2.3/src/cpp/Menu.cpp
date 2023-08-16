#include "../h/Menu.h"



const int SPACE_TITLE = 3;
const int SPACE_MENU = 7;
const int SPACE_INPUT = SPACE_TITLE;

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


int menu_iterations = 0;

int starter_color = 0;



const int OPTIONS_MENU_SIZE = 3;
const string OPTIONS_MENU[3] = {
	{"/. List of commands"},
	{"0. RETURN"},
	{"C. CLOSE"}
};

const int OPTIONS_COURSE_SIZE = 4;
const string OPTIONS_COURSE[4] = {
	{"COURSE MENU"},
	{"1. Functions"},
	{"2. Pointers"},
	{"3. Data structures"}
};



int Menu_Course() 
{
	string _option;
	bool _continue = false;

	window_size(270, 320);
	while (!_continue){
		first_menu();

		Print_Menu(SPACE_TITLE, SPACE_MENU, menu_iterations, OPTIONS_MENU, OPTIONS_MENU_SIZE,
			OPTIONS_COURSE, OPTIONS_COURSE_SIZE, 3, 4);


		_option = check_user_input(SPACE_INPUT);


		if (_option != "COMMAND") {//                    /command
			_continue = true;

			if (_option[0] == OPTIONS_MENU[0][0]) {//   /. Commands
				//list of commands
			}
			else if (_option[0] == OPTIONS_MENU[1][0]) {//   0. RETURN
				//RETURN
			}
			else if (_option[0] == OPTIONS_MENU[2][0]) {//   C. CLOSE
				//CLOSE
			}

			else if (_option[0] == OPTIONS_COURSE[1][0]) {// 1. Functions
				//Functions
			}
			else if (_option[0] == OPTIONS_COURSE[2][0]) {// 2. Pointers
				//Pointers
			}
			else if (_option[0] == OPTIONS_COURSE[3][0]) {// 3. Data Structures
				//Data Structures
			}
			else _continue = false;
		}

		Console_Color(0);
		char _tmp;
		cin >> _tmp;
		Console_Color(starter_color);


		system("cls");
	}



	title("Menu 2", SPACE_TITLE, menu_iterations);
	test_01_noName();

	format();
	return 2;
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