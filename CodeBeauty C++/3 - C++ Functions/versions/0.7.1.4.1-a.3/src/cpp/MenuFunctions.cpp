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


int window_size_x[options_size] = {
	650, 650, 200, 650, 650,
	650, 650, 650, 650,
};
int window_size_y[options_size] = {
	540, 650, 650, 650, 650,
	650, 650, 650, 650,
};




void Menu_Functions()
{
	Window_Size(WINDOW_SIZE_X, WINDOW_SIZE_Y);
	check_options(Create_Menu(title, options_a, options_b, options_size, space));
}


void check_options(float option) {
	Console_Color(Color_Title());

	if (option == 1.0f) {
		Window_Size(window_size_x[0], window_size_y[0]);
		print_title(options_a[0] + options_b[0]); Console_Color(Color_Tutorial()); C1C1();
	}
	else if (option == 2.0f) {
		Window_Size(window_size_x[1], window_size_y[1]);
		print_title(options_a[1] + options_b[1]); Console_Color(Color_Tutorial()); C1C2();
	}

	cout << endl << endl; Pause();

	/*
	if (j_ == "1") {
		
	}
	else if (j_ == "2") {
		print_title(options_functions[2]); C1C2();
	}
	else if (j_ == "3") {
		print_title(options_functions[3]); C1C3();
	}
	else if (j_ == "4") {
		window_size(, );
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