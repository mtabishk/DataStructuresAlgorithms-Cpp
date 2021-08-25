#include "Template.cpp"
#include <iostream>
using namespace std;

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	Pair<int, double> p1;
	Pair <char, int> p2;

	p1.setX(20);
	p1.setY(100.32);
	cout << p1.getX() << endl;
	cout << p1.getY() << endl;

	p2.setX('a');
	p2.setY(50);
	cout << p2.getX() << endl;
	cout << p2.getY() << endl;

	return 0;
}