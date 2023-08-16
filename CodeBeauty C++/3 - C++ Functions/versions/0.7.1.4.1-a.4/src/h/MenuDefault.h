#pragma once
#include "Default.h"
#include "System.h"
#include "Commands.h"

#include <string>



using std::stoi;



void Window_Size(int width, int height);
void random_color();
void new_page();



void End_Menu();

void format();
void print_title(string text);
//int course_ending();

int Create_Menu(bool main_menu, const string title, const string menu_a[], const string menu_b[], int array_size, string space);
void Print_Menu(bool main_menu, string menu_ab[], int size, string space);
string* glue_menu(const string menu_a[], const string menu_b[], int array_size);
bool check_option(int& option_, const string options[], int size, string user_input);
void print_custom_options(const string MENU[], int SIZE);
void print_default_options(bool main_menu, const string menu_a[], const string menu_b[], int menu_size, string menu_space);
void print_lines(bool main_menu, const string menu_ab[], int SIZE, string space);


void custom_input();
string get_user_input();
bool Check_Default_Input(char input);

void Pause();


void first_menu();


string Format_String_2();

int Color_Title();
int Color_Tutorial();