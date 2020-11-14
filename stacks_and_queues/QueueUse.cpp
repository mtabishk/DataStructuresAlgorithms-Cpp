#include <iostream>
using namespace std;
#include "QueueUsingLinkedListTemplates.h"

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	Queue<int> q;

	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.enqueue(60);


	cout << q.front() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;

	cout << q.getSize() << endl;
	cout << q.isEmpty() << endl;

	cout << q.front() << endl;

}

