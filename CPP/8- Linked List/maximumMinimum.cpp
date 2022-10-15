#include <iostream>
class Node{

private:
    int data;
    struct Node *next;

public:
    void create(int *A, int n);
    void display(Node *p);
    int maximum(Node *p);
    int minimum(Node *p);


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

int Node::maximum(Node *p) {

    int max = -32768;
    while(p!=NULL){
        if(p->data > max)
            max = p->data;
        p = p->next;
    }// end while
    return max;
} // end maximum()

int Node::minimum(Node *p) {

    int min = 32768;
    while(p!=NULL){
        if (p->data < min )
            min = p->data;
        p = p->next;
    } // end while
    return min;
} // end minimum():

int main() {

    Node node;

    int A[] = {3,5,7,10,15};                // create a linked list using these elements

    node.create(A,5);                        // linked list created!
    node.display(first);

    int min = node.minimum(first);
    int max = node.maximum(first);

    std::cout << "\nMin: " << min << std::endl;
    std::cout << "Max: " << max << std::endl;

    return 0;
}