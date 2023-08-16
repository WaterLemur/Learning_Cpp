#include "../h/System.h"



const int COLOR_DEFAULT = 7;




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