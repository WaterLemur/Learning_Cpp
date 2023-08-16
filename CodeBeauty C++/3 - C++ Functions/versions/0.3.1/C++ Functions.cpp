#include "src/headers/System.h"
#include "src/headers/Intro.h"

using std::string;


string company = "Infinity Ga8es";
float version = 0.3f;

int main()
{
	try {
        Intro();

        int iterations = 1;
        system("cls");
        int answer;
        do {
            answer = Menu(iterations);
            iterations++;
        } while (answer != 2);
        if (answer == 3) {
            cout << "NEEDED CLOSE METHOD";
            cout << endl;
        }
        Ending();


        return 0;
    }
    catch (int ex) {
        return ex;
    }
}