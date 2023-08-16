#pragma once
#include "System.h"

#include <chrono>
#include <thread>



using std::this_thread::sleep_until;
using std::chrono::system_clock;
using std::chrono::seconds;



void Intro();


void ascii_space(int size);
void ascii_color(int i);
void ascii_white();
void print_ascii();

void check_char(char c);
void generate_char(int i);