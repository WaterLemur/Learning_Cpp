#include "System.h"
#include <iostream>
#include <windows.h>
#include <list>

using std::cout;
using std::endl;
using std::string;
using std::list;
using std::cin;

struct Answer;
struct Question;
void display_answers(list<Answer> answers);

string company = "Infinity Ga8es";
string version = "0.1-alpha";
list<Question> questions;



struct Question {
	string Text;
	list<Answer> Answers;
};
struct Answer {
	string text;
	bool correct;
};


void space(int amount) {
	for (int i = 0; i < amount; i++)
	{
		cout << " ";
	}
}
void random_color(int seed) {
	try {
		srand(time(NULL) + seed);
		int color = rand() % 15 + 0;

		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, color);
	}
	catch (int ex) {

	}
}

void intro() {
	try
	{
		random_color(0);
		cout << endl;
		space(1);
		cout << "Quiz App";

		random_color(1);
		cout << " v." << version;

		random_color(2);
		cout << " - " << company << "." << endl << endl;
	}
	catch (int ex) {

	}
}

bool load() {
	try {
		if (true) {//read file
			return true;
		}
		else {
			return false;
		}
	}
	catch (int ex) {

	}
}
void display_questions() {
	try {
		int index = 1;

		Answer ans;
		ans.text = "Ans text";
		ans.correct = true;
		Question que;
		que.Text = "Question text";
		que.Answers.push_back(ans);
		que.Answers.push_back(ans);
		que.Answers.push_back(ans);
		que.Answers.push_back(ans);
		questions.push_back(que);

		for (Question q : questions) {
			random_color(index + 2);
			bool repeat = false;

			do {
				space(3);
				cout << "#" << index << " - " << q.Text << "?" << endl;

				display_answers(q.Answers);
				space(5);
				cout << " Enter a letter: ";
				char guessed;
				cin >> guessed;

				list<bool> answer;
				for (Answer a : q.Answers) {
					bool b;
				}
				if ((int)guessed < 97 + q.Answers.size()) {
					repeat = false;
					if (guessed) {

					}
				}
				else
				{
					repeat = true;
				}
			} while (repeat);
		}
	}
	catch (int ex) {

	}
}
void display_answers(list<Answer> answers) {
	try {
		int index = 96;
		bool first_of_line = true;
		for (Answer a : answers) {
			index++;
			if (first_of_line) {
				space(8);
			}
			cout << char(index) << "). " << a.text;
			if (!first_of_line) {
				cout << endl;
				first_of_line = true;
			}
			else {
				space(3);
				cout << '|';
				space(3);
				first_of_line = false;
			}
		}
	}
	catch (int ex) {

	}
}