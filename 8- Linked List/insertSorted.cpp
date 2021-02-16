#include <iostream>
class Node{

private:
    int data;
    struct Node *next;

public:
    void create(int *A, int n);
    void display(Node *p);
    void insertSorted(struct Node *p, int x);



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

void Node::insertSorted(struct Node *p, int x) {

    struct Node *t;                         // new node
    struct Node *q = NULL;                  //tail

    t = new Node;
    t->data = x;
    t->next = NULL;

    if(first == NULL)                       // is the linked list empty?
        first = t;
    else{
        while (p!=NULL && p->data < x){
            q = p;                          // tail follows p
            p = p->next;
        }// end while
        if(p==first){                        // if it's smaller than the first node
            t->next = first;
            first = t;
        } else{
            t->next = q->next;
            q->next = t;
        } // end conditionals

    } // end conditionals

} // end insertSorted()

void Node::display(Node *p){               // We use *p parameter and *first will be passed here!

    if(p!=NULL){
        std::cout << p-> data << " ";
        display(p->next);
    } // end if

} // end display



int main() {

    Node node;

    int A[] = {3,5,7,10,15};                // create a linked list using these elements
    node.create(A, 5);
    node.display(first);
    std::cout << std::endl;

    node.insertSorted(first,70);
    node.insertSorted(first, 2);
    node.display(first);

    return 0;
}