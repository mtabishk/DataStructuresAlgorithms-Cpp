/*
Last Index of Number
Send Feedback
Given an array of length N and an integer x, you need to find and return the last index of integer x present in the array. Return -1 if it is not present in the array.
Last index means - if x is present multiple times in the array, return the index at which x comes last in the array.
You should start traversing your array from 0, not from (N - 1).
Do this recursively. Indexing in the array starts from 0.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x
Output Format :
last index or -1
Constraints :
1 <= N <= 10^3
Sample Input :
4
9 8 10 8
8
Sample Output :
3
*/
#include<bits/stdc++.h>
using namespace std;

int lastOccurence(int *a, int size, int num) {
	if (size == 0) {
		return -1;
	}

	int smallOutput	= lastOccurence(a + 1, size - 1, num);

	if (smallOutput != -1) {
		return smallOutput + 1;
	}
	if (a[0] == num) {
		return 0;
	}
	return -1;



}


int main() {
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int a[] = {10, 20, 30, 10, 40, 20, 50};
	int size = 7;
	int num = 0;
	cin >> num;

	cout << lastOccurence(a, size, num);
	return 0;
}