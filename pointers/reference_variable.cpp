#include <iostream>
using namespace std;

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int i = 10;
	int& j = i;

	cout << i << " " << j << endl;

	int k = 10;
	j = 30;

	cout << i << " " << j << endl;

	return 0;
}
