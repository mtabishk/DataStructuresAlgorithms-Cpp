///    1
///   212
///  32123
/// 4321234

///    1
///   212
///  32123
/// 4321234


#include<bits/stdc++.h>
using namespace std;


void print_pattern(int n) {
	for (int i = 1; i <= n; i++) {
		// spaces
		for (int j = 1; j <= n - i; j++) {
			cout << " ";
		}

		// pattern
		int curr = i;
		for (int k = i; k  <= 2 * i - 1; k++) {
			cout << curr;
			curr--;
		}
		curr += 2;
		for (int k = i + 1; k  <= 2 * i - 1; k++) {
			cout << curr;
			curr++;
		}
		cout << "\n";
	}
	return;
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n = 0;
	cin >> n;
	print_pattern(n);
	return 0;
}