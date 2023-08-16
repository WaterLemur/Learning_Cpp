#include "C++ Functions.h"

int main()
{
	try {
        //Part 1
        if (0 == fast_test()) {
            return 0;
        }
        Console_Color(15);

        Intro();
        system("cls");

        int answer;
        do {
            //answer = Menu_Main();
            answer = Menu_Course();
            if (answer == 3)  Ending();

        } while (answer != 1);

        cout << endl << endl;


        //Part 2
        system("cls");
        Menu_Course();
        
        cin.get();
        Ending();


        return 0;
    }
    catch (int ex) {
        return ex;
    }
}




