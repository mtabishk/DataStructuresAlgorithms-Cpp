#include <iostream>
#include <string>
#include <stack>
using namespace std;

int countBracketReversals(string input) {
	int length = input.length();
	if (length % 2 != 0)
		return -1;
	// Write your code here
	stack<char> s;

	for (char ch : input) {
		if (ch == '{') {
			s.push(ch);
		} else if (ch == '}' && s.empty() ) {
			s.push(ch);
		} else if (ch == '}' && !(s.empty()) && s.top() == '{') {
			s.pop();
		} else {
			s.push(ch);
		}
	}

	int count = 0;

	while (!s.empty()) {
		char c1 = s.top();
		s.pop();
		char c2 = s.top();
		s.pop();

		if (c1 == c2) {
			count++;
		} else {
			count += 2;
		}
	}

	return count;
}


int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	string input;
	cin >> input;
	cout << countBracketReversals(input);
}