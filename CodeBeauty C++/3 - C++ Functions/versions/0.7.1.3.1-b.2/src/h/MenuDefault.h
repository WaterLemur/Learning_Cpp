#pragma once
#include "Default.h"
#include "System.h"
#include "Commands.h"

#include <string>


int OPTIONS_MENU_SIZE();

void window_size(int width, int height);
void random_color();
void new_page();


string New_Menu(string t, const string* OPTIONS, const int OPTIONS_SIZE);
void End_Menu();

void format();
void title(string text);
//int course_ending();

void print_lines(const string DEFAULT[], int size_default,
	const string MENU[], int size_menu);

void Print_Menu(const string OPTIONS_COURSE[], const int OPTIONS_COURSE_SIZE);

void custom_input();
string Get_User_Input();
bool Check_Default_Input(char input);

void Pause();


void first_menu();




int OPTIONS_MENU_SIZE();
const string* OPTIONS_MENU();

int Starter_Color();