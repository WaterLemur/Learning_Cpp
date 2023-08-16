#include "../3 - Data structures.h"

#include <iostream>
#include <queue>

using std::cout;
using std::cin;
using std::endl;

using std::queue;
using std::string;


class Task {
public:
	int hour;
	int minutes;
	string description;

	Task(int Hour, int Minutes, string Description) {
		hour = Hour;
		minutes = Minutes;
		description = Description;
	}
};

void add_task(queue<Task> *schedule, Task task) {
	schedule->push(task);
}

void print_tasks(queue<Task> schedule) {
	int index = 1;
	if (schedule.empty()) {
		cout << "You've finished all your tasks!" << endl;
		return;
	}
	while (!schedule.empty()) {
		int h = schedule.front().hour;
		int m = schedule.front().minutes;
		string d = schedule.front().description;

		cout << "Task #" << index << ": "
			<< h << ":" << m << " - "
			<< d << endl;
		schedule.pop();
		index++;
	}
	cout << endl;
}

void complete_task(queue<Task>* schedule) {
	schedule->pop();
}

void C3C61()
{
	Task t1 = Task(7, 0, "Wake up");
	Task t2 = Task(14, 0, "Breakfast");
	Task t3 = Task(15, 0, "Wake Down/Sleep");


	queue<Task> schedule;

	add_task(&schedule, t1);
	add_task(&schedule, t2);
	add_task(&schedule, t3);


	print_tasks(schedule);
	complete_task(&schedule);
	print_tasks(schedule);
	complete_task(&schedule);
	print_tasks(schedule);
	complete_task(&schedule);
	print_tasks(schedule);


	system("pause>0");
}