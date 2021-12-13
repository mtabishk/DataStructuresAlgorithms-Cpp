/*
Check Number
Send Feedback
Given an array of length N and an integer x, you need to find if x is present in the array or not. Return true or false.
Do this recursively.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x
Output Format :
'true' or 'false'
Constraints :
1 <= N <= 10^3
Sample Input 1 :
3
9 8 10
8
Sample Output 1 :
true
Sample Input 2 :
3
9 8 10
2
Sample Output 2 :
false
*/

#include<bits/stdc++.h>
using namespace std;

bool isNumberPresent(int *a, int size, int num) {
	// base condition
	if (size == 0) {
		return false;
	}

	// check
	if (a[0] == num) {
		return true;
	}

	// small calculation
	bool smallOutput = isNumberPresent(a + 1, size - 1, num);

	return smallOutput;


}

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int a[] = {10, 20, 30, 40, 50};
	int size = 5;
	int num = 30;

	cout << isNumberPresent(a, size, num) << endl;
	return 0;
}