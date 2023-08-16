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
	bool continue_ = false;
	string option_;


	while (!continue_){
		window_size(270, 500);

		Print_Menu(COURSE_MENU, COURSE_SIZE);
		//option_ = New_Menu("Course:Pointers Menu", OPTIONS_COURSE, OPTIONS_COURSE_SIZE);

		continue_ = Check_Command(check_options(Get_User_Input()));
		

		Pause();
	}
}

string check_options(string option) {
		if (option[0] == COURSE_MENU[1][0]) {//                 1. Functions
			Menu_Functions(); return "IS OPTION";
		}
		else if (option[0] == COURSE_MENU[2][0]) {//            2. Pointers
			Menu_Pointers(); return "IS OPTION";
		}
		else if (option[0] == COURSE_MENU[3][0]) {//            3. Data Structures
			//Data Structures
			return "IS OPTION";
		}
		else {
			//continue_ = false;
		}	
		if (option != "c"); //system("cls");
		return option;
}