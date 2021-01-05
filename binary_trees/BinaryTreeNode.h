template <typename T>
class BinaryTreeNode {
public:
	T data;
	BinaryTreeNode *left = NULL;
	BinaryTreeNode *right = NULL;

	BinaryTreeNode(T data) {
		this->data = data;
	}

	~BinaryTreeNode() {
		delete left;
		delete right;
	}
};