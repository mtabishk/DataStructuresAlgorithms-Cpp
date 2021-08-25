#include <iostream>
using namespace std;

void print(int *p2) {
	cout << " In print() function: \n";
	cout << *p2 << endl;
	cout << p2 << endl;
	// increment
	*p2 = *p2 + 10;
	cout << *p2 << endl;
}
int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int i = 10;
	int *p = &i;
	cout << " In main() function: \n";
	cout << *p << endl;
	cout << p << endl;
	print(p);
	cout << " After calling print(), In main() function: \n";
	cout << *p << endl;

	return 0;
}