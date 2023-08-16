#pragma once
#include "Commands.h"
#include <string>

#include "../../courses/0 - Test/0 - Test chapter/CO0CH1 - Test chapter.h"
#include "../../courses/1 - Functions.h"
#include "../../courses/2 - Pointers.h"
#include "../../courses/3 - Data structures.h"


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

void window_size(int width, int height);
void random_color();
void set_color(int COLOR = 7);

void new_page();
void format();
void Title(string text);

int Menu_Main();
int Menu_Course();
int menu_functions();
int course_ending();
int Menu_Pointers();
int Menu_Data_Structures();