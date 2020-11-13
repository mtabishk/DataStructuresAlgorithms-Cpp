#include "StackUsingLinkedList.cpp"
#include <iostream>
using namespace std;

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	Stack s1;

	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.push(40);
	s1.push(50);
	s1.push(60);
	s1.push(70);

	cout << s1.getSize() << endl;
	cout << s1.isEmpty() << endl;
	cout << s1.top() << endl;

	s1.pop();
	s1.pop();
	s1.pop();
	s1.pop();

	cout << endl;
	cout << s1.getSize() << endl;
	cout << s1.isEmpty() << endl;
	cout << s1.top() << endl;
	return 0;
}