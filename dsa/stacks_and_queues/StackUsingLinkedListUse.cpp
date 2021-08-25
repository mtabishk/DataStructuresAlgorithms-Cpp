#include "StackUsingLinkedListTemplates.cpp"
#include <iostream>
using namespace std;

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	Stack<char> s1;

	s1.push('a');
	s1.push('b');
	s1.push('c');
	s1.push('d');
	s1.push('e');
	s1.push('f');
	s1.push('g');

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