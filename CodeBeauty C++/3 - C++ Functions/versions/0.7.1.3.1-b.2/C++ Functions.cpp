#include "C++ Functions.h"

int main()
{
	try {
        //Part 1
        if (0 == Fast_Test()) return 0;
        

        Intro();

        Menu_Course();

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