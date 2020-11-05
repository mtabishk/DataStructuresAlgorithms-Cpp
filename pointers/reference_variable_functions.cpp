#include <iostream>
using namespace std;

// Reference Varible are mainly used with functions in order to share local variables
void increment(int& n ) {
	n++;
}

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int i = 10;
	increment(i);
	cout << i << endl;
	return 0;
}