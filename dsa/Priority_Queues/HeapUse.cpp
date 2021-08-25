#include "PriorityQueue.h"
#include <iostream>
using namespace std;

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	PriorityQueue p;

	p.insert(100);
	p.insert(15);
	p.insert(4);
	p.insert(17);
	p.insert(21);
	p.insert(67);

	cout << p.getSize() << endl;
	cout << p.getMin() << endl;

	while (!p.isEmpty()) {
		cout << p.removeMin() << " ";
	}
	cout << endl;

	return 0;
}