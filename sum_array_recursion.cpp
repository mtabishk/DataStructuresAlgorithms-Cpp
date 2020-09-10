#include <iostream>
using namespace std;

int add_array(int a[], int size) {
	// cout <<size<<endl;
	if (size == 0)
		return 0;

	int output = a[0] + add_array(a + 1, size - 1);
	int sum = output;
	return sum;

}

int main() {
	int a[] = {7, 4, 9, 11, -3};
	cout << "sum: " << add_array(a, 5) << endl;


	return 0;
}