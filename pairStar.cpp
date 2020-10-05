#include <iostream>
using namespace std;

// Change in the given string itself. So no need to return or print the changed string.
int length(char input[]) {
	int len = 0;
	for (len; input[len] != '\0'; len++);
	return len;
}

void pairStar(char input[], int start) {
	if (input[start] == '\0')
		return;
	pairStar(input, start + 1);

	if (input[start] == input[start + 1]) {
		int l = length(input);
		input[l + 1] = '\0';

		int i;
		for (i = l - 1; i >= start + 1; --i) {
			input[i + 1] = input[i];
		}
		input[i + 1] = '*';
	}
	return;

}

void pairStar(char input[]) {
	pairStar(input, 0);
	return;
}


int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	return 0;
}