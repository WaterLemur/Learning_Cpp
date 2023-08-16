#include "../2 - Pointers.h"

#include <iostream>
using namespace std;


void printNumber(int* numberPtr) {
	cout << *numberPtr << endl;
}
void printLetter(char* charPtr) {
	cout << *charPtr << endl;
}
void print(void* ptr, char type) {
	switch (type) {
	case'i':cout << *((int*)ptr) << endl; break;
	case'c':cout << *((char*)ptr) << endl; break;
	}
}

void C2C2()
{
	int number = 5;
	char letter = 'a';
	//printNumber(&number);
	//printLetter(&letter);
	print(&number, 'i');
	print(&letter, 'c');


	system("pause>0");
}