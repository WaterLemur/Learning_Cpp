#include "Default.h"
#include <windows.h>

using std::string;


void Test_Color() {
	for (int i = 1; i < 16; i++)
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, i);
		cout << "Color index: [" << i << "]" << endl;
	}
}
void Set_Color() {
	try {
		srand(time(NULL));
		int color = rand() % 15 + 1;

		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, color);
	}
	catch (int ex) {

	}
}
void Set_Color(int i) {
	try {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, i);
	}
	catch(int ex){
	
	}
}

void Title(float number, string text){
	try{
		srand(time(NULL) - 1);
		int color1 = rand() % 15 + 0;
		srand(time(NULL) + 1);
		int color2 = rand() % 15 + 0;
		srand(time(NULL) + 6);
		int color3 = rand() % 15 + 0;
		srand(time(NULL) - 6);
		int color4 = rand() % 15 + 0;
		srand(time(NULL) - 8);
		int color5 = rand() % 15 + 0;

		Set_Color(color1); cout << "CodeBeauty";
		Set_Color(color2); cout << " - ";
		Set_Color(color3); cout << "C++ Object Oriented Programming" << endl;
		Set_Color(color4); cout << " " << number;
		Set_Color(color2); cout << " - ";
		Set_Color(color5); cout << text << endl << endl;
		Set_Color();
	}
	catch (int ex) {

	}
}
void Freeze_Console() {
	try {
		srand(time(NULL) - 10);
		int color = rand() % 15 + 0;
		Set_Color(color); cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
		int i;
		cin >> i;
	}
	catch (int ex) {

	}
}
void End_Program() {
	try {
		Freeze_Console();

		Set_Color();
		system("cls");
		cout << endl << "Program closing ...\n\n";
		cin.get();//string i; cin >> i;
	}
	catch (int ex) {

	}
}