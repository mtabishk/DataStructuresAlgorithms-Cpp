/// 1234
/// 1234
/// 1234
/// 1234

#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n) {
	for (int i = 1; i <= n; i++) {
		int curr = 1;
		for (int j = 1 ; j <= n; j++) {
			cout << curr;
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