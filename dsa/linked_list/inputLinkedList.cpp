#include "NodeClass.cpp"
#include <iostream>
using namespace std;

// Time Complexity : O(n^2) : horrible
Node* takeInput() {
	int data;
	cin >> data;

	Node *head = NULL;

	// using 1 as terminator
	while (data != -1) {
		Node *newNode = new Node(data);
		if (head == NULL) {
			head = newNode;
		} else {
			Node *temp = head;

			while (temp->next != NULL) {
				temp = temp->next;
			}
			temp->next = newNode;
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

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	Node *head  = takeInput();
	print(head);

	return 0;
}
