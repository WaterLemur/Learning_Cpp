#pragma once
#include "Frame.h"


const int SPACE_MESSAGE = 1;


void command_list(int SPACE);
bool Check_Command(string input);

void output_message(int color, string message);
void warning_message(string message);
void information_message(string message);
void command_message(string command);
void error_message(string message);

void close();
void test();
void info();

void colorOff();
void colorOn();