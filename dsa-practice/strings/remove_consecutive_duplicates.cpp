#include<bits/stdc++.h>
using namespace std;

string shiftString(string str, int si, int ei) {
	while (si < ei) {
		str[si] = str[si + 1];
		si++;
	}
	return str;
}
void removeConsecutiveDuplicates(string str) {
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] == str[i + 1]) {
			str = shiftString(str, i + 1, str.length());
		} else {
			i++;
		}
	}
	cout << str;
}

int main() {
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	string str;
	cin >> str;

	removeConsecutiveDuplicates(str);

	return 0;
}