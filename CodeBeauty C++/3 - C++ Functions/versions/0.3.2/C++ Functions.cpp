#include "src/headers/System.h"
#include "src/headers/Intro.h"

using std::string;


string company = "Infinity Ga8es";
float version = 0.3f;

int main()
{
	try {
        Intro();

        int iterations_menu_1 = 1;
        system("cls");
        int answer;
        do {
            answer = Menu_1(iterations_menu_1);
            iterations_menu_1++;
        } while (answer != 2);
        if (answer == 3) {
            Ending();
            return 0;
        }
        Ending();


        return 0;
    }
    catch (int ex) {
        return ex;
    }
}