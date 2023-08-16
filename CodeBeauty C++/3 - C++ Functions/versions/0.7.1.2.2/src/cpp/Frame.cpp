#include "../h/Frame.h"


void check_frame_conditions(int i, int j) {
	try {
		if (i == 0 || i == FRAME_HEIGHT - 1) {
			if (j == 0 || j == FRAME_WIDTH - 1) {
				cout << CHAR_CORNER;
			}
			else
			{
				cout << CHAR_HORIZONTAL;
			}
		}
		else {
			if (j == 0 || j == FRAME_WIDTH - 1) {
				cout << CHAR_VERTICAL;
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

void horizontal_frame() {
	try {
		for (int i = 0; i < FRAME_WIDTH - 1; i++) {
			if (i == 0 || i == FRAME_WIDTH - 1) {
				cout << CHAR_CORNER;
				return;
			}
			cout << CHAR_HORIZONTAL;
		}
		cout << endl;
	}
	catch (int ex) {
		Error("System.cpp", "horizontal_frame(int)", ex);
	}
}
void vertical_frame() {
	try {
		for (int i = 0; i < FRAME_WIDTH - 1; i++)
		{
			if (i == 0 || i == FRAME_WIDTH - 1) {
				cout << CHAR_VERTICAL;
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