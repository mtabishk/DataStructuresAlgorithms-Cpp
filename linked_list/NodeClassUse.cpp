#include "NodeClass.cpp"
#include <iostream>
using namespace std;

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	Node n1(1);
	Node *head = &n1;

	Node n2(2);
	n1.next = &n2;

	cout << n1.data << " " << n2.data << endl;

	cout << head->data << endl;
	return 0;
}