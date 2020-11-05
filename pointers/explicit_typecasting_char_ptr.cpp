#include <iostream>
using namespace std;

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	// Implicit Typecasting
	int i = 65;
	char c = i;
	cout << i << " " << c << endl;

	// Explicit Typecasting
	int *p = &i;
	// char *pc = p; will give error
	char *pc = (char*)p;
	cout << *p << " " << *pc << endl;

	return 0;
}