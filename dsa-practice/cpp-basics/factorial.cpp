#include<bits/stdc++.h>
using namespace std;

int factorial(int num) {
	int fac = 1;
	for (int i = num; i >= 1; i--) {
		fac = fac * i;
	}
	return fac;
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int num = 0;
	cin >> num;
	cout << factorial(num);
	return 0;
}