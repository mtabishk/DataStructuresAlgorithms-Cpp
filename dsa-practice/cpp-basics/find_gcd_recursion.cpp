#include<bits/stdc++.h>
using namespace std;

int findGcdRecursion(int num1, int num2) {
	if (num1 == 0) {
		return num2;
	}
	return findGcdRecursion(num2 % num1, num1);
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int num1, num2;
	cin >> num1 >> num2;

	cout << findGcdRecursion(num1, num2);
	return 0;
}