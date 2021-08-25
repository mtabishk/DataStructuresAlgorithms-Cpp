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

/*
    The first value of the pair must be the minimum value in the tree and
    the second value of the pair must be the maximum value in the tree
*/
#include <climits>
pair<int, int> getMinAndMax(BinaryTreeNode<int> *root) {
    // Write your code here
    if (root == NULL) {
        pair<int, int> p;
        p.first = INT_MAX;
        p.second = INT_MIN;
        return p;
    }

    pair<int, int> leftAns = getMinAndMax(root->left);
    pair<int, int> rightAns = getMinAndMax(root->right);

    int lMin = leftAns.first;
    int lMax = leftAns.second;
    int rMin = rightAns.first;
    int rMax = rightAns.second;




    int maxNode = max(root->data, max(lMax, rMax));
    int minNode = min(root->data, min(lMin, rMin));

    pair<int, int> p;
    p.first = minNode;
    p.second = maxNode;

    return p;
}