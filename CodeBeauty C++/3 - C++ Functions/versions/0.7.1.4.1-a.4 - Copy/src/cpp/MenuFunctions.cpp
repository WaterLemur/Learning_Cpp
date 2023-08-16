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
	while (true) {
		Window_Size(WINDOW_SIZE_X, WINDOW_SIZE_Y);
		check_options(Create_Menu(false, title, options_a, options_b, options_size, space));
	}
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
	else if (option == 3.0f) {
		Window_Size(window_size_x[2], window_size_y[2]);
		print_title(options_a[2] + options_b[2]); Console_Color(Color_Tutorial()); C1C3();
	}
	else if (option == 4.0f) {
		Window_Size(window_size_x[3], window_size_y[3]);
		print_title(options_a[3] + options_b[3]); Console_Color(Color_Tutorial()); C1C4();
	}
	else if (option == 5.0f) {
		Window_Size(window_size_x[4], window_size_y[4]);
		print_title(options_a[4] + options_b[4]); Console_Color(Color_Tutorial()); C1C5();
	}
	else if (option == 5.1f) {
		Window_Size(window_size_x[5], window_size_y[5]);
		print_title(options_a[5] + options_b[5]); Console_Color(Color_Tutorial()); C1C51();
	}
	else if (option == 6.0f) {
		Window_Size(window_size_x[6], window_size_y[6]);
		print_title(options_a[6] + options_b[6]); Console_Color(Color_Tutorial()); C1C6();
	}
	else if (option == 6.1f) {
		Window_Size(window_size_x[7], window_size_y[7]);
		print_title(options_a[7] + options_b[7]); Console_Color(Color_Tutorial()); C1C61();
	}
	else if (option == 7.0f) {
		Window_Size(window_size_x[8], window_size_y[8]);
		print_title(options_a[8] + options_b[8]); Console_Color(Color_Tutorial()); C1C7();
	}
	else if (option == 8.0f) {
		Window_Size(window_size_x[9], window_size_y[9]);
		print_title(options_a[9] + options_b[9]); Console_Color(Color_Tutorial()); C1C8();
	}
	else {
		//error message
		cout << "[NOT VALID]";
	}
	cout << endl << endl; Pause();
	/*
	if (j_ == "1") {
		
	}
	}*/
}