/// ABCD
/// BCDE
/// CDEF
/// DEFG

#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n) {
	for (int i = 0; i < n; i++) {
		char curr = 'A' + i;
		for (int j = 0 ; j < n; j++) {
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