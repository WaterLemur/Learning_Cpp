#include "../h/MenuFunctions.h"



string options_functions[10] = {
	{"0.  RETURN"},
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


int Menu_Functions(
	int starter_color,
	int COLOR_R_MENU_FUNCTIONS,
	int COLOR_G_MENU_FUNCTIONS,
	int COLOR_B_MENU_FUNCTIONS,
	int COLOR_TUTORIAL,
	
	int SPACE_TITLE,
	int& menu_iterations) 
{
	new_page(SPACE_TITLE);
	window_size(650, 350);


	int i;
	switch (starter_color) {
	case 1:
		i = COLOR_R_MENU_FUNCTIONS;
		break;
	case 2:
		i = COLOR_G_MENU_FUNCTIONS;
		break;
	case 3:
		i = COLOR_B_MENU_FUNCTIONS;
		break;
	}
	set_color(i);
	int tmp_color = i;

	Title("Course:Functions Menu", SPACE_TITLE, menu_iterations);

	cout << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << options_functions[i] << endl;
	}
	cout << endl;


	string j;
	cin >> j;




	set_color(COLOR_TUTORIAL);

	cout << endl;
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++";
	//cout << endl;

	if (j == "0") {
		return 0;
	}
	else if (j == "1") {
		window_size(650, 540);
		Title(options_functions[1], SPACE_TITLE, menu_iterations); C1C1();
	}
	else if (j == "2") {
		window_size(650, 650);
		Title(options_functions[2], SPACE_TITLE, menu_iterations); C1C2();
	}
	else if (j == "3") {
		window_size(200, 650);
		Title(options_functions[3], SPACE_TITLE, menu_iterations); C1C3();
	}
	else if (j == "4") {
		window_size(650, 650);
		Title(options_functions[4], SPACE_TITLE, menu_iterations); C1C4();
	}
	else if (j == "5") {
		Title(options_functions[5], SPACE_TITLE, menu_iterations); C1C5();
	}
	else if (j == "5.1") {
		Title(options_functions[6], SPACE_TITLE, menu_iterations); C1C51();
	}
	else if (j == "6") {
		Title(options_functions[7], SPACE_TITLE, menu_iterations); C1C6();
	}
	else if (j == "6.1") {
		Title(options_functions[8], SPACE_TITLE, menu_iterations); C1C61();
	}
	else if (j == "7") {
		Title(options_functions[9], SPACE_TITLE, menu_iterations); C1C7();
	}
	else if (j == "8") {
		Title(options_functions[10], SPACE_TITLE, menu_iterations); C1C8();
	}

	cin.get();


	cout << endl;
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++";
	cout << endl << endl;
	set_color(COLOR_TUTORIAL);

	set_color(tmp_color);


	int r;
	do {
		r = course_ending();
	} while (r != 0);
	system("cls");
	return r;
}