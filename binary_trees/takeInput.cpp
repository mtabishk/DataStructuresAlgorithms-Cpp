#include "BinaryTreeNode.h"
#include <iostream>
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

BinaryTreeNode<int>* takeInput() {
	int rootData;
	cout << "Enter Data: " << endl;
	cin >> rootData;

	if (rootData == -1) {
		return NULL;
	}

	BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);

	BinaryTreeNode<int> *leftChild = takeInput();
	BinaryTreeNode<int> *rightChild = takeInput();

	root->left = leftChild;
	root->right = rightChild;

	return root;
}

int main() {

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	BinaryTreeNode<int> *root = takeInput();
	printTreeBetter(root);

	return 0;
}