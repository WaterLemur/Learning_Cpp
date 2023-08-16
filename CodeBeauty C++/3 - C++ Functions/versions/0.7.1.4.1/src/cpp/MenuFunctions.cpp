#include "../h/MenuFunctions.h"


const int options_functions_size = 11;
const string options_functions[options_functions_size] = {
	{"  "},
	{"FUNCTIONS MENU"},
	 
	{"1.  What are functions?"},
	{"2.  What is function parameter/argument (multiple, default)"},
	{"3.  Functions return statement, How to check prime number"},
	{"4.  What is function overloading?"},
	{"5.  How to build an ATM application in C++? (For beginners)"},
	{"5.1 Activity - ATM Users"},
	{"6.  What is recursion? Learn recursive functions!"},
	{"7.  What are generic functions and templates?"},
	{"8.  Lambda expressions in modern C++ (in depth step by step tutorial)"},
};


void def() {
	new_page();
	window_size(650, 350);

	//Console_Color(105);
	//title("Course:");
	cout << endl;
	Print_Menu(options_functions, options_functions_size);
}


void Menu_Functions() 
{
	string j_;
	int tmp_color_ = 105;
	cin >> j_;



	def();


	Console_Color(103);

	cout << endl;
	cout << Format_String_2();
	//cout << endl;


 if (j_ == "1") {
		window_size(650, 540);
		title(options_functions[1]); C1C1();
	}
	else if (j_ == "2") {
		window_size(650, 650);
		title(options_functions[2]); C1C2();
	}
	else if (j_ == "3") {
		window_size(200, 650);
		title(options_functions[3]); C1C3();
	}
	else if (j_ == "4") {
		window_size(650, 650);
		title(options_functions[4]); C1C4();
	}
	else if (j_ == "5") {
		title(options_functions[5]); C1C5();
	}
	else if (j_ == "5.1") {
		title(options_functions[6]); C1C51();
	}
	else if (j_ == "6") {
		title(options_functions[7]); C1C6();
	}
	else if (j_ == "6.1") {
		title(options_functions[8]); C1C61();
	}
	else if (j_ == "7") {
		title(options_functions[9]); C1C7();
	}
	else if (j_ == "8") {
		title(options_functions[10]); C1C8();
	}

	cin.get();


	cout << endl;
	cout << Format_String_2();
	cout << endl << endl;
	Console_Color(105);

	Console_Color(tmp_color_);


	system("cls");
}