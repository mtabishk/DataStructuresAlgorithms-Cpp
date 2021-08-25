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

Node *kReverse(Node *head, int k)
{
	//Write your code here
	if (k == 0 || k == 1) return head;

	Node *current = head;
	Node *fwd = NULL;
	Node *prev = NULL;

	int count = 0;

	// Reverse first k nodes of Linked List
	while (count < k && current != NULL) {
		fwd = current->next;
		current->next = prev;
		prev = current;
		current = fwd;
		count ++;
	}

	if (fwd != NULL) head->next = kReverse(fwd, k);

	return prev;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		int k;
		cin >> k;
		head = kReverse(head, k);
		print(head);
	}

	return 0;
}