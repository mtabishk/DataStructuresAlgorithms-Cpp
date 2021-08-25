#include <iostream>
using namespace std;
#include "BinaryTreeNode.h"

/**********************************************************

	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public:
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this->data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/

class BST {
	// Define the data members
	BinaryTreeNode<int> *root;
public:
	BST() {
		root = NULL;
	}

	~BST() {
		delete root;
	}

private:
	bool search(int data, BinaryTreeNode<int> *node) {
		if (node == NULL) {
			return false;
		}
		if (node->data == data) {
			return true;
		} else if (data < node->data) {
			return search(data, node->left);
		} else {
			return search(data, node->right);
		}
	}

	BinaryTreeNode<int>* insert(int data, BinaryTreeNode<int>* node) {
		if (node == NULL) {
			BinaryTreeNode<int> *newNode = new BinaryTreeNode<int>(data);
			return newNode;
		}

		if (data < node->data) {
			node->left = insert(data, node->left);
		} else {
			node->right = insert(data, node->right);
		}

		return node;
	}

	BinaryTreeNode<int>* remove(int data, BinaryTreeNode<int>* node) {
		if (node == NULL) {
			return NULL;
		}

		if (data > node->data) {
			node->right = remove(data, node->right);
			return node;
		} else if (data < node->data) {
			node->left = remove(data, node->left);
			return node;
		} else {
			if (node->left == NULL && node->right == NULL) {
				delete node;
				return NULL;
			} else if (node->left == NULL) {
				BinaryTreeNode<int> *temp = node->right;
				node->right = NULL;
				delete node;
				return temp;
			} else if (node->right == NULL) {
				BinaryTreeNode<int> *temp = node->left;
				node->left = NULL;
				delete node;
				return temp;
			} else {
				BinaryTreeNode<int> *minNode = node->right;
				while (minNode->left != NULL) {
					minNode = minNode->left;
				}
				int rightMin = minNode->data;
				node->data = rightMin;
				node->right = remove(rightMin, node->right);
				return node;
			}
		}

	}

	void print(BinaryTreeNode<int> *root) {
		if (root == NULL) {
			return;
		}

		cout << root->data << ":";
		if (root->left != NULL) {
			cout << "L:" << root->left->data << ",";
		}

		if (root->right != NULL) {
			cout << "R:" << root->right->data;
		}

		cout << endl;
		print(root->left);
		print(root->right);
	}

	/*----------------- Public Functions of BST -----------------*/
public:
	void remove(int data) {
		// Implement the remove() function
		this->root = remove(data, root);
	}

	void print() {
		// Implement the print() function
		print(root);
	}

	void insert(int data) {
		// Implement the insert() function
		this->root = insert(data, root);
	}

	bool search(int data) {
		// Implement the search() function
		return search(data, root);
	}
};



int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	BST b;
	b.insert(10);
	b.insert(5);
	b.insert(20);
	b.insert(7);
	b.insert(3);
	b.insert(15);

	b.print();
	cout << endl;

	b.remove(10);
	b.remove(100);
	b.print();
	return 0;
}
