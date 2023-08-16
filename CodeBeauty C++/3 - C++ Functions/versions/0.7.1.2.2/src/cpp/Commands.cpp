#include "../h/Commands.h"


const string commands[6] = {
	{"01"},

	{"close"},
	{"info"},
	{"test"},

	{"coloroff"},
	{"coloron"},
};



void command_list(int SPACE) {
	int _index = 0;
	for (string _command : commands) {
		Space(SPACE); cout << '#' << _index << ".  /" + _command << endl;
		_index++;
	}cout << endl;
}

bool Check_Command(string input) {
	bool _gate = false;
	
	if (input[0] != '/') return false;

	for (string _command : commands) {
		if (input == '/' + _command) {
			command_message(input);
			_gate = true;
		}
	}
	if (!_gate) {
		cout << "command not found!" << endl; return false;
	}
	
	input.erase(0, 1);

	if (input == "01");

	else if (input == "close") close();
	else if (input == "info") info();
	else if (input == "test") test();

	else if (input == "coloroff") colorOff();
	else if (input == "coloron") colorOn();

	else {
		cout << "Command: -" << input << "- NOT FOUND!";
		return false;
	}
	
	//Console_Color(0);
	//cin;
	return true;
}


void output_message(int color, string message) {
	Console_Color(175);
	Space(SPACE_MESSAGE);
	cout << message;
	Console_Color(15);
	cout << endl;
}
void warning_message(string message) {
	output_message(253, message);
}
void information_message(string message) {
	output_message(175, message);
}
void command_message(string command) {
	Console_Color(175);
	Space(SPACE_MESSAGE);

	cout << "Command: --";
	Console_Color(31); cout << command;
	Console_Color(175); cout << "-- used!";

	Console_Color(15);
	cout << endl;
}
void error_message(string message) {
	output_message(159, message);
}




void close() {
	warning_message("Not implemented!");
}
void info() {
	cout << "by LemurWater" << endl;
	cout << "2023" << endl;
	cout << endl;
}
void test() {
	Error("THIS IS A TEST ERROR", "THIS IS A TEST ERROR", 0);
	frame("TEST FRAME");
}

void colorOff() {
	warning_message("Not implemented!");
}
void colorOn() {
	warning_message("Not implemented!");
}