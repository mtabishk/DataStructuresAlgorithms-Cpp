#include <iostream>
using namespace std;

void swap(char *a, char *b) {
	char *temp = a;
	a = b;
	b = temp;
}
int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	// This string is created using a character pointer, which means it will store the string in a read-only memory. Therefore, we cannot modify the value inside the string anywhere in the program*/
	char *x = "tabish";
	char *y = "sami";

	cout << "Before swap () is called: \n";
	cout << x << " " << y << endl;

	swap(x, y);

	cout << "After swap () is called: \n";
	cout << x << " " << y << endl;

	// Swapping in main()
	cout << "+-------Swapping in main()-----------+" << endl;
	char *t = x;
	x = y;
	y = t;
	cout << x << " " << y << endl;

	return 0;
}