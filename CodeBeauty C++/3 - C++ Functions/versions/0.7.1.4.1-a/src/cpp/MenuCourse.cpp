#include "../h/MenuCourse.h"



const int WINDOW_SIZE_X = 270;
const int WINDOW_SIZE_Y = 500;

const int COURSE_SIZE = 5;
const string COURSE_MENU[COURSE_SIZE] = {
	{" "},
	{"COURSE MENU"},

	{"1. Functions"},
	{"2. Pointers"},
	{"3. Data structures"}
};



void Menu_Course() 
{
	Create_Menu(COURSE_MENU, COURSE_SIZE);

	check_options
}

string check_options(string option) {
		if (option[0] == COURSE_MENU[2][0]) {//                 1. Functions
			Menu_Functions(); return "IS OPTION";
		}
		else if (option[0] == COURSE_MENU[3][0]) {//            2. Pointers
			Menu_Pointers(); return "IS OPTION";
		}
		else if (option[0] == COURSE_MENU[4][0]) {//            3. Data Structures
			//Data Structures
			return "IS OPTION";
		}
		else {
			//continue_ = false;
		}	
		if (option != "c"); //system("cls");
		return option;
}