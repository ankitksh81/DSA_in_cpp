/* This is a implementation of singly linked list. */

#include <iostream>
#include "node.cpp"
using namespace std;

// Function to take input for a linked list.
Node *input(){
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}

// Function to print data in nodes of a linked list.
void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    /* Creating a node statically.
     * Node n1(1);
     * Node *head = &n1;
     * Node n2(2);
     * n1->next = &n2; */
    
    // Creating nodes using functions.
    Node *head = input();
    print(head);

    /* Creating a node dynamically.
    Node *n3 = new Node(3);
    Node *head2 = n3;
    Node *n4 = new Node(4);
    n3->next = n4; */
    

}
