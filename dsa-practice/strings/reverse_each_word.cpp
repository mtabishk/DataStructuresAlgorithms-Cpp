#include<bits/stdc++.h>
using namespace std;


string reverseEachWord(string str) {
	int si = 0;
	int ei = 0;
	for (int i = 0; i < str.length() + 1; i++) {
		if (str[i] == ' ' || str[i] == '\0') {
			ei = i - 1;
			// reverse word
			while (si < ei) {
				char temp = str[si];
				str[si] = str[ei];
				str[ei] = temp;
				si++;
				ei--;
			}
			si = i + 1;

		}
	}
	return str;
}


int main() {
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	string str;
	getline(cin, str);

	cout << reverseEachWord(str);
	return 0;
}