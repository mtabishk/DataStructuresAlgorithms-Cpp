#include <vector>
#include <climits>
class MaxPriorityQueue {
	std::vector<int> data;

public:
	bool isEmpty() {
		return data.size() == 0;
	}

	int getSize() {
		return data.size();
	}

	int getMax() {
		if (isEmpty()) {
			return INT_MAX;
		}

		return data[0];
	}

	void insert(int element) {
		data.push_back(element);

		int childIndex = data.size() - 1;

		while (childIndex > 0) {
			int parentIndex = (childIndex - 1) / 2;

			if ( data[parentIndex] > data[childIndex] ) {
				return;
			}

			int temp = data[childIndex];
			data[childIndex] = data[parentIndex];
			data[parentIndex] = temp;

			childIndex = parentIndex;
		}
	}

	int removeMax() {
		if (isEmpty()) {
			return INT_MAX;
		}
		int ans = data[0];

		// update the root (min element) with last element of data and then remove it.
		data[0] = data[data.size() - 1];
		data.pop_back();

		// Down-Heapify
		int parentIndex = 0;
		int leftChildIndex = (2 * parentIndex) + 1;
		int rightChildIndex = (2 * parentIndex) + 2;

		while (leftChildIndex < data.size() ) {
			int maxIndex = parentIndex;

			// swap
			if (data[leftChildIndex] > data[maxIndex] ) {
				maxIndex = leftChildIndex;
			}

			if (rightChildIndex < data.size() && data[rightChildIndex] > data[maxIndex]) {
				maxIndex = rightChildIndex;
			}

			if (maxIndex == parentIndex) {
				break;
			}

			int temp = data[maxIndex];
			data[maxIndex] = data[parentIndex];
			data[parentIndex] = temp;

			parentIndex = maxIndex;
			leftChildIndex = 2 * parentIndex + 1;
			rightChildIndex = 2 * parentIndex + 2;
		}
		return ans;
	}
};