#include <vector>
#include <climits>
class MaxPriorityQueue {
	std::vector<int> pq;

public:
	bool isEmpty() {
		return pq.size() == 0;
	}

	int getSize() {
		return pq.size();
	}

	int getMax() {
		if (isEmpty()) {
			return INT_MAX;
		}

		return pq[0];
	}

	void insert(int element) {
		pq.push_back(element);

		int childIndex = pq.size() - 1;

		while (childIndex > 0) {
			int parentIndex = (childIndex - 1) / 2;

			if ( pq[parentIndex] > pq[childIndex] ) {
				return;
			}

			int temp = pq[childIndex];
			pq[childIndex] = pq[parentIndex];
			pq[parentIndex] = temp;

			childIndex = parentIndex;
		}
	}

	int removeMax() {
		if (isEmpty()) {
			return INT_MAX;
		}
		int ans = pq[0];

		// update the root (min element) with last element of pq and then remove it.
		pq[0] = pq[pq.size() - 1];
		pq.pop_back();

		// Down-Heapify
		int parentIndex = 0;
		int leftChildIndex = (2 * parentIndex) + 1;
		int rightChildIndex = (2 * parentIndex) + 2;

		while (leftChildIndex < pq.size() ) {
			int maxIndex = parentIndex;

			// swap
			if (pq[leftChildIndex] > pq[maxIndex] ) {
				maxIndex = leftChildIndex;
			}

			if (rightChildIndex < pq.size() && pq[rightChildIndex] > pq[maxIndex]) {
				maxIndex = rightChildIndex;
			}

			if (maxIndex == parentIndex) {
				break;
			}

			int temp = pq[maxIndex];
			pq[maxIndex] = pq[parentIndex];
			pq[parentIndex] = temp;

			parentIndex = maxIndex;
			leftChildIndex = 2 * parentIndex + 1;
			rightChildIndex = 2 * parentIndex + 2;
		}
		return ans;
	}
};