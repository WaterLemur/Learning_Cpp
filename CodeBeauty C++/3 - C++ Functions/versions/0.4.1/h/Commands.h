#pragma once
#include "Default.h"
#include "Frame.h"


const int SPACE_MESSAGE = 6;


const char* commands[10] = {
	{"01"},

	{"close"},
	{"info"},
	{"test"},

	{"frameon"},
	{"frameoff"},

	{"coloroff"},
	{"coloron"},

	{"menu1"},
	{"menu2"},
};



void command_list();
bool Check_Command(string command);

void Test();
void Info();

void output_message(int color, string message);
void positive_message(string message);
void warning_message(string message);