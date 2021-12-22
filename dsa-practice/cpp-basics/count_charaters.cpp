// count lowercase alphabets (a-z), uppercase alphabets (A-Z), digits (0-9), whitespaces (single space, tab, newline) entered till $
#include<bits/stdc++.h>
using namespace std;

int main() {
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	int countUppercase = 0;
	int countLowercase = 0;
	int countDigits = 0;
	int countWhitespaces = 0;

	char ch;
	ch = cin.get();

	while (ch != '$') {
		if (ch >= 'A' && ch <= 'Z') {
			countUppercase++;
		} else if (ch >= 'a' && ch <= 'z') {
			countLowercase++;
		} else if (ch >= 48 && ch <= 57) { // ASCII '0' = 48, '9' = 57
			countDigits++;
		} else if (ch == ' ' || ch == '\t' || ch == '\n') {
			countWhitespaces++;
		}

		ch = cin.get();


	}


	cout << "Uppercase Count: " << countUppercase << "\n";
	cout << "Lowecase Count: " << countLowercase << "\n";
	cout << "Digits Count: " << countDigits << "\n";
	cout << "Whitespaces Count: " << countWhitespaces << "\n";


	return 0;
}