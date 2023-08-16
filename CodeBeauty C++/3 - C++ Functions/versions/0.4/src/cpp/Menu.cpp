#include "../h/Menu.h"



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
		if (i == -858993460) {
			switch (i) {
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
	}
	catch (int ex) {
		Error("System.cpp", "Menu_1()", ex);
	}
}
void check_frame_conditions(int i, int j) {
	try {
		if (i == 0 || i == frame_height - 1) {
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
				check_frame_conditions(i, j);
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
		for (int i = 0; i < frame_width - 1; i++) {
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