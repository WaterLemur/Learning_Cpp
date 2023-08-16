#include "../3 - Data structures.h"

#include <iostream>
#include<queue>
using namespace std;


void printQueue(queue<int> queue) {
	while (!queue.empty()) {
		cout << queue.front() << " ";
		queue.pop();
	}
	cout << endl;
}
void C3C6()
{
	queue<int> myQueue;
	myQueue.push(1);
	myQueue.push(2);
	myQueue.push(3);
	

	cout << "Size is " << myQueue.size() << endl;
	cout << "First element is " << myQueue.front() << endl;
	cout << "Last element is " << myQueue.back() << endl;

	cout << "My queue: " << endl;
	printQueue(myQueue);


	system("pause>0");
}