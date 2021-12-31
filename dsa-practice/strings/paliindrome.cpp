#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str1) {
	string str2(str1);
	reverse(str2.begin(), str2.end());
	if (str1.compare(str2) == 0) {
		return true;
	}
	return false;
}

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	string str;
	cin >> str;

	// Palindromes: racecar || madam || mom || noon
	cout << checkPalindrome(str);
	return 0;
}