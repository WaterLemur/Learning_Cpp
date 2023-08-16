#include "../h/MenuPointers.h"


const int WINDOW_SIZE_X = 300;
const int WINDOW_SIZE_Y = 500;

const int OPTIONS_POINTERS_SIZE = 10;

const string OPTIONS_POINTERS[OPTIONS_POINTERS_SIZE] = {
	{"POINTERS MENU"},

	{"1. Introduction to C++ pointers (for beginners)"},
	{"2. What is a void pointer? (for beginners)"},
	{"3. How to use pointers and arrays (for beginners)"},
	{"4. Return multiple values from a function using pointers?"},
	{"5. How to create/change arrays at runtime? (Dynamic arrays)"},
	{"6. What is a dynamic two-dimensional array?"},
	{"7. SMART POINTERS in C++ (for beginners in 20 minutes)"},
	{"8. Function Pointers for beginners! How and when to use Function Pointers?"},
	{"9. Function pointers, delegates and callbacks | Beginner friendly"},
};



void Menu_Pointers()
{
	bool continue_ = false;
	string option_;


	while (!continue_) {
		window_size(300, 500);


		option_ = New_Menu("Course:Pointers Menu", OPTIONS_POINTERS, OPTIONS_POINTERS_SIZE);
		check_options(option_);
		End_Menu();
	}
}


string check_options(string option) {
	if (option == "0") Close();


	else if (option == "1") {
		title(OPTIONS_POINTERS[1]); C2C1();
	}
	else if (option == "2") {
		title(OPTIONS_POINTERS[2]); C2C2();
	}
	else if (option == "3") {
		title(OPTIONS_POINTERS[3]); C2C3();
	}
	else if (option == "4") {
		title(OPTIONS_POINTERS[4]); C2C4();
	}
	else if (option == "5") {
		title(OPTIONS_POINTERS[5]); C2C5();
	}
	else if (option == "6") {
		title(OPTIONS_POINTERS[6]); C2C6();
	}
	else if (option == "7") {
		title(OPTIONS_POINTERS[7]); C2C7();
	}
	else if (option == "8") {
		title(OPTIONS_POINTERS[8]); C2C8();
	}
	else if (option == "9") {
		title(OPTIONS_POINTERS[9]); C2C9();
	}


	return option;
}