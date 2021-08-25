#include <iostream>
#include <climits>
using namespace std;

class Node {
public:
	int data;
	Node *next;
	Node(int data) {
		this->data = data;
		next = NULL;
	}
};

class Stack {
	Node *head;
	int size;
public:
	Stack() {
		head = NULL;
		size = 0;
	}

	int getSize() {
		return size;
	}

	bool isEmpty() {
		return (getSize() == 0);
	}

	void push (int element) {
		Node *newNode = new Node(element);
		newNode->next = head;
		head = newNode;
		size++;


	}

	int pop() {
		if (isEmpty()) {
			cout << "Stack is empty" << endl;
			return INT_MIN;
		}
		int ans = head->data;
		Node *temp = head;
		head = head->next;
		delete temp;
		size--;
		return ans;

	}
	int top() {
		if (isEmpty()) {
			cout << "Stack is empty" << endl;
			return INT_MIN;
		}
		return head->data;

	}
};