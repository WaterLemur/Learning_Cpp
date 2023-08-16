#pragma once
#include "Default.h"
#include "Commands.h"

#include <string>



void window_size(int width, int height);
void random_color(int &starter_color);
void set_color(int COLOR = 7);
void new_page(int SPACE_TITLE);
void format();
void title(string text, int SPACE_TITLE, int &menu_iterations);
int course_ending();

void Print_Lines(int i, int max_loops, const string OPTIONS[], const int SPACE);
void Print_Menu(const int SPACE_TITLE, const int SPACE_MENU, int& menu_iterations,
	const string OPTIONS_MENU[], const int OPTIONS_MENU_SIZE,
	const string OPTIONS_COURSE[], const int OPTIONS_COURSE_SIZE,
	int max_loop_1, int max_loop_2);
string check_user_input(int SPACE_INPUT);