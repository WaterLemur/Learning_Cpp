#pragma once
#include "Frame.h"


const int SPACE_MESSAGE = 6;


void command_list();
bool Check_Command(string command);

void Test();
void Info();

void output_message(int color, string message);
void positive_message(string message);
void warning_message(string message);