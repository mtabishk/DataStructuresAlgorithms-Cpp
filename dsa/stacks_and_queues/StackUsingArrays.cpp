#include <climits>
#include <iostream>
using namespace std;

class StackUsingArray {
private:
	int *data;
	int nextIndex;
	int capacity;
public:
	StackUsingArray(int total_size) {
		data = new int[total_size];
		nextIndex = 0;
		capacity = total_size;
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
			cout << " Stack is Full" << endl;
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