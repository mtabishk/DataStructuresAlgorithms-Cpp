#include <iostream>

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

using namespace std;

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}


Node *swapNodes(Node *head, int i, int j)
{
	//Write your code here
	if (i == j) return head;

	Node *currentNode = head;
	Node *prev = NULL;

	Node *firstNode = NULL, *secondNode = NULL;
	Node *firstNodeprev = NULL, *secondNodeprev = NULL;

	int pos = 0;

	while (currentNode != NULL) {
		if (pos == i) {
			firstNodeprev = prev;
			firstNode = currentNode;
		} else if (pos == j) {
			secondNodeprev = prev;
			secondNode = currentNode;
		}

		prev = currentNode;
		currentNode = currentNode->next;
		pos++;
	}

	if (firstNodeprev != NULL) firstNodeprev->next = secondNode;
	else head = secondNode;

	if (secondNodeprev != NULL) secondNodeprev->next = firstNode;
	else head = firstNode;

	Node *currentFirstnode = secondNode->next;
	secondNode->next = firstNode->next;
	firstNode->next = currentFirstnode;

	return head;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int t;
	cin >> t;
	while (t--)
	{
		int i, j;
		Node *head = takeinput();
		cin >> i;
		cin >> j;
		head = swapNodes(head, i, j);
		print(head);
	}
	return 0;
}
