#include <iostream>
using namespace std;

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	string str = "[(a+b)+c]";
	for (int i = 0; str[i] != '\0'; i++) {
		cout << i << " " << str[i] << endl;
	}
	return 0;
}