#include<bits/stdc++.h>
using namespace std;

int maxIndex(float *arr, int n) {
	float max = INT_MIN;
	int index;
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
			index = i;
		}
	}
	return index;
}

// knapsack problem or fractional knapsack problem
float knapsack(int* profits, int* weights, int cap, int n) {
	float *profitsWeights = new float [n];

	for (int i = 0; i < n; i++) {
		profitsWeights[i] = float(profits[i]) / float(weights[i]);
	}

	float totalProfit = 0.0;
	while (cap > 0) {
		// k: index of max profit/weight ratio element
		int k = maxIndex(profitsWeights, n);


		if (profitsWeights[k] == -1) {
			return 0;
		}

		int currWeight = weights[k];
		int currProfit = profits[k];

		if (cap >= currWeight) {
			cap = cap - currWeight;
			totalProfit = totalProfit + float(profitsWeights[k] * currWeight);
		} else if (cap < currWeight) {
			// remcap: remaining capacity
			float remcap = float(cap) / float(currWeight);
			cap = 0;
			totalProfit = totalProfit + (remcap * currProfit);
		}
		profitsWeights[k] = -1;

	}
	return totalProfit;
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	// n: total no. of objects
	// cap: total capacity of knapsack
	int n, cap;
	cin >> n;
	cin >> cap;

	int *pprofits = new int [n];
	int *pweights = new int [n];

	// take input for objects
	for (int i = 0; i < n; i++) {
		cin >> pprofits[i];
	}

	// take input for profits
	for (int i = 0; i < n; i++) {
		cin >> pweights[i];
	}

	cout << knapsack(pprofits, pweights, cap, n);


	delete [] pprofits;
	delete [] pweights;

	return 0;
}