/*
Power

Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to return the answer.
Do this recursively.
Input format :
Two integers x and n (separated by space)
Output Format :
x^n (i.e. x raise to the power n)
Constraints :
1 <= x <= 30
0 <= n <= 30
Sample Input 1 :
 3 4
Sample Output 1 :
81
Sample Input 2 :
 2 5
Sample Output 2 :
32
*/

#include<bits/stdc++.h>
using namespace std;

int xPowern(int x, int n) {
	// base case
	if (n == 0) return 1;

	// assuming for smaller problem
	int smallOutput = xPowern(x, n - 1);

	// solving main problem
	int output = x * smallOutput;

	return output;
}

int main() {
	//freopen("input.txt", "r", "stdin");
	//freopen("output.txt", "w", "stdout");

	int x = 0, n = 0;
	cin >> x >> n;
	cout << xPowern(x, n) << endl;
	return 0;
}