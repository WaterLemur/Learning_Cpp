#include "C++ Functions.h"

int main()
{
	try {
        HWND console = GetConsoleWindow();
        RECT r;
        GetWindowRect(console, &r); //stores the console's current dimensions
        MoveWindow(console, r.left, r.top, 260, 90, TRUE);


        set_color(10);
        cout << "\n   0";
        set_color(15);
        cout << " = ";
        set_color(8);
        cout << "Last course chapter: ";
        set_color(10);
        int _ = 0;
        cin >> _;
        system("cls");
        if (_ == 0) {
            set_color();



            C3C11();

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