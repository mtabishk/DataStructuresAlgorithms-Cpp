#include <climits>
#include <iostream>
using namespace std;

template <typename T>

class StackUsingArray {
private:
	T *data;
	int nextIndex;
	int capacity;
public:
	StackUsingArray() {
		// Let our array size == 4
		data = new T[4];
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
	void push (T element) {
		if (nextIndex == capacity) {
			// Increasing the size of Stack Dynamically
			T *newData = new T [2 * capacity];
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
	T pop() {
		if (isEmpty()) {
			cout << "Stack is Empty" << endl;
			return 0;
		}
		nextIndex--;
		return data[nextIndex];
	}

	T top() {
		if (isEmpty()) {
			cout << "Stack is Empty" << endl;
			return 0;
		}
		return data[nextIndex - 1];
	}

};