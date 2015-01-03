#include "template.cpp"

BinaryTreeNode * get_next(BinaryTreeNode *nd) {
	if (!nd)return nullptr;
	if (nd->right){
		auto ptr = nd->right;
		while (ptr->left) ptr = ptr->left;
		return ptr;
	} else {
		auto parent = nd->parent;
		while (parent && parent->val <= nd->val) {
			nd = parent;
			parent = parent->parent;
		}
		return parent;
	}
}
