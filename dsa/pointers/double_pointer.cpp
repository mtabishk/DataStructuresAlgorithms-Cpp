#include <iostream>
using namespace std;

void increment1(int **q) { q = q + 1;};
void increment2(int **q) { *q = *q + 1;};
void increment3(int **q) { **q = **q + 1;};

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int i = 10;
	int *p = &i;
	int **p2 = &p;

	cout << " Before calling increment() functions: " << endl;
	cout << i << endl;
	cout << *p2 << endl;
	cout << **p2 << endl;

	increment1(p2);
	increment2(p2);
	increment3(p2);

	cout << " After calling increment() functions: " << endl;
	cout << i << endl;
	cout << *p2 << endl;
	cout << **p2 << endl;
	return 0;
}