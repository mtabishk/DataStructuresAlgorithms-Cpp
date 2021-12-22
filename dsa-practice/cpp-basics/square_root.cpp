#include<bits/stdc++.h>
using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	long int num;
	cin >> num;

	int sqrt = 0;
	int i = 1;
	while (i < num) {
		if (i * i <= num) {
			sqrt = i;
		}
		i++;

	}
	cout << sqrt;
	return 0;
}