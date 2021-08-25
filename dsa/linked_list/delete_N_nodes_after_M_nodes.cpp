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

Node *skipMdeleteN(Node *head, int M, int N) {
	// Write your code here
	if (M == 0 || head == NULL) return NULL;
	if (N == 0) return head;

	Node *currentNode = head;
	Node *temp = NULL;

	while (currentNode != NULL) {
		int take = 0;
		int skip = 0;

		while (currentNode != NULL && take < M) {
			if (temp == NULL) temp = currentNode;
			else {
				temp->next = currentNode;
				temp = currentNode;
			}
			currentNode = currentNode->next;
			take++;
		}

		while (currentNode != NULL && skip < N) {
			Node *newNode = currentNode;
			delete currentNode;
			currentNode = newNode->next;
			skip++;
		}
	}

	if (temp != NULL) temp->next = NULL;

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
		Node *head = takeinput();
		int m, n;
		cin >> m >> n;
		head = skipMdeleteN(head, m, n);
		print(head);
	}
	return 0;
}
