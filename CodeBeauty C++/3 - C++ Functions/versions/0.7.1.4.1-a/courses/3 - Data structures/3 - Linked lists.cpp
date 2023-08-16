#include "../3 - Data structures.h"

#include <iostream>
using namespace std;


class Node {
public:
	int Value;
	Node* Next;
};

void printList(Node* n) {
	while (n != NULL) {
		cout << n->Value << endl;
		n = n->Next;
	}
}


void C3C3()
{
	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();

	head->Value = 1;
	head->Next = second;
	second->Value = 2;
	second->Next = third;
	third->Value = 3;
	third->Next = NULL;

	printList(head);


	system("pause>0");
}