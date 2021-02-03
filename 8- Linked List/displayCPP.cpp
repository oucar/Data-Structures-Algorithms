#include <iostream>

class Node{

private:
    int data;
    struct Node *next;

public:
    void create(int *A, int n);
    void display(Node *p);

}*first = NULL;                              // global pointer, accessible from everywhere.


void Node::create(int *A, int n){

    struct Node *t;
    struct Node *last;                      // will help to add a new element at the end of the linked list

    first = new Node;
    first->data = A[0];
    first->next=NULL;
    last = first;

    for(int i = 1; i < n; i++){

        t = new Node;
        t->data = A[i];
        t->next = NULL;

        last->next = t;                     // new node becomes the last node's next node.
        last = t;                           // last element becomes the new node

    } // end for

} // end create();

void Node::display(Node *p){               // We use *p parameter and *first will be passed here!

    while(p != NULL){
        printf("%d ", p->data);
        p = p->next;
    } // end while

} // end display


int main() {

    Node node;

    int A[] = {3,5,7,10,15};                // create a linked list using these elements

    node.create(A,5);                        // linked list created!
    node.display(first);

    return 0;
}
