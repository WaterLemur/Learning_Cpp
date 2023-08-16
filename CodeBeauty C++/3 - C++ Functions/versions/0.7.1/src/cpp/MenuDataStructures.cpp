#include "../h/MenuDataStructures.h"



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


int Menu_Data_Structures(
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

	Title("Course:Data Structures Menu", SPACE_TITLE, menu_iterations);

	cout << "0. List of commands" << endl;
	cout << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << options_dataStructures[i] << endl;
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
		Title(options_dataStructures[1], SPACE_TITLE, menu_iterations); C3C1();
	}
	else if (j == "2") {
		Title(options_dataStructures[2], SPACE_TITLE, menu_iterations); C3C2();
	}
	else if (j == "3") {
		Title(options_dataStructures[3], SPACE_TITLE, menu_iterations); C3C3();
	}
	else if (j == "4") {
		Title(options_dataStructures[4], SPACE_TITLE, menu_iterations); C3C4();
	}
	else if (j == "5") {
		Title(options_dataStructures[5], SPACE_TITLE, menu_iterations); C3C5();
	}
	else if (j == "6") {
		Title(options_dataStructures[6], SPACE_TITLE, menu_iterations); C3C6();
	}
	else if (j == "6.1") {
		Title(options_dataStructures[7], SPACE_TITLE, menu_iterations); C3C61();
	}
	else if (j == "7") {
		Title(options_dataStructures[8], SPACE_TITLE, menu_iterations); C3C7();
	}
	else if (j == "8") {
		Title(options_dataStructures[9], SPACE_TITLE, menu_iterations); C3C8();
	}
	else if (j == "9") {
		Title(options_dataStructures[10], SPACE_TITLE, menu_iterations); C3C9();
	}
	else if (j == "10") {
		Title(options_dataStructures[11], SPACE_TITLE, menu_iterations); C3C10();
	}
	else if (j == "11") {
		Title(options_dataStructures[12], SPACE_TITLE, menu_iterations); C3C11();
	}




	cout << endl;
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++";
	cout << endl << endl;
	set_color(COLOR_TUTORIAL);

	cin.get();
}