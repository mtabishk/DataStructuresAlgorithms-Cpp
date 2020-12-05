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


Node *midPoint(Node *head) {
	// Write your code here
	if (head == NULL || head->next == NULL) {
		return head;
	}
	Node *slow = head;
	Node *fast = head->next;

	while ( fast != NULL  ) {
		if ( fast->next == NULL ) {
			return slow;
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;

}

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{

	//Write your code here
	if (head1 == NULL) return head2;
	else if (head2 == NULL) return head1;

	Node *fhead = NULL;
	Node *ftail = NULL;

	if (head1->data < head2->data) {
		fhead = head1;
		ftail = head1;
		head1 = head1->next;
	} else {
		fhead = head2;
		ftail = head2;
		head2 = head2->next;
	}

	while (head1 != NULL && head2 != NULL) {
		if (head1->data < head2->data) {
			ftail->next = head1;
			ftail = head1;
			head1 = head1->next;
		} else {
			ftail->next = head2;
			ftail = head2;
			head2 = head2->next;
		}
	}

	if (head1 != NULL ) {
		ftail->next = head1;

	} else {

		ftail->next = head2;
	}

	return fhead;
}


Node *mergeSort(Node *head)
{
	if (head == NULL || head->next == NULL) {
		return head;
	}

	// Mid Point of the LL
	Node *mid = midPoint(head);

	// Dividing LL in 2 parts
	Node *head2 = mid->next;
	mid->next = NULL;
	Node *head1 = head;

	// Calling recursion to sort two parts of the LL
	head1 = mergeSort(head1);
	head2 = mergeSort(head2);

	// merge two sorted arrays
	head = mergeTwoSortedLinkedLists(head1, head2);
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
		head = mergeSort(head);
		print(head);
	}

	return 0;
}