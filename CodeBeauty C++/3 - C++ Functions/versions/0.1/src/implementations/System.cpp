#include "../headers/System.h"


void Error(string file, string function, int ex) {
	try {
		Console_Color(79);
		Space(space_error);
		cout << "ERROR!  file: " << file
			<< " - function: " << function
			<< "() - EX: " << ex << '.' << endl
			<< endl;
		Console_Color(15);
	}
	catch (int ex) {
		cout << "ERROR!  file: System.cpp - function: Error() - "
			<< ex << endl 
			<< endl;
	}
}
void Ending() 
{
	try {
		system("cls");
		Console_Color(6);
		cout << endl << endl;
		Space(intro_outro_space);
		cout << "Program closing...";
		cin.get();

		cout << endl;
		Console_Color(30);
	}
	catch (int ex) {
		Error("System.cpp", "Ending()", ex);
	}
}

void Title(string text) {
	try {
		Space(space_title);
		cout << text << endl;
		cout << endl;
	}
	catch (int ex) {
		Error("System.cpp", "Title(string)", ex);
	}
}
void Menu() {
	try {
		system("cls");
		cout << endl;
		Space(space_title);

		Title("Main menu");


		Space(space_input);
		cin.get();
	}
	catch (int ex) {
		Error("System.cpp", "Menu()", ex);
	}
}
void check_frame_conditions(int i, int j, int height, int width) {
	try {
		if (i == 0 || i == height- 1){
			if (j == 0 || j == width - 1) {
				cout << frame_corner;
			}
			else
			{
				cout << frame_horizontal;
			}
		}
		else {
			if (j == 0 || j == width - 1) {
				cout << frame_vertical;
			}
			else {
				//cout << frame_b;
				cout << " ";
			} 
		}
	}
	catch (int ex) {
		Error("System.cpp", "check_frame_conditions(int, int width)", ex);
	}
}
void frame(int height, int width) {
	try {
		for (int i = 0; i < height; i++)
		{
			Space(space_frame);
			for (int j = 0; j < width; j++)
			{
				check_frame_conditions(i , j, height, width);
			}
			cout << endl;
		}
	}
	catch (int ex) {
		Error("System.cpp", "frame(int, int)", ex);
	}
}