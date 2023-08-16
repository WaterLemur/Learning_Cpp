#include "../h/Default.h"


void Error(string file, string function, int ex) {
    try {
        Console_Color(79);
        Space(SPACE_ERROR);
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

void Space(int size) {
    try
    {
        for (int i = 0; i < size; i++)
        {
            cout << " ";
        }
    }
    catch (int ex) {
        Error("Default.cpp", "Space(int)", ex);
    }
}

void Console_Color(int color) {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, color);
}