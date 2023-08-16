#include "../h/MenuFunctions.h"



const int WINDOW_SIZE_X = 650;
const int WINDOW_SIZE_Y = 350;


const string title = "FUNCTIONS MENU";
const int options_size = 9;
const string options_a[options_size] = {
	{"1."},
	{"2."},
	{"3."},
	{"4."},
	{"5."},
	{"5.1"},
	{"6."},
	{"7."},
	{"8."}
};
const string options_b[options_size] = {
	{"  What are functions?"},
	{"  What is function parameter/argument (multiple, default)"},
	{"  Functions return statement, How to check prime number"},
	{"  What is function overloading?"},
	{"  How to build an ATM application in C++? (For beginners)"},
	{" Activity - ATM Users"},
	{"  What is recursion? Learn recursive functions!"},
	{"  What are generic functions and templates?"},
	{"  Lambda expressions in modern C++ (in depth step by step tutorial)"}
};
const string space = "  ";



void check_options(int option) {
	switch (option) {
	case 1: print_title(options_a[0] + options_a[0]); C1C1();// 1. Functions
	case 2: Menu_Pointers();//  2. Pointers
	case 3:;//                   3. Data Structures
	}
	Pause();
	/*
	if (j_ == "1") {
		window_size(650, 540);
		
	}
	else if (j_ == "2") {
		window_size(650, 650);
		print_title(options_functions[2]); C1C2();
	}
	else if (j_ == "3") {
		window_size(200, 650);
		print_title(options_functions[3]); C1C3();
	}
	else if (j_ == "4") {
		window_size(650, 650);
		print_title(options_functions[4]); C1C4();
	}
	else if (j_ == "5") {
		print_title(options_functions[5]); C1C5();
	}
	else if (j_ == "5.1") {
		print_title(options_functions[6]); C1C51();
	}
	else if (j_ == "6") {
		print_title(options_functions[7]); C1C6();
	}
	else if (j_ == "6.1") {
		print_title(options_functions[8]); C1C61();
	}
	else if (j_ == "7") {
		print_title(options_functions[9]); C1C7();
	}
	else if (j_ == "8") {
		print_title(options_functions[10]); C1C8();
	}*/
}

void Menu_Functions() 
{
	window_size(WINDOW_SIZE_X, WINDOW_SIZE_Y);
	check_options(Create_Menu(title, options_a, options_b, options_size, space));
}