/* Character arrays behave a little bit different than int arrays */

#include <iostream>
using namespace std;

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int  a[] = {10, 20, 30, 40, 50};

	char b[] = "abcde";

	cout << a << endl;
	cout << b << endl;

	int *pa = &a[2];
	cout << *pa << endl;
	cout << pa << endl;

	char *pb = &b[3];
	cout << *pb << endl;
	cout << pb << endl; // Here address is not printed but it prints the char array till NULL Character '\0' is encountered
	char *pb2 = &b[0];
	cout << pb2 << endl;

	// bad practice
	char c1 = 'a';
	char *pc1 = &c1;
	cout << c1 << endl;
	cout << pc1 << endl;


	char str[] = "tabish";
	cout << str << endl;
	// bad practice
	//char *str1 = "hello";

	char ch = 'a';
	char *ptr = &ch;
	cout << *ptr << endl;
	ch++;
	cout << *ptr << endl;

	return 0;
}