/**********************************************************

    Following are the Binary Tree Node class structure and the
    Node class structure

    template <typename T>
    class BinaryTreeNode {
        public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

    template <typename T>
    class Node{
        public:
        T data;
        Node<T> *next;

        Node(T data) {
            this->data = data;
            this->next = NULL;
        }
    };

***********************************************************/
class Base {
public:
    Node<int> *head;
    Node<int> *tail;

    Base() {
        head = NULL;
        tail = NULL;
    }
};

Base constructLinkedListHelper(BinaryTreeNode<int> *root) {
    Base combinedList;

    if (root == NULL)  {
        return combinedList;
    }

    Base leftList = constructLinkedListHelper(root->left);
    Base rightList = constructLinkedListHelper(root->right);

    Node<int> *newNode = new Node<int>(root->data);

    if (leftList.tail != NULL) {
        leftList.tail->next = newNode;
    }

    newNode->next = rightList.head;

    if (leftList.head != NULL) {
        combinedList.head = leftList.head;
    } else {
        combinedList.head = newNode;
    }

    if (rightList.tail != NULL) {
        combinedList.tail = rightList.tail;
    } else {
        combinedList.tail = newNode;
    }

    return combinedList;
}

Node<int>* constructLinkedList(BinaryTreeNode<int> *root) {
    Base list = constructLinkedListHelper(root);
    return list.head;
}