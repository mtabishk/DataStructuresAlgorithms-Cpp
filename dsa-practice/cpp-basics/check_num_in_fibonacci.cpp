#include<bits/stdc++.h>
using namespace std;

bool checkFibonacci(int num) {
	if (num == 0) {
		return true;
	}
	int first = 0;
	int second = 1;
	int next = 0;
	while (next <= num) {
		next = first + second;
		first = second;
		second = next;
		if (next == num) {
			return true;
		}

	}
	return false;

}


int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int num = 0;
	cin >> num;
	cout << checkFibonacci(num);
	return 0;
}