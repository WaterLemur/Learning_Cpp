#include "../h/MenuCourse.h"



const int WINDOW_SIZE_X = 270;
const int WINDOW_SIZE_Y = 500;


const string title = "COURSE MENU";
const int options_size = 3;

const string options_a[options_size] = {
	{"1."},
	{"2."},
	{"3."}
};
const string options_b[options_size] = {
	{" Functions"},
	{" Pointers"},
	{" Data structures"}
};



void Menu_Course() 
{
	check_options(Create_Menu(title, options_a, options_b, options_size));
}

bool check_options(int option) {
	switch (option) {
	case 1: Menu_Functions(); return "IS OPTION";// 1. Functions
	case 2: Menu_Pointers(); return "IS OPTION";//  2. Pointers
	case 3: return "IS OPTION";//                   3. Data Structures
	}
}