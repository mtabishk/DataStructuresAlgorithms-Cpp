#include <iostream>
#include <cmath>
using namespace std;

int length(char input[]) {
	int len = 0;
	for (int i = 0; input[i] != '\0'; i++) {
		len++;
	}
	return len;
}

int stringToNumber(char input[]) {
	// Base Case
	int len = length(input);
	if (len == 1) {
		int n = input[0] - 48;
		return n;
	}

	int a = stringToNumber(input + 1);

	int b = input[0] - 48;
	return (b * pow(10, len - 1)) + a;

}



int main() {

	//freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	char input[] = {"5555"};
	cout << stringToNumber(input);
	return 0;
}