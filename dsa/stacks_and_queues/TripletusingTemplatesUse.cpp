#include "TripletusingTemplates.cpp"
#include <iostream>
using namespace std;

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	/* create a triplet such that:
	1. int
	2. double
	3. char
	*/

	Pair <int, Pair<double, char>> p;

	p.setX(20);

	Pair<double, char> p2;
	p2.setX(100.55);
	p2.setY('t');

	// p.setY() expects value in Pair<double,char>
	p.setY(p2);

	cout << p.getX() << endl;
	//cout << p.getY() << endl;
	cout << p.getY().getX() << endl;
	cout << p.getY().getY() << endl;

	return 0;
}