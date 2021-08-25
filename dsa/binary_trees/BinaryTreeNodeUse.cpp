#include <iostream>
#include "BinaryTreeNode.h"
using namespace std;

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	BinaryTreeNode<int> *root = new BinaryTreeNode<int>(10);
	BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(20);
	BinaryTreeNode<int> *rightNode = new BinaryTreeNode<int>(30);

	root->left = leftNode;
	root->right = rightNode;

	cout << root->data << endl;
	cout << "L: " << root->left->data << "," << endl;
	cout << "R: " << root->right->data << "," << endl;
	return 0;
}