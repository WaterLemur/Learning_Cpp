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


void print_default_options(string MENU_SPACE);
void print_custom_options(const string MENU[], int SIZE);
void print_lines(const string MENU[], int SIZE);

void Print_Menu(const string COURSE_MENU[], const int COURSE_SIZE);

void custom_input();
string Get_User_Input();
bool Check_Default_Input(char input);

void Pause();


void first_menu();


int Starter_Color();


string Format_String_2();