#include "../headers/System.h"

#include <string>

using std::to_string;


#pragma region Default
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
void Test() {
	try {
		Error("THIS IS A TEST ERROR", "THIS IS A TEST ERROR", 0);
		frame();
	}
	catch (int ex) {
		Error("System.cpp", "Test()", ex);
	}
}
void Info() {
	try {
		cout << "List of available commands:" << endl;
		cout << "/info" << endl;
		cout << "/test" << endl;
		cout << endl;
	}
	catch (int ex) {
		Error("System.cpp", "Info()", ex);
	}
}
#pragma endregion Default

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
#pragma region Frame
void Title(int iterations, string text) {
	try {
		Space(space_title);
		cout << '[' << iterations << "] -";
		cout << text << endl;
		cout << endl;
	}
	catch (int ex) {
		Error("System.cpp", "Title(string)", ex);
	}
}

int Menu_1(int iterations) {
	try {
		cout << endl;
		Space(space_title);

		Title(iterations, "Main menu");
		
		cout << "0. List of commands" << endl;
		cout << "1. Loop menu again" << endl;
		cout << "2. Continue" << endl;
		cout << "3. Close application" << endl;
		cout << endl;

		string s;
		cin >> s;
		if (Check_Command(s)) {
			return 1;
		}
		Space(space_input);
		int i;
		i = stoi(s);
		cout << "Debug: " << i;
		if(i == -858993460){
			switch (i) {
			case 0:
				list_of_commands();
				break;
			case 1:
				return 1;
			case 2:
				return 2;
			case 3:
				return 3;
			}
		}
	}
	catch (int ex) {
		Error("System.cpp", "Menu_1()", ex);
	}
}
void check_frame_conditions(int i, int j) {
	try {
		if (i == 0 || i == frame_height- 1){
			if (j == 0 || j == frame_width - 1) {
				cout << char_corner;
			}
			else
			{
				cout << char_horizontal;
			}
		}
		else {
			if (j == 0 || j == frame_width - 1) {
				cout << char_vertical;
			}
			else {
				//cout << frame_b;
				cout << " ";
			} 
		}
	}
	catch (int ex) {
		Error("System.cpp", "check_frame_conditions(int, int, int, int)", ex);
	}
}
void frame() {
	try {
		for (int i = 0; i < frame_height; i++)
		{
			Space(space_frame);
			for (int j = 0; j < frame_width; j++)
			{
				check_frame_conditions(i , j);
			}
			cout << endl;
		}
	}
	catch (int ex) {
		Error("System.cpp", "frame(int, int)", ex);
	}
}
void horizontal_frame() {
	try {
		for (int i = 0; i < frame_width - 1; i++){
			if (i == 0 || i == frame_width - 1) {
				cout << char_corner;
				return;
			}
			cout << char_horizontal;
		}
		cout << endl;
	}
	catch (int ex) {
		Error("System.cpp", "horizontal_frame(int)", ex);
	}
}
void vertical_frame() {
	try {
		for (int i = 0; i < frame_width - 1; i++)
		{
			if (i == 0 || i == frame_width - 1) {
				cout << char_vertical;
				break;
			}
			cout << " ";
		}
	}
	catch (int ex) {
		Error("System.cpp", "horizontal_frame(int)", ex);
	}
}
void frame(string text) {
	try {
		horizontal_frame();
		vertical_frame();
		vertical_frame();
		vertical_frame();
		horizontal_frame();
	}
	catch (int ex) {
		Error("System.cpp", "frame(int, int, string)", ex);
	}
}
#pragma endregion Frame


#pragma region console commands

bool Check_Command(string command) {
	try { //hardcode
		if (command[0] != '/') {
			cout << "-" << command << "- is NOT a command!";
			return false;
		}	
		
		if (command == "/test" ||
			command == "/info" ||
			command == "/frameoff" ||
			command == "/frameon") {
			positive_message("Command: --" + command + "-- used!");
		}
		if (command == "/test") {
			Test();
		}
		else if (command == "/info") {
			Info();
		}
		else if (command == "/frameoff") {
			//frame off
		}
		else if (command == "/frameon") {
			//frame on
		}
		else {
			cout << "Command: -" << command << "- NOT FOUND!";
			return false;
		}

		//cin.get();
		return true;
	}
	catch (int ex) {
		Error("System.cpp", "Check_Command(string)", ex);
	}
}

void output_message(int color, string message) {
	try {
		Console_Color(175);
		Space(space_message);
		cout << message;
		cout << endl;
		Console_Color(15);
	}
	catch (int ex) {
		Error("System.cpp", "message()", ex);
	}
}
void positive_message(string message) {
	try {
		output_message(175, message);
	}
	catch (int ex) {
		Error("System.cpp", "positive_message(string)", ex);
	}
}
void warning_message(string message) {
	try
	{
		output_message(159, message);
	}
	catch (int ex) {
		Error("System.cpp", "warning_message(string)", ex);
	}
}

void list_of_commands() {
	cout << "THIS SHOULD PRINT THE LIST OF COMMANDS, BUT ITS NOT DOING IT!";
	cout << endl;
}
#pragma endregion console commands
