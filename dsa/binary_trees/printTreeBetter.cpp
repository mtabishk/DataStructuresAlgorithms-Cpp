#include <iostream>
#include "BinaryTreeNode.h"
using namespace std;

void printTreeBetter(BinaryTreeNode<int> *root) {
	if (root == NULL) return;

	cout << root->data << ": ";

	if (root->left != NULL) {
		cout << "\tL: " << root->left->data;
	}

	if (root->right != NULL) {
		cout << "\tR: " << root->right->data;
	}
	cout << endl;
	printTreeBetter(root->left);
	printTreeBetter(root->right);
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

	cout << "printTreeBetter func called !!!" << endl;
	printTreeBetter(root);
	cout << "printTreeBetter func finished !!!" << endl;

	return 0;
}