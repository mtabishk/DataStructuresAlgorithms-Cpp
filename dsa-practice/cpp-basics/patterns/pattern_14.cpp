///   ****
///    ***
///     **
///      *

#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n) {
	for (int i = 1; i <= n; i++) {
		// loop for spaces
		for (int k = 1; k <= i - 1; k++ ) {
			cout << " ";
		}
		for (int j = 1 ; j <= n - i + 1; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n = 0;
	cin >> n;
	print_pattern(n);
	return 0;
}