#include "../h/Commands.h"



const int COLOR_DEFAULT = 15;
const int COLOR_SYSTEM = 223;
const int COLOR_INFORMATION = 175;
const int COLOR_COMMAND = 31;
const int COLOR_ERROR = 70; //64
const int COLOR_ENDING = 110; //96

const string COMMAND_IDENTIFIER = "--";

const string commands[8] = {
	{"01"},

	{'/'},
	{"commands"},

	{"close"},
	{"info"},
	{"test"},

	{"coloroff"},
	{"coloron"},
};




bool Check_Command(string input) {
	bool gate_ = false;
	string og_input_ = input;


	if (input == "IS OPTION") return false;


	if (input == "/") {
		system_message("List of commands");
		command_message("/commands", false);
		command_list(SPACE_COMMANDS); return true;
	}

	//if (input[0] != '/') return false;


	for (string _command : commands) {
		if (input == '/' + _command) {
			if(input == '/' + commands[0]) command_message(input, true);
			else command_message(input, false);
			gate_ = true;
		}
	}


	input.erase(0, 1);


	if (input == "01") c01();

	else if (input == "commands") command_list(SPACE_COMMANDS);

	else if (input == "close") Close();
	else if (input == "info") info();
	else if (input == "test") test();

	else if (input == "coloroff") colorOff();
	else if (input == "coloron") colorOn();

	else {
		invalid_input(og_input_);
		//cout << "Command: -" << input << "- NOT FOUND!" << endl;
		return false;
	}
	/*
	if (!gate_) {
		cout << "command not found!" << endl; return false;
	}*/
	
	//Console_Color(0);
	//cin;


	return gate_;
}


void invalid_input(string wrong_input) {
	Console_Color(COLOR_ERROR); Space(SPACE_MESSAGE); cout << "User input: ";
	Console_Color(COLOR_COMMAND); cout << ' ' << wrong_input << ' ';
	Console_Color(COLOR_ERROR); cout << " is not valid! ";
}


void output_message(int color, string message) {
	Console_Color(color);
	Space(SPACE_MESSAGE); cout << message << ' ';
	Console_Color(15);

	cout << endl;
}

void system_message(string message) {
	output_message(COLOR_SYSTEM, message);
}
void information_message(string message) {
	output_message(COLOR_INFORMATION, message);
}
void command_message(string command, bool $C) {
	Console_Color(COLOR_INFORMATION);
	Space(SPACE_MESSAGE);

	cout << "Command: ";
	if (!$C) {
		Console_Color(COLOR_COMMAND);
	}
	else {
		Console_Color(COLOR_SYSTEM);
	}
	cout << COMMAND_IDENTIFIER << command << COMMAND_IDENTIFIER;

	Console_Color(COLOR_INFORMATION); cout << " used! ";

	Console_Color(COLOR_DEFAULT);
	cout << endl;
}
void ending_message(string message) {
	output_message(COLOR_ENDING, message);
}

void command_list(int SPACE) {
	int _index = 0;

	window_size(270, 480);

	for (string _command : commands) {
		if (_command != "01") {
			if (_command == "/") {
				Space(SPACE); cout << '#' << _index << ".  " + _command << endl;
			}
			else {
				Space(SPACE); cout << '#' << _index << ".  /" + _command << endl;
			}
			
			if (_index == 1 || _index == 4) cout << endl;
		}
		_index++;
	}//cout << endl;
}
void c01() {//                    Default: window_size(270, 320);
	window_size(270, 320);

	system_message("01");
	cout << endl;
}
void Close() {
	system_message("CLOSE");
	Ending();
}
void info() {
	window_size(320, 380); //window_size(270, 380);

	cout << "by LemurWater" << endl;
	cout << "2023" << endl;
	cout << endl;
	cout << endl;
	cout << "Codebeauty $C++ course" << endl;
	cout << "1. Functions" << endl;
	cout << "1. Pointers" << endl;
	cout << "1. Data structures" << endl;
	cout << endl;
	cout << "https://www.youtube.com/@CodeBeauty" << endl;

}
void test() {
	window_size(650, 380);

	Error("THIS IS A TEST ERROR", "THIS IS A TEST ERROR", 0);
	frame("TEST FRAME");
}

void colorOff() {
	window_size(270, 320);

	system_message("Not implemented!");
	//cout << endl;
}
void colorOn() {
	system_message("Not implemented!");
	//cout << endl;
}