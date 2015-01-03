struct BinaryTreeNode {
	int value;
	struct TreeNode * left;
	struct TreeNode * right;
	struct TreeNode * parent;
	BinaryTreeNode(int val)
		:value(val), left(NULL), right(NULL), parent(NULL){};
};
