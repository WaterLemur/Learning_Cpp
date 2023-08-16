#pragma once
#include "Default.h"
#include "System.h"
#include "Commands.h"

#include <string>



void window_size(int width, int height);
void random_color();
void new_page();



void End_Menu();

void format();
void print_title(string text);
//int course_ending();

int Create_Menu(const string title, const string menu_a[], const string menu_b[], int array_size);
	
void Print_Menu(string title[], const int SIZE);
string* glue_menu(const string menu_a[], const string menu_b[], int array_size);
bool check_option(int& option_, const string options[], int size, string user_input);
void print_custom_options(const string MENU[], int SIZE);
void print_lines(const string MENU[], int SIZE);


void custom_input();
string get_user_input();
bool Check_Default_Input(char input);

void Pause();


void first_menu();


int Starter_Color();


string Format_String_2();