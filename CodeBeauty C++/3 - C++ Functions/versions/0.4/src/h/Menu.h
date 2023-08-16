#pragma once
#include "Default.h"
#include <string>

using std::endl;
using std::string;

void Info();
void Title(int iterations, string text);
int Menu_1(int iterations);
void check_frame_conditions(int i, int j);
void frame();
void horizontal_frame();
void vertical_frame();
void frame(string text);