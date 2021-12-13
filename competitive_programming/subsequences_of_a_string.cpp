#include<bits/stdc++.h>
using namespace std;


// string array: string output[] == string *output
int subsequences(string input, string *output) {
	if (input.empty()) {
		output[0] = "";
		return 1;
	}

	string smallString = input.substr(1);
	int smallOutputSize = subsequences(smallString, output);

	for (int i = 0; i < smallOutputSize; i++) {
		output[i + smallOutputSize] = input[0] + output[i]; // input[0] == "a" , + does concatination
	}
	return 2 * smallOutputSize;
}


int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	string input;
	cin >> input;

	int total_substrings = pow(2, input.length());
	string *output = new string[total_substrings];

	int count = subsequences(input, output);
	for (int i = 0; i < count; i++) {
		cout << output[i] << " ";
	}

	// deallocate memory
	delete [] output;

	return 0;
}