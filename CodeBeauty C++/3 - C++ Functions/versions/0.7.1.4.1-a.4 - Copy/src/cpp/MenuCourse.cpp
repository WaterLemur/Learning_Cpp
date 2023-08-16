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
const string space = " ";



void Menu_Course() 
{
	Window_Size(WINDOW_SIZE_X, WINDOW_SIZE_Y);
	check_options_2(Create_Menu(true, title, options_a, options_b, options_size, space));
}

void check_options_2(int option) {
	switch (option) {
	case 1: Menu_Functions();// 1. Functions
	case 2: Menu_Pointers();//  2. Pointers
	case 3:;//                   3. Data Structures
	}
}