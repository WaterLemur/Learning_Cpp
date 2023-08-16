#include "../h/Commands.h"

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

void output_message(int color, string message) {
	try {
		Console_Color(175);
		Space(space_message);
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

void command_list() {
	cout << "THIS SHOULD PRINT THE LIST OF COMMANDS, BUT ITS NOT DOING IT!";
	cout << endl;
}