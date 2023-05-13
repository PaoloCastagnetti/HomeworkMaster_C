#include <iostream>
#include "LinkedListNode.h"

//Constructors
Node::Node() {
	this->data = NULL;
	this->next = NULL;
}

Node::Node(void* value) {
	this->data = value;
	this->next = NULL;
}