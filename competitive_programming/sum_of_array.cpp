/*
Sum of Array
Send Feedback
Given an array of length N, you need to find and return the sum of all elements of the array.
Do this recursively.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Output Format :
Sum
Constraints :
1 <= N <= 10^3
Sample Input 1 :
3
9 8 9
Sample Output 1 :
26
Sample Input 2 :
3
4 2 1
Sample Output 2 :
7
*/

#include<bits/stdc++.h>
using namespace std;

int sumOfArray(int *a, int size) {
	if (size == 0) return 0;

	int smallOutput = sumOfArray(a + 1, size - 1);
	return a[0] + smallOutput;

}

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int a[] = {10, 20, 30, 40, 50 };
	int size = 5;

	cout << sumOfArray(a, size) << endl;

	return 0;
}