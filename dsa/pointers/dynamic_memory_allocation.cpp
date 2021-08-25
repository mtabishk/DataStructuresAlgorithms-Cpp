#include <iostream>
using namespace std;

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int *p = new int;
	*p = 10;
	cout << *p << endl;
	cout << p << endl;

	int *q = new int;
	*q = 20;
	cout << *q << endl;
	cout << q << endl;

	return 0;
}