#include <iostream>
using namespace std;

int power(int x, int n) {
	/* Don't write main().
	   Don't read input, it is passed as function argument.
	   Return output and don't print it.
	   Taking input and printing output is handled automatically.
	*/
	int sum = 0;
	for (int i = 1; i <= n; ++i) {
		sum += x;
	}
	return sum;
}

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int x = 0, n = 0;
	cin >> x >> n;
	cout << power(x, n) << endl;

	return 0;
}