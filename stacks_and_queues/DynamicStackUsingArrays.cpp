#include <climits>
#include <iostream>
using namespace std;

class StackUsingArray {
private:
	int *data;
	int nextIndex;
	int capacity;
public:
	StackUsingArray() {
		// Let our array size == 4
		data = new int[4];
		nextIndex = 0;
		capacity = 4;
	}

	// return no. of elements present in the stack
	int size() {
		return nextIndex;
	}

	bool isEmpty() {
		return (nextIndex == 0);
	}

	// insert element in the stack
	void push (int element) {
		if (nextIndex == capacity) {
			// Increasing the size of Stack Dynamically
			int *newData = new int [2 * capacity];
			for (int i = 0; i < capacity; i++) {
				newData[i] = data[i];
			}
			capacity = 2 * capacity;
			delete [] data;
			data = newData;
			return;
		} else {
			data[nextIndex] = element;
			nextIndex++;
		}
		return;
	}

	// delete element in the stack
	int pop() {
		if (isEmpty()) {
			cout << "Stack is Empty" << endl;
			return INT_MIN;
		}
		nextIndex--;
		return data[nextIndex];
	}

	int top() {
		if (isEmpty()) {
			cout << "Stack is Empty" << endl;
			return INT_MIN;
		}
		return data[nextIndex - 1];
	}

};