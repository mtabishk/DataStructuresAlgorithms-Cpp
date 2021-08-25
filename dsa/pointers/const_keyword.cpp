/* const keyword if added with an object then that object value cannot be changed anywhere in the code */

// const is mainly used with reference & in the function definitions while we are doing function calling.
// ex., const int &i

#include <iostream>
using namespace std;

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int j = 12;
	const int &k = j;

	//k++; Here k is a constant refrence variable. so we cant change value of j using refrence variable k
	j++;
	cout << j << " " << k << endl;

	return 0;
}