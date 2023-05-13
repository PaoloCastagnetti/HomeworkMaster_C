#pragma once
#include "LinkedListNode.h"
class LinkedList {
public:
    Node* head;

    LinkedList();

    /*
    * @brief Function to insert a node at the end of the linked list.
    * @param void* data to insert 
    */
    void insertNode(void* );

    /*
    * @brief Function to print the linked list.
    */
    void printList();

    /*
    * @brief Function to delete the node at given position
    * @param the position given to be deleted
    */
    void deleteNode(int);
};