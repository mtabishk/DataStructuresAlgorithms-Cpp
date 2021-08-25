// Time Complexity: O(n)
pair<bool, int> isBalancedHelper(BinaryTreeNode<int> *root) {
    if (root == NULL) {
        pair<bool, int> p;
        // first : isBalanced
        p.first = true;
        // second: height
        p.second = 0;
        return p;
    }

    pair<bool, int> leftAns = isBalancedHelper(root->left);
    pair<bool, int> rightAns = isBalancedHelper(root->right);

    pair<bool, int> p;
    p.first = ( (leftAns.first && rightAns.first) && (abs(leftAns.second - rightAns.second) <= 1) );
    p.second = max(leftAns.second, rightAns.second) + 1;
    return p;
}

bool isBalanced(BinaryTreeNode<int> *root) {
    // Write your code here
    if (root == NULL) {
        return true;
    }
    return isBalancedHelper(root).first;
}