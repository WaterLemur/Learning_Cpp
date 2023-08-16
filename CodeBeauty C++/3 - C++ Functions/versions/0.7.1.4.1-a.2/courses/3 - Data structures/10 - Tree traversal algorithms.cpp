#include "../3 - Data structures.h"

#include <iostream>
using namespace std;



struct Node {
	int data;
	Node* left;
	Node* right;

};


void preorder(Node* root);
void inorder(Node* root);
void postorder(Node* root);


Node* createNode2(int data) {
	Node* newNode = new Node();
	newNode->data = data;
	newNode->left = newNode->right = nullptr;
	return newNode;
}

void Tree2() {
	Node* root = createNode2(1);

	root->left = createNode2(2);
	root->right = createNode2(3);
	root->left->left = createNode2(4);
}
void printTree(Node* root) {
	//preorder
	cout << "Preorder: " << endl;
	preorder(root);
	cout << endl;

	//inorder
	cout << "Inorder: " << endl;
	inorder(root);
	cout << endl;

	//postorder	
	cout << "Postorder: " << endl;
	postorder(root);
	cout << endl;
}
void preorder(Node* root) {
	if (root == nullptr)return;

	cout << root->data << endl;
	preorder(root->left);
	preorder(root->right);
}
void inorder(Node* root) {
	if (root == nullptr)return;

	inorder(root->left);
	cout << root->data << endl;
	inorder(root->right);
}
void postorder(Node* root) {
	if (root == nullptr)return;

	postorder(root->left);
	postorder(root->right);
	cout << root->data << endl;
}
void C3C10()
{
	//Level 1
	Node* root = createNode2(1);
	//Level 2
	root->left = createNode2(2);
	root->right = createNode2(3);
	//Level 3
	root->left->left = createNode2(4);
	root->left->right = createNode2(5);

	root->right->left = createNode2(6);
	root->right->right = createNode2(7);
	//Level 4
	root->left->right->left = createNode2(9);
	root->right->right->left = createNode2(15);


	printTree(root);


	cin.get();
}