/// 1234554321
/// 1234**4321
/// 123****321
/// 12******21
/// 1********1

/// 12345  54321
/// 1234*  *4321
/// 123**  **321
/// 12***  ***21
/// 1****  ****1


#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n) {
	for (int i = 1; i <= n; i++) {
		// part 1
		for (int j = 1; j <= n - i + 1 ; j++) {
			cout << j;
		}
		for (int k = 1; k < i; k++) {
			cout << "*";
		}
		// part 2
		for (int k = 1; k < i; k++) {
			cout << "*";
		}
		for (int j = n - i + 1; j >= 1; j--) {
			cout << j;
		}

		cout << "\n";
	}
	return;
}

int main() {
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int n = 0;
	cin >> n;
	print_pattern(n);
	return 0;
}

