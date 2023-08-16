#include "../h/Intro.h"

extern int seed = -42069;

void Intro() 
{
    try {
        window_size();
        print_ascii();
        continue_message();
    }
    catch (int ex) {
        Error("Intro.cpp", "Intro()", ex);
    }
}

void window_size() {
    try {
        HWND console = GetConsoleWindow();
        RECT r;
        GetWindowRect(console, &r); //stores the console's current dimensions

        MoveWindow(console, r.left, r.top, CONSOLE_WIDTH, console_height, TRUE);
    }
    catch (int ex) {
        Error("Intro.cpp", "window_size()", ex);
    }
}
void ascii_space(int size) {
    try {
        for (int i = 0; i < size; i++) {
            cout << endl;
        }
    }
    catch (int ex) {
        Error("Intro.cpp", "ascii_space(int)", ex);
    }
}
void ascii_color(int i) {
    try {
        int color = 0;
        do {
            srand((unsigned int)time(NULL));
            color = (rand() + i + color) % 15 + 1;
        } while (color == 7 || color == 15);

        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, color);
    }
    catch (int ex) {
        Error("Intro.cpp", "ascii_color(int)", ex);
    }
}
void ascii_white() {
    try {
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, COLOR_0);
    }
    catch (int ex) {
        Error("Intro.cpp", "ascii_white()", ex);
    }
}
void print_ascii() {
    try {
        ascii_space(3);
        for (int i = 0; i < ASCII_LENGTH; i++)
        {
            generate_char(i);
        }
        ascii_space(3);
    }
    catch (int ex) {
        Error("Intro.cpp", "print_ascii()", ex);
    }
}
void check_char(char c) {
    try {
        if (c == '1') {
            ascii_color(seed);
            seed++;
        }
        else {
            ascii_white();
        }
        cout << c;
    }
    catch (int ex) {
        Error("Intro.cpp", "check_char(char)", ex);
    }
}
void generate_char(int i) {
    try {
        for (char c : ASCII[i]) {
            check_char(c);
            seed++;
        }
        cout << endl;
    }
    catch (int ex) {
        Error("Intro.cpp", "generate_char(int)", ex);
    }
}

void continue_message() {
    try {
        Console_Color(6);
        Space(INTRO_OUTRO_SPACE);
        cout << "Press ";
        Console_Color(15);
        cout << "[";
        Console_Color(4);
        cout << "Enter";
        Console_Color(15);
        cout << "] ";
        Console_Color(6);
        cout << "to continue..." << endl;
        Space(INTRO_OUTRO_SPACE);

        cin.get();
    }
    catch (int ex) {
        Error("Intro.cpp", "continue_message()", ex);
    }
}