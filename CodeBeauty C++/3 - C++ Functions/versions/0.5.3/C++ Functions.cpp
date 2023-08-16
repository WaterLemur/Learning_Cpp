#include "C++ Functions.h"

int main()
{
	try {
        int _ = 0;
        cin >> _;
        if (_ == 0) {
            C1C4();

            return 0;
        }

        Intro();
        system("cls");

        int answer;
        do {
            answer = Menu_Main();

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