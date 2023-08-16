#pragma once
#include "Default.h"

using std::endl;
using std::string;

const int intro_outro_space = 10;

const int space_title = 3;
const int space_error = space_title;
const int space_input = space_title + 6;
const int space_frame = 6;

const char frame_corner = '+';
const char frame_horizontal = '-';
const char frame_vertical = '|';

void Error(string, string, int);
void Console_Color(int);
void Ending();
void Menu();
void frame(int height, int width);