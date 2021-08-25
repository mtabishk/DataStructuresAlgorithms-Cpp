vector<Node<int> *> constructLinkedListForEachLevel(BinaryTreeNode<int> *root) {
	// Write your code here
	vector<Node<int> *> output;

	if (root == NULL) {
		return output;
	}

	queue<BinaryTreeNode<int> *> pendingNodes;
	pendingNodes.push(root);

	int currentLevelRemaining = 1;
	int nextLevelCount = 0;

	Node<int> *currentLevelHead = NULL;
	Node<int> *currentLevelTail = NULL;

	while ( !pendingNodes.empty() ) {
		BinaryTreeNode<int> *first = pendingNodes.front();
		pendingNodes.pop();

		Node<int> *newNode = new Node<int>(first->data);

		if (currentLevelHead == NULL) {
			currentLevelHead = newNode;
			currentLevelTail = newNode;
		} else {
			currentLevelTail->next = newNode;
			currentLevelTail = newNode;
		}

		if (first->left != NULL) {
			pendingNodes.push(first->left);
			nextLevelCount++;
		}
		if (first->right != NULL) {
			pendingNodes.push(first->right);
			nextLevelCount++;
		}

		currentLevelRemaining--;

		if (currentLevelRemaining == 0) {
			output.push_back(currentLevelHead);
			currentLevelHead = NULL;
			currentLevelTail = NULL;
			currentLevelRemaining = nextLevelCount;
			nextLevelCount = 0;
		}
	}
	return output;
}