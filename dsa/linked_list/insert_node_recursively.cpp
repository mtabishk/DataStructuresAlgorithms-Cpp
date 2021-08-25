#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node *next;
	Node(int data) {
		this->data = data;
		this->next = NULL;
	}
};



Node* insertNode(Node *head, int i, int data) {

	if (head == NULL) {
		return head;
	}

	if ( i == 0) {
		Node *newNode = new Node(data);
		newNode->next = head;
		head = newNode;
		return head;
	}

	Node* output = insertNode(head->next, i - 1, data);

	head->next = output;

	return head;
}




Node *takeinput() {
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1) {
		Node *newNode = new Node(data);
		if (head == NULL) {
			head = newNode;
			tail = newNode;
		} else {
			tail->next = newNode;
			tail = newNode;
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

	cout << "\n";
}


int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int t;
	cin >> t;

	while (t--) {
		Node *head = takeinput();
		int pos, data;
		cin >> pos >> data;
		head = insertNodeRec(head, pos, data);
		print(head);
	}

	return 0;
}