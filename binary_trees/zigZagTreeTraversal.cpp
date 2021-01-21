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

#include <stack>
void zigZagOrder(BinaryTreeNode<int> *root) {
    // Write your code here
    stack<BinaryTreeNode<int> *> s1;
    stack<BinaryTreeNode<int> *> s2;
    s1.push(root);

    int currentLevelRemaining = 1;
    int nextLevelCount = 0;
    bool flag = true;

    while ( !s1.empty() || !s2.empty() ) {
        if (flag) {
            BinaryTreeNode<int> *top = s1.top();
            s1.pop();
            cout << top->data << " ";
            currentLevelRemaining--;

            if (top->left != NULL) {
                s2.push(top->left);
                nextLevelCount++;
            }

            if (top->right != NULL) {
                s2.push(top->right);
                nextLevelCount++;
            }

            if (currentLevelRemaining == 0) {
                cout << "\n";
                currentLevelRemaining = nextLevelCount;
                nextLevelCount = 0;
                flag = false;
            }
        } else {
            BinaryTreeNode<int> *top = s2.top();
            s2.pop();
            cout << top->data << " ";
            currentLevelRemaining--;


            if (top->right != NULL) {
                s1.push(top->right);
                nextLevelCount++;
            }

            if (top->left != NULL) {
                s1.push(top->left);
                nextLevelCount++;
            }


            if (currentLevelRemaining == 0) {
                cout << "\n";
                currentLevelRemaining = nextLevelCount;
                nextLevelCount = 0;
                flag = true;
            }
        }

    }
}