#include <bits/stdc++.h>
using namespace std;

// Method 1
// Space Complexity: O(n)
int totalSum(int **input, int n) {
    
    // flag 2d array 
    int **pflag = new int* [n];
    for (int i=0; i < n; i++) {
        pflag[i] = new int[n];
        for(int j=0; j<n; j++) {
            pflag[i][j] = -1; // -1 indicates this index is not added yet
        }
    }
    
    for (int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if (i == 0 || i == n-1) pflag[i][j] = 0;
            else if (j == 0 || j == n-1) pflag[i][j] = 0;
            else if (i==j) pflag[i][j] = 0;
            else if (i+j == n-1) pflag[i][j] = 0;

        }
    }

    int sum = 0;
    for (int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if (pflag[i][j] != -1) sum += input[i][j];
            //cout << pflag[i][j] << "\t";
        }
       // cout << endl;
    }
    
    return sum;

    for (int i=0; i < n; i++) {
        delete pflag[i];
    }
    delete [] pflag;
}

// Method 2
// Space Complexity: O(1)
int getSumOfLeftDiagonal(int **input, int n) {
    int sum = 0;
    for (int i=0, j=0; i<n; i++,j++) {
        sum += input[i][j];
    }
    return sum;
}

int getSumOfRightDiagonal(int **input, int n) {
    int sum = 0;
    for (int i=0, j=n-1; i<n; i++,j--) {
        sum += input[i][j];
    }
    return sum;
}

int getSumOfBoundaries(int **input, int n) {
    int sum =0;
    for (int i=1; i<n-1; i++) {
        sum += input[0][i]; // upper boundary
        sum += input[n-1][i]; // lower boundary
        sum += input[i][0]; // left boundary
        sum += input[i][n-1]; // right boundary
    }
    return sum;
}

int totalSum(int **input, int n) {
    int sum = getSumOfLeftDiagonal(input, n);
    sum += getSumOfRightDiagonal(input, n);
    sum += getSumOfBoundaries(input, n);

    // if 'n' is odd then subtract mid element to avoid double counting
    if (n%2 != 0) {
        sum -= input[n/2][n/2];
    }
    return sum;
}

int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int** arr = new int*[n];

		for (int i = 0; i < n; i++)
		{
			arr[i] = new int[n];
			for (int j = 0; j < n; j++)
			{
				cin >> arr[i][j];
			}
		}
        
        cout << totalSum(arr, n) << endl; 

        for (int i=0; i < n; i++) {
        delete arr[i];
        }
        delete [] arr;
	}
    return 0;
}

