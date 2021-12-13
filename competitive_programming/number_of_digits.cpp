/*
Number of Digits
Send Feedback
Given the code to find out and return the number of digits present in a number recursively. But it contains few bugs, that you need to rectify such that all the test cases should pass.
Input Format :
Integer n
Output Format :
Count of digits
Constraints :
1 <= n <= 10^6
Sample Input 1 :
 156
Sample Output 1 :
3
Sample Input 2 :
 7
Sample Output 2 :
1
*/


#include<bits/stdc++.h>
using namespace std;

int count(int n) {
	if (n < 10) {
		return 1;
	}
	int smallAns = count(n / 10);
	return smallAns + 1;
}

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int num = 0;
	cin >> num;
	cout << count(num) << endl;

	return 0;
}