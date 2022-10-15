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

    Node *last;
    Node *t;

    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++) {

        t = new Node;
        t->data = A[i];
        t->next = NULL;

        last->next = t;
        last = t;
    }

} // end create();

void Node::display(Node *p){               // We use *p parameter and *first will be passed here!

    if(p!=NULL){
        std::cout << p-> data << " ";
        display(p->next);
    } // end while

} // end display


int main() {

    Node node;

    int A[] = {3,5,7,10,15};                // create a linked list using these elements

    node.create(A,5);                        // linked list created!
    node.display(first);

    return 0;
}