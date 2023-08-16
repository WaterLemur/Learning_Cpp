#include "../h/MenuDefault.h"



const int space_title = 3;
const int space_menu = 7;
const int space_input = 2;

const int color_title = 7;
const int color_tutorial = 8;


const int color_r_menu_main = 4;
const int color_r_menu_course = 6;
const int color_r_menu_functions = 14;


const int color_g_menu_main = 10;
const int color_g_menu_course = 2;
const int color_g_menu_functions = 11;


const int color_b_menu_main = 1;
const int color_b_menu_course = 3;
const int color_b_menu_functions = 11;


//color functions: red
//color pointers: gree
//color data structures: blue

const int color_information = 7;
const int color_error = 7;
const int color_system = 223;


int menu_iterations = 0;

int starter_color = 0;


const string input_symbol_a = "=>";
const string input_symbol_c = "-=>";
string input_symbol = input_symbol_a;


const int color_user_input = 31;
const int color_input_symbol = 25; // 27 30 25


const int options_menu_size = 4;
const string options_menu_a[options_menu_size] = {
	{"C."},
	{"/."},
	{"-."},
	{"0."},
};
const string options_menu_b[options_menu_size] = {
	{"CLOSE"},
	{"List of commands"},
	{"Main menu"},
	{"Return"},
};

const string format_string = " - - - - - - - - - - - - - - - - ";
const string format_string_2 = "+++++++++++++++++++++++++++++++++++++++++++++++";



//int OPTIONS_MENU_SIZE() {
//	return options_menu_size;
//}
//const string* OPTIONS_MENU_A() {
//	return options_menu_a;
//}
//const string* OPTIONS_MENU_B() {
//	return options_menu_b;
//}

int Starter_Color() {
	return starter_color;
}


void Input_Error() {

}
const string message_error_input = "User input is NOT valid!";



void Window_Size(int width, int height) {
	try {
		HWND console_ = GetConsoleWindow();
		RECT r_;

		GetWindowRect(console_, &r_); //stores the console's current dimensions
		MoveWindow(console_, r_.left, r_.top, width, height, TRUE);
	}
	catch (int ex) {
		Error("Menu.cpp", "Window_Size(int, int)", ex);
	}
}

void random_color() {
	srand((unsigned int)time(NULL));
	starter_color = rand() % 3 + 1;
}




int Create_Menu(bool main_menu, const string title, const string menu_a[], 
	const string menu_b[], int array_size, string space) {

	bool continue_ = false;
	int option_ = -1;


	while (!continue_) {
		//window_size(270, 500);
		new_page();
		first_menu();
		print_title(title);
		Print_Menu(main_menu, glue_menu(menu_a, menu_b, array_size), array_size, space);
		custom_input();
		//continue_ = Check_Command(check_options(Get_User_Input()));
		continue_ = check_option(option_, menu_a, array_size, Check_Command(get_user_input()));
	}
	return option_;
}

string* glue_menu(const string menu_a[], const string menu_b[], int array_size) {
	string* menu_full_ = new string[array_size]{};
	for (int i = 0; i < array_size; i++)
	{
		menu_full_[i] = menu_a[i] + menu_b[i];
	}
	return menu_full_;
}

bool check_option(int& option_, const string options[], int size, string user_input) {
	for (int i = 0; i < size; i++)
	{
		if (user_input[0] == options[i][0]) {
			option_ = stoi(user_input);
			return true;
		}
	}
	return false;
}

void Print_Menu(bool main_menu, string menu_ab[], int size, string space) {
	print_lines(main_menu, menu_ab, size, space);
}

void print_lines(bool main_menu, const string menu_ab[], int SIZE, string space) {

	print_default_options(main_menu, options_menu_a, options_menu_b, options_menu_size, space);
	print_custom_options(menu_ab, SIZE);

	cout << endl;
}

void first_menu() {
	int i_ = 0;
	random_color();
	switch (starter_color) {
	case 1: i_ = color_r_menu_main; break;
	case 2: i_ = color_g_menu_main; break;
	case 3: i_ = color_b_menu_main; break;
	}
	Console_Color(i_);
}

void new_page() {
	system("cls");
	format();

	cout << endl;
	Space(space_title);
}
void format() {
	cout << format_string << endl;
	cout << endl;
}

void print_title(string text) {
	system("cls");
	menu_iterations++;
	cout << endl;
	Space(space_title);
	cout << '[' << menu_iterations << "] - ";
	cout << text << endl;
	cout << endl;
}


void print_default_options(bool main_menu, const string menu_a[],  const string menu_b[], int menu_size, string menu_space) {
	if (main_menu) menu_size -= 2;
	
	for (int i = 0; i < menu_size; i++)
	{
		Space(space_menu); cout << menu_a[i] << menu_space << menu_b[i] << endl;
	}
	cout << endl;
}

void print_custom_options(const string menu[], int size) {
	for (int i = 0; i < size; i++)
	{
		Space(space_menu); cout << *(menu + i) << endl;
	}
	cout << endl;
}

void End_Menu() {
	cout << endl;
	cout << format_string_2 << endl;;
	cout << endl;
	Console_Color(color_tutorial);

	Pause();
}








void custom_input() {
	Console_Color(color_input_symbol);
	cout << input_symbol;
	Console_Color(color_user_input);

	Space(space_input);
}
string get_user_input() {
	string input_;
	cin >> input_;

	return input_;
}


bool Check_Default_Input(char input) {
	if (input == options_menu_a[0][0]) {//                 /. Commands
		//list of commands
		return true;
	}
	else if (toupper(input) == options_menu_a[1][0]) {//   C. CLOSE
		Close();
		return true;
	}
	else return false;
}


void Pause() {
	Console_Color(color_system);


#ifdef _WIN32
	system("pause");
	return;
#endif
	system("read");


	Console_Color();
}


string Format_String_2(){
	return format_string_2;
}

int Color_Title() {
	return color_title;
}
int Color_Tutorial() {
	return color_tutorial;
}