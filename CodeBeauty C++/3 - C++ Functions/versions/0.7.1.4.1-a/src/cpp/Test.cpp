#include "../h/Test.h"



const int COLOR_LAST_MESSAGE = 96;

const int COLOR_RED = 4;
const int COLOR_GREEN = 10;
const int COLOR_BLUE = 1;

const int COLOR_WHITE = 15;
const int COLOR_GREY = 8;

const char KEY_VALUE = '0';



const int SIZE_FAST_TEST_X = 260;
const int SIZE_FAST_TEST_Y = 90;

const int SIZE_LAST_COURSE_X = 750;
const int SIZE_LAST_COURSE_Y = 600;



int Fast_Test() {
    window_size(SIZE_FAST_TEST_X, SIZE_FAST_TEST_Y);

    random_theme();


    char _ = '1';
    cin >> _;


    system("cls");
    if (_ == KEY_VALUE) {
        window_size(SIZE_LAST_COURSE_X, SIZE_LAST_COURSE_Y);
        Console_Color();



        C3C11();

        Ending();


        return 0;
    }
    return 1;
}


void random_theme() {
    int theme_ = Random_Number();


    switch (theme_) {
    case 1: green_theme(); break;
    case 2: random_element(); break;
    }
}

void green_theme() {
    Console_Color(COLOR_GREEN);
    cout << "\n   " << KEY_VALUE;
    Console_Color(COLOR_WHITE);
    cout << " = ";
    Console_Color(COLOR_GREY);
    cout << "Last course chapter: ";
    Console_Color(COLOR_GREEN);
}
void random_element() {
    int random_ = Random_Number();

    int color_;
    switch (random_) {
    case 1: color_ = COLOR_RED; break;
    case 2: color_ = COLOR_BLUE; break;
    }
    Console_Color(color_);
    cout << "\n   " << KEY_VALUE;
    Console_Color(COLOR_WHITE);
    cout << " = ";
    Console_Color(COLOR_GREY);
    cout << "Last course chapter: ";
    Console_Color(color_);
}