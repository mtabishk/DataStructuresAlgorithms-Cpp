#include<bits/stdc++.h>
using namespace std;

string minLengthWord(string str) {
	int currLength = 0;
	int minLength = INT_MAX;
	string output;

	int si = 0;
	int ei = 0;
	for (int i = 0; i < str.length() + 1; i++) {
		if (str[i] == ' ' || str[i] == '\0') {
			ei = i - 1;
			string temp = str.substr(si, (ei - si) + 1);
			if (temp.length() < minLength) {
				output = temp;
				minLength = temp.length();
			}
			si = i + 1;
		}
	}
	return output;
}


int main() {
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	string str;
	getline(cin, str);

	cout << minLengthWord(str);
	return 0;
}
