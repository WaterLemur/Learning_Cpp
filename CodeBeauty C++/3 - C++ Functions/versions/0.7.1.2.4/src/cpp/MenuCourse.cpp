#include "../h/MenuCourse.h"



const int SPACE_TITLE = 3;
const int SPACE_MENU = 7;
const int SPACE_INPUT = 2;

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
const int COLOR_SYSTEM = 223;


int menu_iterations = 0;

int starter_color = 0;



const int OPTIONS_MENU_SIZE = 2;
const string OPTIONS_MENU[2] = {
	{"/. List of commands"},
	//{"0. RETURN"},
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

	while (!_continue){
		window_size(270, 320);
		first_menu();

		Print_Menu(SPACE_TITLE, SPACE_MENU, menu_iterations, OPTIONS_MENU, OPTIONS_MENU_SIZE,
			OPTIONS_COURSE, OPTIONS_COURSE_SIZE);


		_option = check_user_input(SPACE_INPUT);


		if (_option != "COMMAND") {//                                 /command
			_continue = true;

			if (_option[0] == OPTIONS_MENU[0][0]) {//                 /. Commands
				//list of commands
			}
			else if (toupper(_option[0]) == OPTIONS_MENU[1][0]) {//   C. CLOSE
				Close();
			}
			else if (_option[0] == OPTIONS_COURSE[1][0]) {//          1. Functions
				//Functions
				Menu_Functions(starter_color, COLOR_R_MENU_FUNCTIONS, 
					COLOR_G_MENU_FUNCTIONS, COLOR_B_MENU_FUNCTIONS, 
					COLOR_TUTORIAL, 
					
					SPACE_TITLE, menu_iterations);
			}
			else if (_option[0] == OPTIONS_COURSE[2][0]) {//          2. Pointers
				//Pointers
			}
			else if (_option[0] == OPTIONS_COURSE[3][0]) {//          3. Data Structures
				//Data Structures
			}
			else _continue = false;
		}

		if (_option != "c") {
			cout << endl;
			Console_Color(COLOR_SYSTEM);
			Space(SPACE_MENU); Pause(); cout << endl;
			Console_Color(starter_color);

			system("cls");
		}
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