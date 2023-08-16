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


void Menu_Functions() 
{
	new_page();
	window_size(650, 350);


	//int i;
	//switch (starter_color) {
	//case 1:
	//	i = COLOR_R_MENU_FUNCTIONS();
	//	break;
	//case 2:
	//	i = COLOR_G_MENU_FUNCTIONS;
	//	break;
	//case 3:
	//	i = COLOR_B_MENU_FUNCTIONS;
	//	break;
	//}
	Console_Color(105);
	
	int tmp_color = 105;

	title("Course:Functions Menu");

	cout << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << options_functions[i] << endl;
	}
	cout << endl;


	string j;
	cin >> j;




	Console_Color(103);

	cout << endl;
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++";
	//cout << endl;


 if (j == "1") {
		window_size(650, 540);
		title(options_functions[1]); C1C1();
	}
	else if (j == "2") {
		window_size(650, 650);
		title(options_functions[2]); C1C2();
	}
	else if (j == "3") {
		window_size(200, 650);
		title(options_functions[3]); C1C3();
	}
	else if (j == "4") {
		window_size(650, 650);
		title(options_functions[4]); C1C4();
	}
	else if (j == "5") {
		title(options_functions[5]); C1C5();
	}
	else if (j == "5.1") {
		title(options_functions[6]); C1C51();
	}
	else if (j == "6") {
		title(options_functions[7]); C1C6();
	}
	else if (j == "6.1") {
		title(options_functions[8]); C1C61();
	}
	else if (j == "7") {
		title(options_functions[9]); C1C7();
	}
	else if (j == "8") {
		title(options_functions[10]); C1C8();
	}

	cin.get();


	cout << endl;
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++";
	cout << endl << endl;
	Console_Color(105);

	Console_Color(tmp_color);


	system("cls");
}