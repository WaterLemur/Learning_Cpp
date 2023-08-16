#include "C++ Functions.h"

int main()
{
	try {
        Intro();

        int iterations_menu_1 = 1;
        system("cls");
        int answer;
        do {
            answer = Menu_Main(iterations_menu_1);
            iterations_menu_1++;
        } while (answer != 2);
        if (answer == 3) {
            Ending();
            return 0;
        }
        cout << endl << endl;
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