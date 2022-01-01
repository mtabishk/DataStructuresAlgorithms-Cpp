#include<bits/stdc++.h>
using namespace std;

string compressString(string str) {

	int i = 0;
	string output = "";
	char count = '1';
	while (str[i] != '\0') {
		if (str[i] == str[i + 1]) {
			count++;

		} else {
			output = (output + str[i]) + count;
			count = '1';
		}
		i++;
	}
	return output;
}

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	string str;
	cin >> str;

	cout << compressString(str);

	return 0;
}