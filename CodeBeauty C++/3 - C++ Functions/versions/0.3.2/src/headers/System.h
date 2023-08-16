#pragma once
#include "Default.h"

using std::endl;
using std::string;

const int intro_outro_space = 10;

const int space_title = 3;
const int space_error = space_title;
const int space_input = space_title + 6;
const int space_frame = 6;
const int space_message = 6;
const int space_text = 6;

const char char_corner = '+';
const char char_horizontal = '-';
const char char_vertical = '|';

const int frame_height = 3;
const int frame_width = 6;


void Error(string, string, int);
void Test();
void Info();

void Ending();

void Title(int iterations, string text);
int Menu_1(int iterations);
void check_frame_conditions(int i, int j);
void frame();
void horizontal_frame();
void vertical_frame();
void frame(string text);
bool Check_Command(string command);

void output_message(int color, string message);
void positive_message(string message);
void warning_message(string message);



void list_of_commands();