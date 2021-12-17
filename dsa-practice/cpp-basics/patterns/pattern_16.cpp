///    1
///   232
///  34543
/// 4567654

/// Break into two parts
///    1
///   23 2
///  345 43
/// 4567 654

#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n) {
	for (int i = 1; i <= n; i++) {
		// loop for spaces
		for (int k = 1; k <= n - i; k++ ) {
			cout << " ";
		}

		int curr = i;
		for (int j = 1 ; j <= i; j++) {
			cout << curr;
			curr++;

		}
		curr -= 2;
		for (int k = 1; k <= i - 1; k++) {
			cout << curr;
			curr--;
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