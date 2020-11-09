#include <iostream>

class DynamicArray {
	int *data;
	int nextIndex;
	int capacity;
public:
	DynamicArray() {
		data = new int[5];
		nextIndex = 0;
		capacity = 5;
	}

	void add(int element) {
		if (nextIndex == capacity) {
			int *newData = new int[2 * capacity];
			for (int i = 0; i < capacity; i++) {
				newData[i]  = data[i];
			}
			delete [] data;
			data = newData;
			capacity = 2 * capacity;
		}
		data[nextIndex] = element;
		nextIndex++;
	}

	void add (int i , int element) {
		if (i < nextIndex) {
			data[i] = element;
		} else if (i == nextIndex) {
			add(element);
		} else {
			return;
		}

	}

	// COPY CONSTRUCTOR
	DynamicArray(const DynamicArray &d) {
		this->data = new int[d.capacity];
		for (int i = 0; i < d.nextIndex; ++i) {
			this -> data[i] = d.data[i];
		}
		this->nextIndex = d.nextIndex;
		this->capacity = d.capacity;
	}


	// FOR COPY ASSIGNMENT OPERATOR
	void operator= (const DynamicArray &d) {
		this->data = new int [d.capacity];
		for (int i = 0; i < d.nextIndex; ++i) {
			this->data[i] = d.data[i];
		}
		this->nextIndex = d.nextIndex;
		this->capacity = d.capacity;
	}

	int get(int i) const {
		if (i < nextIndex) {
			return data[i];
		} else {
			return -1;
		}
	}



	void print() const {
		for (int i = 0; i < nextIndex; i++) {
			std::cout << data[i] << " ";
		}
		std::cout << std::endl;
	}
};