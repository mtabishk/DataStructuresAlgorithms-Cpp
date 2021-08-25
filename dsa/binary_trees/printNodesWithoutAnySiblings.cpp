void printNodesWithoutSibling(BinaryTreeNode<int> *root) {
	// Write your code here
	if (root == NULL) {
		return;
	} else if (root->left == NULL && root->right != NULL) {
		cout << root->right->data << " ";
	} else if (root->left != NULL && root->right == NULL) {
		cout << root->left->data << " ";
	}

	printNodesWithoutSibling(root->left);
	printNodesWithoutSibling(root->right);
}