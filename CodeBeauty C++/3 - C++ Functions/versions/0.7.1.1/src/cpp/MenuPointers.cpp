#include "../h/MenuPointers.h"



string options_pointers[10] = {
	{"0. RETURN"},
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



int Menu_Pointers(
	int starter_color,
	int COLOR_R_MENU_FUNCTIONS,
	int COLOR_G_MENU_FUNCTIONS,
	int COLOR_B_MENU_FUNCTIONS,
	int COLOR_TUTORIAL,
	
	int SPACE_TITLE,
	int menu_iterations)
{
	new_page(SPACE_TITLE);
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

	Title("Course:Pointers Menu", SPACE_TITLE, menu_iterations);

	cout << "0. List of commands" << endl;
	cout << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << options_pointers[i] << endl;
	}
	cout << endl;

	string j;
	cin >> j;








	window_size(300, 500);
	set_color(COLOR_TUTORIAL);

	cout << endl;
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++";
	//cout << endl;

	if (j == "0") {
		return 0;
	}
	else if (j == "1") {
		Title(options_pointers[1], SPACE_TITLE, menu_iterations); C2C1();
	}
	else if (j == "2") {
		Title(options_pointers[2], SPACE_TITLE, menu_iterations); C2C2();
	}
	else if (j == "3") {
		Title(options_pointers[3], SPACE_TITLE, menu_iterations); C2C3();
	}
	else if (j == "4") {
		Title(options_pointers[4], SPACE_TITLE, menu_iterations); C2C4();
	}
	else if (j == "5") {
		Title(options_pointers[5], SPACE_TITLE, menu_iterations); C2C5();
	}
	else if (j == "6") {
		Title(options_pointers[6], SPACE_TITLE, menu_iterations); C2C6();
	}
	else if (j == "7") {
		Title(options_pointers[7], SPACE_TITLE, menu_iterations); C2C7();
	}
	else if (j == "8") {
		Title(options_pointers[8], SPACE_TITLE, menu_iterations); C2C8();
	}
	else if (j == "9") {
		Title(options_pointers[9], SPACE_TITLE, menu_iterations); C2C9();
	}


	cout << endl;
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++";
	cout << endl << endl;
	set_color(COLOR_TUTORIAL);

	cin.get();
}