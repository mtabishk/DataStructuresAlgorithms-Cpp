#include "BinaryTreeNode.h"
class BST {
	BinaryTreeNode<int> *root;

	BST() {
		root = NULL;
	}

	~BST() {
		delete root;
	}

	bool hasData(int data, BinaryTreeNode<int> *node) {
		if (node == NULL) {
			return false;
		}
		if (node->data == data) {
			return true;
		} else if (data < node->data) {
			return hasData(data, node->left);
		} else {
			return hasData(data, node->right);
		}
	}

public:
	bool hasData(int data) {
		return hasData(data, root);
	}

	void deleteData(int data) {

	}

	void insertData(int data) {

	}

};