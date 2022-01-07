#include<bits/stdc++.h>
using namespace std;

int main() {

	int rows = 0;
	int cols = 0;

	cin >> rows >> cols;

	vector<vector<int>> vect(vector<int>(cols));

	for (int i = 0; i < rows; i++) {
		for (int j = 0; i < cols; j++) {
			cin >> vect[i][j];
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; i < cols; j++) {
			cout << vect[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}