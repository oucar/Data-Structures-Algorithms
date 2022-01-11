#include <iostream>

class Node
{

private:
    int data;
    struct Node *next;

public:
    void create(int *A, int n);
    void display(Node *p);

    // global pointer, accessible from everywhere
} *first = NULL;

// create a linked list from given Array, with n elements
void Node::create(int *A, int n)
{

    // t: node we're newly adding
    // last: will help us to add a new element at the end of a linked list
    Node *t;
    Node *last;

    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;

        last->next = t;
        last = t;
    }
} // end create();

// display the linked list
void Node::display(Node *p){
    
    while(p != NULL){
        std::cout << p->data << " ";
        p = p->next;
    }
} // end display();


int main()
{
    Node node;

    int A[] = {3,5,7,10,15};
    node.create(A, 5);
    node.display(first);

    return 0;
}