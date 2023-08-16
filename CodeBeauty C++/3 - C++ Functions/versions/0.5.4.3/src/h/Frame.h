#pragma once
#include "Default.h"


const int FRAME_HEIGHT = 3;
const int FRAME_WIDTH = 6;

const char CHAR_CORNER = '+';
const char CHAR_HORIZONTAL = '-';
const char CHAR_VERTICAL = '|';


void check_frame_conditions(int i, int j);
void horizontal_frame();
void vertical_frame();
void frame(string text);