BinaryTreeNode<int>* removeLeafNodes(BinaryTreeNode<int> *root) {
    // Write your code here
    if (root == NULL) {
        return root;
    }

    if (root->left == NULL && root->right == NULL) {
        root = NULL;
        return root;
    }

    // recusive calls
    BinaryTreeNode<int> *leftAns = removeLeafNodes(root->left);
    BinaryTreeNode<int> *rightAns = removeLeafNodes(root->right);

    root->left = leftAns;
    root->right = rightAns;

    return root;

}