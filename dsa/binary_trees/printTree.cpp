#include <iostream>
#include "BinaryTreeNode.h"
using namespace std;

void printTree(BinaryTreeNode<int> *root) {
	if (root == NULL) return;

	cout << root->data << endl;
	printTree(root->left);
	printTree(root->right);
}

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	BinaryTreeNode<int> *root = new BinaryTreeNode<int>(10);
	BinaryTreeNode<int> *node1 = new BinaryTreeNode<int>(20);
	BinaryTreeNode<int> *node2 = new BinaryTreeNode<int>(30);

	BinaryTreeNode<int> *node3 = new BinaryTreeNode<int>(40);
	BinaryTreeNode<int> *node4 = new BinaryTreeNode<int>(50);

	BinaryTreeNode<int> *node5 = new BinaryTreeNode<int>(60);
	BinaryTreeNode<int> *node6 = new BinaryTreeNode<int>(70);


	root->left = node1;
	root->right = node2;

	node1->left = node3;
	node1->right = node4;

	node2->left = node5;
	node2->right = node6;

	cout << "printTree function called !!!" << endl;
	printTree(root);
	cout << "printTree function finished !!!" << endl;

	return 0;
}