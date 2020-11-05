#include <iostream>
using namespace std;

/* int sum (int x=0, int y=0,, int z) . This function definition will give an error because default arguments are given from right to left in function definition */

int sum (int x, int y = 0, int z = 0) {
	return x + y + z;
}
int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	cout << sum(10, 20, 30) << endl;

	return 0;
}