#include<bits/stdc++.h>
using namespace std;

void replaceCharacter(string str, char ch1, char ch2) {
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ch1) {
			str[i] = ch2;
		}
	}
	cout << str;
}

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	string str;
	cin >> str;

	char ch1, ch2;
	cin >> ch1 >> ch2;

	replaceCharacter(str, ch1, ch2);
	return 0;
}