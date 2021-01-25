/**********************************************************
    Following is the Binary Tree Node class structure

    template <typename T>
    class BinaryTreeNode {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

***********************************************************/
#include <climits>
bool isBSTConstraint(BinaryTreeNode<int> *root, int min = INT_MIN, int max = INT_MAX) {
    if (root == NULL) {
        return true;
    }

    if (root->data < min || root->data > max) {
        return false;
    }

    bool isLeftOK = isBSTConstraint(root->left, min, root->data - 1);
    bool isRightOK = isBSTConstraint(root->right, root->data, max);

    return isLeftOK && isRightOK;
}



bool isBST(BinaryTreeNode<int> *root) {
    return isBSTConstraint(root);
}