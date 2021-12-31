#include<bits/stdc++.h>
using namespace std;

bool checkPermutations(string str1, string str2) {
	if (str1.length() != str2.length()) {
		return false;
	}

	// ascii values have range (0,255)
	int chars[256] = {0};

	for (int i = 0; i < str1.length(); i++) {
		chars[str1[i]]++;
	}

	for (int i = 0; i < str2.length(); i++) {
		chars[str2[i]]--;
	}

	for (int i = 0; i < 256; i++) {
		if (chars[i] != 0) {
			return false;
		}

	}
	return true;
}

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	string str1, str2;
	cin >> str1 >> str2;

	// check permutations:
	// length of both the strings should be same and it should contain same character in any order
	cout << checkPermutations(str1, str2);
	return 0;
}