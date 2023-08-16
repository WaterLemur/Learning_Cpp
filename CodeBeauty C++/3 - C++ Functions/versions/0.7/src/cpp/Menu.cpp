#include "../h/Menu.h"

int starter_color;
int menu_iterations = 1;

string options_menu[3] = {
	{"/commands = List of commands"},
	{"/commands = List of commands"},
	{"/commands = List of commands"}
};
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
string options_dataStructures[13] = {
	{" 0.  RETURN"},
	{" 1.  DATA STRUCTURES Explained in 5 minutes! (for beginners) - Introduction to Data Structures"},
	{" 2.  DATA STRUCTURES - How to work with arrays? (for beginners) - Arrays explained in 30 minutes!"},
	{" 3.  Introduction to Linked Lists, Arrays vs Linked Lists, Advantages/Disadvantages - C++ Data Structures"},
	{" 4.  How to insert a new node in a linked list in C++? (at the front, at the end, after a given node)"},
	{" 5.  What is STACK data structure in C++? What is LIFO? STL Stack explained in 14 mins! DATA STRUCTURES"},
	{" 6.  Queue and FIFO/FCFS explained in 10 minutes + a bonus task 📣📣 (Data Structures course)"},
	{" 6.1 Activity - Queue schedule"},
	{" 7.  Map in C++ with practical examples - step by step Data Structures tutorial"},
	{" 8.  Doubly Linked Lists detailed explanation for beginners (C++ Data Structures course)"},
	{" 9.  Tree data structure - types of trees, examples, code and uses in programming"},
	{"10.  Tree traversal algorithms (BFS and DFS - Preorder, Inorder, Postorder)"},
	{"11.  STL vector (Relationship between Static array, Dynamic array and STL vector) with examples"},
};


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
void random_color() {
	int color = 0;
	srand((unsigned int)time(NULL));
	starter_color = rand() % 3 + 1;
}
void set_color(int COLOR) {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, COLOR);
}
void new_page() {
	system("cls");
	format();

	cout << endl;
	Space(SPACE_TITLE);
}
void format() {
	string s = " - - - - - - - - - - - - - -- - ";
	cout << s << endl << endl;
}

void Title(string text) {
	cout << endl;
	Space(SPACE_TITLE);

	Space(SPACE_TITLE);
	cout << '[' << menu_iterations << "] -";
	cout << text << endl;
	cout << endl;
	menu_iterations++;
}


