#include<bits/stdc++.h>
using namespace std;

pair<char, int> highestOccuringCharacter(string str) {
	int freq[256] = {0};
	for (int i = 0; i < str.length(); i++) {
		freq[int(str[i])]++;
	}

	int maxFreq = 0;
	int index = 0;
	for (int i = 0; i < 255; i++) {
		if (freq[i] > maxFreq) {
			maxFreq = freq[i];
			index = i;
		}
	}
	pair<char, int> p;
	p.first = index;
	p.second = maxFreq;
	return p;
}

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	string str;
	getline(cin, str);

	pair<char, int> p;
	p = highestOccuringCharacter(str);
	cout << p.first << " " << p.second;
	return 0;
}