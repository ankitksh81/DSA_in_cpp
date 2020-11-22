/* This is the implementation of the Node class for
 * singly Linked list with a constructor */

class Node {
    public:
        int data;
        Node *next;

        Node(int data){
            this->data = data;
            next = NULL;
        }
};
