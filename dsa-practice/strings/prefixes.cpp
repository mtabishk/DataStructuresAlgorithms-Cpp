#include<bits/stdc++.h>
using namespace std;

void printAllPrefixes(string str) {
	for (int i = 0; i < str.length(); i++) {
		cout << str.substr(0, i + 1) << "\n";
	}
}

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	string str;
	cin >> str;
	printAllPrefixes(str);
	return 0;
}