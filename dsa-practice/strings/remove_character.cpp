#include<bits/stdc++.h>
using namespace std;

string shiftString(string str, int si, int ei) {
	while (si < ei) {
		str[si] = str[si + 1];
		si++;
	}
	return str;
}

string removeCharacter(string str, char ch) {
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] == ch) {
			str = shiftString(str, i, str.length());
		} else {
			i++;
		}
	}
	return str;
}

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	string str;
	cin >> str;

	char ch;
	cin >> ch;

	cout << removeCharacter(str, ch);
	return 0;
}