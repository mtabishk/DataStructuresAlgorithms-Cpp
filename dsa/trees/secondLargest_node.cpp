#include <iostream>
#include <queue>
#include <vector>
#include <climits>
using namespace std;

template <typename T>
class TreeNode {
public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data) { this->data = data; }

    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};


TreeNode<int>* takeInputLevelWise() {
    int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++) {
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}

template <typename T>
class SecondLargest {
public:
    TreeNode<T> *largest;
    TreeNode<T> *secondLargest;

    SecondLargest(TreeNode<T> *first, TreeNode<T> *second) {
        largest = first;
        secondLargest = second;
    }

};

SecondLargest<int> *getSecondLargestNodeHelper(TreeNode<int> *root) {

    if (root == NULL) {
        return new SecondLargest<int>(NULL, NULL);
    }

    SecondLargest<int> *ans = new SecondLargest<int>(root, NULL);

    for (int i = 0; i < root->children.size(); i++) {
        SecondLargest<int> *childAns = getSecondLargestNodeHelper(root->children[i]);

        if (childAns->largest->data > ans->largest->data) {
            if (childAns->secondLargest == NULL) {
                ans->secondLargest = ans->largest;
                ans->largest = childAns->largest;
            } else {
                if (childAns->secondLargest->data > ans->largest->data) {
                    ans->secondLargest = childAns->secondLargest;
                    ans->largest = childAns->largest;
                } else {
                    ans->secondLargest = ans->largest;
                    ans->largest = childAns->largest;
                }
            }

        } else {
            if (ans->largest->data != childAns->largest->data && (ans->secondLargest == NULL || childAns->largest->data > ans->secondLargest->data)) {
                ans->secondLargest = childAns->largest;
            }
        }
    }
    return ans;
}
TreeNode<int>* getSecondLargestNode(TreeNode<int>* root) {
    // Write your code here
    return getSecondLargestNodeHelper(root)->secondLargest;
}

int main() {
    TreeNode<int>* root = takeInputLevelWise();

    TreeNode<int>* ans = getSecondLargestNode(root);

    if (ans != NULL) {
        cout << ans->data;
    } else {
        cout << INT_MIN;
    }

}