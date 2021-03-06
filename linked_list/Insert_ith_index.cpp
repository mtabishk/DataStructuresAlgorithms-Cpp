#include "NodeClass.cpp"
#include <iostream>
using namespace std;


// Time Complexity : O(n)
Node* takeInput() {
	int data;
	cin >> data;

	Node *head = NULL;
	Node *tail = NULL;

	// using 1 as terminator
	while (data != -1) {
		Node *newNode = new Node(data);
		if (head == NULL) {
			head = newNode;
			tail = newNode;
		} else {
			tail->next = newNode;
			tail = tail->next;
		}
		cin >> data;
	}
	return head;

}

Node* insertNode(Node *head, int i, int data) {
	Node* newNode = new Node(data);
	int count = 0;
	Node *temp = head;

	// handling case when we want to insert at index 0
	if (i == 0) {
		newNode->next = head;
		head = newNode;
		return head;
	}

	// handling remaining cases
	while (temp != NULL && count < i - 1) {
		temp = temp->next;
		count++;
	}
	// connecting the inserted node
	if (temp != NULL) {
		Node *a = temp->next;
		temp->next = newNode;
		newNode->next = a;
	}
	return head;
}


void print(Node *head) {
	Node *temp = head;

	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
}
int main() {

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int i, data;

	Node *head  = takeInput();

	cin >> i >> data;

	head = insertNode(head, i , data);


	print(head);

	return 0;
}
