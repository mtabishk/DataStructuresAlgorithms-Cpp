#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("output.txt", "w", stdout);

	vector<int> v;
	cout << v.size() << endl;

	vector<int> v2(10);
	cout << v2.size() << endl;

	vector<int>::iterator it;
	for (it = v2.begin(); it != v2.end(); it++) {
		cout << *it << " ";
	}

	cout << "\n";

	for (int i = 0; i < v2.size(); i++) {
		cout << v2[i] << " ";
	}

	cout << "\n";
	v2.clear();

	cout << v2.size();

	cout << "\n";

	vector<char> vc(10, 'a');
	vector<char>::iterator itc;
	for (itc = vc.begin(); itc != vc.end(); itc++) {
		cout << *itc << " ";
	}

	cout << "\n";

	vector<int> v3;
	for (int i = 0; i < 10; i++) {
		v3.push_back(10 + i);
		cout << v3[i] << " " << v3.size() << " " << v3.capacity() << "\n";

	}

	cout << "\n";

	for (int i = 0; i < 8; i++) {
		v3.pop_back();
		cout << v3[i] << " " << v3.size() << " " << v3.capacity() << "\n";;
	}

	v3.clear();


	return 0;
}