#include "../headers/Default.h"

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
void Console_Color(int index) {
    try {
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, index);
    }
    catch (int ex) {
        Error("Default.cpp", "Console_Color(int)", ex);
    }
}