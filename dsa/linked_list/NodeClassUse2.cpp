#include "NodeClass.cpp"
#include <iostream>
using namespace std;

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

	// create dynamic objects for nodes of linked list
	Node *n1 = new Node(10);
	// address of head
	Node *head = n1;

	Node *n2 = new Node(20);
	Node *n3 = new Node(30);
	Node *n4 = new Node(40);
	Node *n5 = new Node(50);

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;

	print(head);

	return 0;
}
