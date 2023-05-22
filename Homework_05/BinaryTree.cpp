#include "BinaryTree.h"
#include <iostream>
//public
MyBinaryTree::MyBinaryTree() {
	this->root = nullptr;
}

void MyBinaryTree::insert(int value) {
	if (root == nullptr) {
		root = new BTNode(value);
	}
	else {
		insertRecursive(root, value);
	}
}
void MyBinaryTree::inOrderTraversal() {
	inOrderTraversalRecursive(root);
}
//private
void MyBinaryTree::insertRecursive(BTNode* currentNode, int value) {
	if (value < currentNode->data) {
		if (currentNode->left == nullptr) {
			currentNode->left = new BTNode(value);
		}
		else {
			insertRecursive(currentNode->left, value);
		}
	}
	else {
		if (currentNode->right == nullptr) {
			currentNode->right = new BTNode(value);
		}
		else {
			insertRecursive(currentNode->right, value);
		}
	}
}
void MyBinaryTree::inOrderTraversalRecursive(BTNode* currentNode) {
	if (currentNode != nullptr) {
		inOrderTraversalRecursive(currentNode->left);
		std::cout << currentNode->data << " ";
		inOrderTraversalRecursive(currentNode->right);
	}
}