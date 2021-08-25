#include <iostream>
using namespace std;

int sumDigits(int num) {
	if (num == 0) {
		return 0;
	}
	int last = num % 10;
	int out = last + sumDigits(num / 10);
	return out;
}
int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n = 0;
	cin >> n;
	cout << "Sum: " << sumDigits(n);
	return 0;
}