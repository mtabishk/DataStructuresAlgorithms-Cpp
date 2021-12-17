///       1
///     2 3
///   4 5 6
/// 7 8 9 10

#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n) {
	int curr = 1;
	for (int i = 1; i <= n; i++) {
		// loop for spaces
		for (int j = n - i; j >= 1; j--) {
			cout << "  ";
		}
		for (int j = 1; j <= i; j++) {
			cout << curr << " ";
			curr++;
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