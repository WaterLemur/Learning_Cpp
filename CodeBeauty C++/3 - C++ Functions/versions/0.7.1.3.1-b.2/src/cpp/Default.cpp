#include "../h/Default.h"



void Error(string file, string function, int ex) {
    Console_Color(79);
    Space(SPACE_ERROR);
    cout << "ERROR!  file: " << file
        << " - function: " << function
        << "() - EX: " << ex << '.' << endl
        << endl;
    Console_Color(15);
}

void Space(int size) {
    for (int i = 0; i < size; i++)
    {
        cout << " ";
    }
}

void Console_Color(int color) {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, color);
}


int Random_Number(int maxium) {
    srand((unsigned int)time(NULL));
    return rand() % maxium + 1;
}