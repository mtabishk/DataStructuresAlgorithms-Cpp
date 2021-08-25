#include <iostream>
#include <string>
using namespace std;

void split_text(string  text) {

	string first = "";
	string second = "";
	string third = "";

	int si = 0;
	int ei = 0;
	int length = 0;

	for (int i = 0; i <= text.length() ; ++i) {
		if (text[i] == ' ' || text[i] == '\0') {
			ei = i;
			if (first.length() == 0) {
				first = text.substr(si, length);
				si = ei + 1;
				length = 0;

			} else if (second.length() == 0) {
				second = text.substr(si, length);
				si = ei + 1;
				length = 0;

			} else if (third.length() == 0) {
				third = text.substr(si, length);
				length = 0;
			}
		}
		length++;
	}
	if (third.length() != 0) {
		cout << first[0] << "." << second[0] << "." << third << endl;
	} else {
		cout << first[0] << "." << second << endl;
	}
}

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	string name;
	getline(cin, name);
	split_text(name);

	return 0;
}