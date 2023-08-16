#include "../h/MenuDefault.h"


const string INPUT_SYMBOL = "=>";

const int COLOR_USER_INPUT = 31;
const int COLOR_INPUT_SYMBOL = 25; // 27 30 25




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

void random_color(int &starter_color) {
	srand((unsigned int)time(NULL));
	starter_color = rand() % 3 + 1;
}

void new_page(int SPACE_TITLE) {
	system("cls");
	format();

	cout << endl;
	Space(SPACE_TITLE);
}
void format() {
	string _s = " - - - - - - - - - - - - - -- - ";

	cout << _s << endl << endl;
}

void title(string text, int SPACE_TITLE, int &menu_iterations) {
	menu_iterations++;
	cout << endl;
	Space(SPACE_TITLE);
	cout << '[' << menu_iterations << "] - ";
	cout << text << endl;
	cout << endl;
}


int course_ending() {
	string _j;

	cout << "0. Previous menu" << endl;
	cout << "1. Close" << endl;
	cout << endl;


	cin >> _j;

	if (_j == "0") return 0;
	else if (_j == "1") return 1;
	else return -1;
}


void print_lines(int i, int max_loops, const string OPTIONS[], const int SPACE) {
	for (i; i < max_loops; i++)
	{
		Space(SPACE); cout << *(OPTIONS + i) << endl;
	}
	cout << endl;
}
void Print_Menu(
	const int SPACE_TITLE, const int SPACE_MENU, int& menu_iterations,
	const string OPTIONS_MENU[], const int OPTIONS_MENU_SIZE,
	const string OPTIONS_COURSE[], const int OPTIONS_COURSE_SIZE) {
	new_page(SPACE_TITLE);


	title(*OPTIONS_COURSE, SPACE_TITLE, menu_iterations);

	print_lines(0, OPTIONS_MENU_SIZE, OPTIONS_MENU, SPACE_MENU);
	print_lines(1, OPTIONS_COURSE_SIZE, OPTIONS_COURSE, SPACE_MENU);

	cout << endl;
}


string check_user_input(int SPACE_INPUT) {
	string _input;
	int _number = -2147483648;

	Console_Color(COLOR_INPUT_SYMBOL);
	cout << INPUT_SYMBOL;
	Console_Color(COLOR_USER_INPUT);

	Space(SPACE_INPUT); cin >> _input;
	Console_Color(15);

	if (Check_Command(_input)) return "COMMAND";

	return _input;
}

void Pause() {
#ifdef _WIN32
	system("pause");
	return;
#endif
	

	system("read");
}