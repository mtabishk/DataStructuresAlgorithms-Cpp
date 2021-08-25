//bubble sort iterative
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

int len_ll(Node *head) {

	if (head == NULL) {
		return 0;
	}

	int l = len_ll(head->next);

	return l + 1;


}

Node *bubbleSort(Node *head)
{
	// Write your code here
	if (head == NULL) return head;


	for (int i = 0; i < len_ll(head); i++) {
		Node *prev = NULL;
		Node *curr = head;
		while (curr->next != NULL) {
			if (curr->data > curr->next->data && prev != NULL) {
				// swap
				Node *nxt = curr->next->next;
				curr->next->next = curr;
				prev->next = curr->next;
				curr->next = nxt;
				prev = prev->next;
			} else if (curr->data > curr->next->data && prev == NULL) {
				// swap and update
				head = curr->next;
				curr->next = head->next;
				head->next = curr;
				prev = head;
			} else {
				prev = curr;
				curr = curr->next;
			}

		}

	}
	return head;

}

int main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	Node *head = takeinput();
	head = bubbleSort(head);
	print(head);
}
