#pragma once
#include "Frame.h"

#include "MenuDefault.h"


const int SPACE_MESSAGE = 1;
const int SPACE_COMMANDS = 1;



bool Check_Command(string input);


void invalid_input(string input);


void output_message(int color, string message);

void system_message(string message);
void information_message(string message);
void command_message(string command, bool c);
void ending_message(string message);

void command_list(int SPACE);

void c01();

void Close();
void info();
void test();


void colorOff();
void colorOn();