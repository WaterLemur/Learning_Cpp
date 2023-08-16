#include "../h/Commands.h"


void command_list() {
	cout << "THIS SHOULD PRINT THE LIST OF COMMANDS, BUT ITS NOT DOING IT!";
	cout << endl;
}

bool Check_Command(string command) {
	try { //hardcode
		if (command[0] != '/') {
			cout << "-" << command << "- is NOT a command!";
			return false;
		}

		if (command == "/test" ||
			command == "/info" ||
			command == "/frameoff" ||
			command == "/frameon") {
			positive_message("Command: --" + command + "-- used!");
		}
		if (command == "/test") {
			Test();
		}
		else if (command == "/info") {
			Info();
		}
		else if (command == "/frameoff") {
			//frame off
		}
		else if (command == "/frameon") {
			//frame on
		}
		else {
			cout << "Command: -" << command << "- NOT FOUND!";
			return false;
		}

		//cin.get();
		return true;
	}
	catch (int ex) {
		Error("System.cpp", "Check_Command(string)", ex);
	}
}
void Test() {
	try {
		Error("THIS IS A TEST ERROR", "THIS IS A TEST ERROR", 0);
		frame("TEST FRAME");
	}
	catch (int ex) {
		Error("System.cpp", "Test()", ex);
	}
}
void Info() {
	try {
		cout << "List of available commands:" << endl;
		cout << "/info" << endl;
		cout << "/test" << endl;
		cout << endl;
	}
	catch (int ex) {
		Error("System.cpp", "Info()", ex);
	}
}
void output_message(int color, string message) {
	try {
		Console_Color(175);
		Space(SPACE_MESSAGE);
		cout << message;
		cout << endl;
		Console_Color(15);
	}
	catch (int ex) {
		Error("System.cpp", "message()", ex);
	}
}
void positive_message(string message) {
	try {
		output_message(175, message);
	}
	catch (int ex) {
		Error("System.cpp", "positive_message(string)", ex);
	}
}
void warning_message(string message) {
	try
	{
		output_message(159, message);
	}
	catch (int ex) {
		Error("System.cpp", "warning_message(string)", ex);
	}
}