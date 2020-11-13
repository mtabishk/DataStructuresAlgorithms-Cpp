#include "DynamicStackUsingArraysTemplates.cpp"
#include <iostream>
using namespace std;


int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	StackUsingArray<double> s;

	s.push(10.31);
	s.push(20.44);
	s.push(40.76);
	s.push(50.11);
	s.push(60.09);
	s.push(70.76);
	s.push(80.10);

	cout << s.isEmpty() << endl;
	cout << s.size() << endl;
	cout << s.top() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.top() << endl;
	cout << s.size() << endl;


	StackUsingArray<char> s1;

	s1.push('t');
	s1.push('a');
	s1.push('b');
	s1.push('i');
	s1.push('s');
	s1.push('h');


	cout << s1.isEmpty() << endl;
	cout << s1.size() << endl;
	cout << s1.top() << endl;
	cout << s1.pop() << endl;
	cout << s1.pop() << endl;
	cout << s1.pop() << endl;
	cout << s1.top() << endl;
	cout << s1.size() << endl;

	return 0;
}