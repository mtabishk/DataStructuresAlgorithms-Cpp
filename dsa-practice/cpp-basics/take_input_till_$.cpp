#include<bits/stdc++.h>
using namespace std;

int main() {
	char ch;
	// cin.get() takes all characters including whitespaces
	ch = cin.get();
	int count = 0;
	while (ch != '$') {
		count++;
		ch = cin.get();
	}
	cout << count;

	return 0;
}