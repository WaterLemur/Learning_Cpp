#pragma once
#include <windows.h>
#include <iostream>

using std::cout;
using std::cin;

using std::endl;
using std::string;


const int SPACE_ERROR = 3;


void Error(string file, string function, int ex);
void Space(int size);
void Console_Color(int index);