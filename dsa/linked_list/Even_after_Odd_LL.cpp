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

Node *evenAfterOdd(Node *head)
{
	//write your code here
	if (head == NULL || head->next == NULL) return head;

	Node* oddH = NULL;
	Node* oddT = NULL;
	Node* evenH = NULL;
	Node* evenT = NULL;

	while (head != NULL) {
		if (head->data % 2 == 0 && evenH == NULL) {
			evenH = head;
			evenT = head;
		} else if (head->data % 2 != 0 && oddH == NULL) {
			oddH = head;
			oddT = head;
		} else if (head->data % 2 == 0) {
			evenT->next = head;
			evenT = evenT->next;
		} else {
			oddT->next = head;
			oddT = oddT->next;
		}
		head = head->next;
	}

	if (evenH == NULL) return oddH;
	else if (oddH == NULL) return evenH;
	else {
		oddT->next = evenH;
		evenT->next = NULL;
	}
	return oddH;
}
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		head = evenAfterOdd(head);
		print(head);
	}
	return 0;
}
