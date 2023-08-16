#include "../h/MenuDefault.h"



void window_size(int width, int height) {
	try {
		HWND console = GetConsoleWindow();
		RECT r;
		GetWindowRect(console, &r); //stores the console's current dimensions

		MoveWindow(console, r.left, r.top, width, height, TRUE);
	}
	catch (int ex) {
		Error("Menu.cpp", "window_size(int, int)", ex);
	}
}

void random_color(int starter_color) {
	int color = 0;
	srand((unsigned int)time(NULL));
	starter_color = rand() % 3 + 1;
}
void set_color(int COLOR) {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, COLOR);
}
void new_page(int SPACE_TITLE) {
	system("cls");
	format();

	cout << endl;
	Space(SPACE_TITLE);
}
void format() {
	string s = " - - - - - - - - - - - - - -- - ";
	cout << s << endl << endl;
}

void Title(string text, int SPACE_TITLE, int menu_iterations) {
	cout << endl;
	Space(SPACE_TITLE);

	Space(SPACE_TITLE);
	cout << '[' << menu_iterations << "] -";
	cout << text << endl;
	cout << endl;
	menu_iterations++;
}


int course_ending() {
	cout << "0. Previous menu" << endl;
	cout << "1. Close" << endl;
	cout << endl;

	string j;
	cin >> j;

	if (j == "0") return 0;
	else if (j == "1") return 1;
	else return -1;
}