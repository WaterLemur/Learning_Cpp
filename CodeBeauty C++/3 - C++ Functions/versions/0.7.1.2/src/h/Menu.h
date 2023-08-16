#pragma once
#include "Commands.h"
#include <string>

#include "../../courses/0 - Test/0 - Test chapter/CO0CH1 - Test chapter.h"

#include "MenuFunctions.h"
#include "MenuPointers.h"
#include "MenuDataStructures.h"

//#include "MenuVariables.h"


int Menu_Course();

void first_menu();
void print_menu(const string* OPTIONS[]);
int check_user_input();

