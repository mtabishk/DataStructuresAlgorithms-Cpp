/*Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to return the answer.
Do this recursively.*/

#include <iostream>
using namespace std;

int power(int x, int n) {
	/* Don't write main().
	   Don't read input, it is passed as function argument.
	   Return output and don't print it.
	   Taking input and printing output is handled automatically.
	*/
	int result;
	if (n == 0) {
		return 1;
	}
	result = x * power(x, n - 1);
	return result;
}

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int x = 0, n = 0;
	cin >> x >> n;
	cout << power(x, n) << endl;

	return 0;
}