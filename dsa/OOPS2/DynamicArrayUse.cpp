#include "DynamicArrayClass.cpp"
#include <iostream>
using namespace std;

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	DynamicArray d1;
	d1.add(10);
	d1.add(20);
	d1.add(30);
	d1.add(40);
	d1.add(50);
	d1.add(60);

	d1.print();

	DynamicArray d2(d1);

	DynamicArray d3;
	d3 = d1;

	d1.add(0, 100);
	d1.print();
	d2.print();
	d2.print();
	d1.add(10);

	return 0;
}