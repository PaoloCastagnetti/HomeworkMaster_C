class Node {
public:
    void* data;
    Node* next;

    /*
    * @brief Node constructor
    * @return the instance of a Node of a LinkedList
    */
    Node();

    /*
    * @brief Node constructor with data
    * @param void* data to insert for head of the list
    * @return the instance of a Node of a LinkedList
    */
    Node(void*);
};