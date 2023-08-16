#include "../h/System.h"



int fast_test() {
    HWND console = GetConsoleWindow();
    RECT r;
    GetWindowRect(console, &r); //stores the console's current dimensions
    MoveWindow(console, r.left, r.top, 260, 90, TRUE);

    Console_Color(10);

    set_color();
    cout << "\n   0";
    set_color(15);
    cout << " = ";
    set_color(8);
    cout << "Last course chapter: ";
    set_color(10);
    char _ = '1';
    cin >> _;
    system("cls");
    if (_ == '0') {
        HWND console = GetConsoleWindow();
        RECT r;
        GetWindowRect(console, &r); //stores the console's current dimensions

        MoveWindow(console, r.left, r.top, 750, 600, TRUE);
        set_color();



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