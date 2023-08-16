#include "../h/System.h"

const int COLOR_GREEN = 10;
const int COLOR_WHITE = 15;
const int COLOR_GREY  =  8;

const char KEY_VALUE  ='0';

int fast_test() {
    HWND console_ = GetConsoleWindow();
    RECT r_;
    GetWindowRect(console_, &r_); //stores the console's current dimensions
    MoveWindow(console_, r_.left, r_.top, 260, 90, TRUE);

    Console_Color(COLOR_GREEN);

    //Console_Color();
    cout << "\n   " << KEY_VALUE;
    Console_Color(COLOR_WHITE);
    cout << " = ";
    Console_Color(COLOR_GREY);
    cout << "Last course chapter: ";
    Console_Color(COLOR_GREEN);
    char _ = '1';
    cin >> _;


    system("cls");
    if (_ == KEY_VALUE) {
        HWND console = GetConsoleWindow();
        RECT r;
        GetWindowRect(console, &r); //stores the console's current dimensions

        MoveWindow(console, r.left, r.top, 750, 600, TRUE);
        Console_Color();



        C3C11();

        return 0;
    }
    return 1;
}


int Ending() 
{
	try {
		string s = " - - - - - - - - - - - - - -- - ";
		cout << endl << endl << s << endl << endl;
		cout << "...END.";
		cin.get();

		system("cls");
		Console_Color(6);
		cout << endl << endl;
		Space(INTRO_OUTRO_SPACE);
		cout << "Program closing...";
		cin.get();

		cout << endl;
		Console_Color(30);


		return 0;
	}
	catch (int ex) {
		Error("System.cpp", "Ending()", ex);
		return -1;
	}
}