int Menu_Main() {
	try {
		/*format();

		cout << endl;
		Space(SPACE_TITLE);
		*/
		random_color();
		int i;
		switch (starter_color) {
		case 1:
			i = COLOR_R_MENU_MAIN;
			break;
		case 2:
			i = COLOR_G_MENU_MAIN;
			break;
		case 3:
			i = COLOR_B_MENU_MAIN;
			break;
		}
		set_color(i);

		window_size(250, 300);
		new_page();
		Title("Main menu");

		cout << "0. List of commands" << endl;
		cout << endl;
		cout << "1. Loop menu again" << endl;
		cout << "2. Continue" << endl;
		cout << "3. Close application" << endl;
		cout << endl;

		string s;
		cin >> s;
		if (Check_Command(s)) {
			return 1;
		}
		Space(SPACE_INPUT);
		int number;
		number = stoi(s);
		if (number == -858993460) {
			switch (number) {
			case 0:
				command_list();
				break;
			case 1:
				return 1;
			case 2:
				return 2;
			case 3:
				return 3;
			}
		}
		switch (number) {
		default:
			return 1;
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case3:
			return 3;
		}

		format();
		return 1;
	}
	catch (int ex) {
		Error("Menu.cpp", "Menu_Main(int iterations)", ex);
		return 1;
	}
}
int Menu_Course() {
	try {
		new_page();
		int i;
		switch (starter_color) {
		case 1:
			i = COLOR_R_MENU_COURSE;
			break;
		case 2:
			i = COLOR_G_MENU_COURSE;
			break;
		case 3:
			i = COLOR_B_MENU_COURSE;
			break;
		}
		set_color(i);
		Title("Course Menu");

		cout << "0. List of commands" << endl;
		cout << endl;
		cout << "1. Functions" << endl;
		cout << "2. Pointers" << endl;
		cout << "3. Data structures" << endl;
		cout << endl;

		int j;
		cin >> j;



		window_size(500, 300);
		switch (j) {
		default:
			//default
			break;
		case 0:
			command_list();
			break;
		case 1:
			int r;
			do {
				r = menu_functions();
			} while (r == 0);
			
			break;
		case 2:
			// pointers
			break;
		case 3:
			// data structs
			break;
		}

		Title("Menu 2");
		test_01_noName();

		format();
		return 2;
	}
	catch (int ex) {
		Error("Menu.cpp", "Menu_Course()", ex);
		return 1;
	}
}
int menu_functions() {
	new_page();
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

	Title("Course:Functions Menu");

	cout << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << options_pointers[i] << endl;
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
		Title(options_functions[1]); C1C1();
	}
	else if (j == "2") {
		window_size(650, 650);
		Title(options_functions[2]); C1C2();
	}
	else if (j == "3") {
		window_size(200, 650);
		Title(options_functions[3]); C1C3();
	}
	else if (j == "4") {
		window_size(650, 650);
		Title(options_functions[4]); C1C4();
	}
	else if (j == "5") {
		Title(options_functions[5]); C1C5();
	}
	else if (j == "5.1") {
		Title(options_functions[6]); C1C51();
	}
	else if (j == "6") {
		Title(options_functions[7]); C1C6();
	}
	else if (j == "6.1") {
		Title(options_functions[8]); C1C61();
	}
	else if (j == "7") {
		Title(options_functions[9]); C1C7();
	}
	else if (j == "8") {
		Title(options_functions[10]); C1C8();
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

int Menu_Pointers() {
	new_page();
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

	Title("Course:Pointers Menu");

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
		Title(options_pointers[1]); C2C1();
	}
	else if (j == "2") {
		Title(options_pointers[2]); C2C2();
	}
	else if (j == "3") {
		Title(options_pointers[3]); C2C3();
	}
	else if (j == "4") {
		Title(options_pointers[4]); C2C4();
	}
	else if (j == "5") {
		Title(options_pointers[5]); C2C5();
	}
	else if (j == "6") {
		Title(options_pointers[6]); C2C6();
	}
	else if (j == "7") {
		Title(options_pointers[7]); C2C7();
	}
	else if (j == "8") {
		Title(options_pointers[8]); C2C8();
	}
	else if (j == "9") {
		Title(options_pointers[9]); C2C9();
	}


	cout << endl;
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++";
	cout << endl << endl;
	set_color(COLOR_TUTORIAL);

	cin.get();
}

int Menu_Data_Structures() {
	new_page();
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

	Title("Course:Pointers Menu");

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
		Title(options_dataStructures[1]); C3C1();
	}									   
	else if (j == "2") {				   
		Title(options_dataStructures[2]); C3C2();
	}									   
	else if (j == "3") {				   
		Title(options_dataStructures[3]); C3C3();
	}									   
	else if (j == "4") {				   
		Title(options_dataStructures[4]); C3C4();
	}									   
	else if (j == "5") {				   
		Title(options_dataStructures[5]); C3C5();
	}									   
	else if (j == "6") {				   
		Title(options_dataStructures[6]); C3C6();
	}	
	else if (j == "6.1") {
		Title(options_dataStructures[7]); C3C61();
	}
	else if (j == "7") {				   
		Title(options_dataStructures[8]); C3C7();
	}									   
	else if (j == "8") {				   
		Title(options_dataStructures[9]); C3C8();
	}									   
	else if (j == "9") {				   
		Title(options_dataStructures[10]); C3C9();
	}
	else if (j == "10") {
		Title(options_dataStructures[11]); C3C10();
	}
	else if (j == "11") {
		Title(options_dataStructures[12]); C3C11();
	}




	cout << endl;
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++";
	cout << endl << endl;
	set_color(COLOR_TUTORIAL);

	cin.get();
}