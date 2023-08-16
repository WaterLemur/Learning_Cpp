#include "../h/System.h"



const int COLOR_DEFAULT = 7;
const int COLOR_LAST_MESSAGE = 96;

const int COLOR_GREEN = 10;
const int COLOR_WHITE = 15;
const int COLOR_GREY  =  8;

const char KEY_VALUE  ='0';



const int SIZE_FAST_TEST_X = 260;
const int SIZE_FAST_TEST_Y = 90;

const int SIZE_LAST_COURSE_X = 750;
const int SIZE_LAST_COURSE_Y = 600;



int fast_test() {
    window_size(SIZE_FAST_TEST_X, SIZE_FAST_TEST_Y);


    Console_Color(COLOR_GREEN);
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
        window_size(SIZE_LAST_COURSE_X, SIZE_LAST_COURSE_Y);
        Console_Color();



        C3C11();

        Ending();


        return 0;
    }
    return 1;
}


int Ending() 
{
	try {
		string s = " - - - - - - - - - - - - - - - - ";

		window_size(700, 460);


		//system("cls");
		cout << endl;
        ending_message("Program clossing...");
		Console_Color(COLOR_DEFAULT);


		exit(0);
	}
	catch (int ex) {
		Error("System.cpp", "Ending()", ex);
		return -1;
	}
}