#include "src/headers/System.h"
#include "src/headers/Intro.h"

using std::string;


string company = "Infinity Ga8es";
float version = 0.1;

int main()
{
	try {
        Intro();

        Menu();

        Ending();


        return 0;
    }
    catch (int ex) {
        return ex;
    }
}