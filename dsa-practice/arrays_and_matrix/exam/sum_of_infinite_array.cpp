#include<bits/stdc++.h>
using namespace std;

vector<int> sumInRanges(vector<int> &arr, int n, vector<vector<long long>> &queries, int q) {
	// infinite array
	vector<int> infiniteArr;
	int index = 0;
	while (index < INT_MAX) {
		for (int i = 0; i < n; i++) {
			infiniteArr[index] = arr[i];
			index++;
		}
	}

	// queries
	vector<int> indices;
	for (int i = 0; i < q; i++) {
		for (int j = 0; j < 2; j++) {
			indices.push_back(queries[i][j]);
		}
	}

	vector<int> sumArr;
	int count = 0;
	int curr = 0;
	while (count < q) {
		int si = indices[curr];
		curr++;
		int ei = indices[curr];
		curr++;

		int sum = 0;
		for (int i = si; i <= ei; i++) {
			sum += infiniteArr[i];
		}
		sumArr.push_back(sum);

		count++;
	}

	return sumArr;

}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	return 0;
}
