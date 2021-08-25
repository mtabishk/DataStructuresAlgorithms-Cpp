#include "StackUsingArrays.cpp"
#include <iostream>
using namespace std;

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	StackUsingArray s(4);

	s.push(10);
	s.push(20);
	s.push(40);
	s.push(50);
	//s.push(60);
	//s.push(70);
	//s.push(80);

	cout << s.isEmpty() << endl;
	cout << s.size() << endl;
	cout << s.top() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.top() << endl;
	cout << s.size() << endl;


	return 0;
}