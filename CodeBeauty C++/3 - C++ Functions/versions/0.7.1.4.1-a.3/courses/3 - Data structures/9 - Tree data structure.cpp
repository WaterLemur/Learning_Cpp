#include "../3 - Data structures.h"

#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* left;
	Node* right;

};

Node* createNode(int data) {
	Node* newNode = new Node();
	newNode->data = data;
	newNode->left = newNode->right = nullptr;
	return newNode;
}

void Tree1() {
	Node* root = createNode(1);

	root->left = createNode(2);
	root->right = createNode(3);
	root->left->left = createNode(4);
}
void C3C9()
{
	//Level 1
	Node* root = createNode(1);
	//Level 2
	root->left = createNode(2);
	root->right = createNode(3);
	//Level 3
	root->left->left = createNode(4);
	root->left->right = createNode(5);

	root->right->left = createNode(6);
	root->right->right = createNode(7);
	//Level 4
	root->left->right->left = createNode(9);
	root->right->right->left = createNode(15);


	cin.get();
}