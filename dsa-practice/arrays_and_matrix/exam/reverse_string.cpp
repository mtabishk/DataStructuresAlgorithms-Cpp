// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {

	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;

		cout << reverseWord(s) << endl;
	}
	return 0;

}

// } Driver Code Ends


//User function Template for C++

string reverseWord(string str) {
	int len = str.length();
	int si = 0;
	int ei = len - 1;
	while (si < ei) {
		char temp = str[si];
		str[si] = str[ei];
		str[ei] = temp;
		si++;
		ei--;
	}
	return str;
	//Your code here
}