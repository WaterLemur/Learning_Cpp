#include "../h/System.h"

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

#pragma endregion Frame


#pragma region console commands


#pragma endregion console commands
