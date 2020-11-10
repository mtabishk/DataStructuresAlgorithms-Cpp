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

	Node *head  = takeInput();
	print(head);

	return 0;
}
