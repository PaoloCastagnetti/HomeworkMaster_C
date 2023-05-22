#pragma once
#include "BinaryTreeNode.h"
class MyBinaryTree {
private:
	BTNode* root;
	void insertRecursive(BTNode* currentNode, int value);
	void inOrderTraversalRecursive(BTNode* currentNode);

public:
	MyBinaryTree();
	void insert(int value);
	void inOrderTraversal();
};