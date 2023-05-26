#pragma once
class BTNode {
public:
    int data;
    BTNode* left;
    BTNode* right;

    /*
    * @brief Node constructor with data
    * @param int data to insert for head of the Tree
    * @return the instance of a Node of a BinaryTree
    */
    BTNode(int);
};