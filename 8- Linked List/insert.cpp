#include <iostream>
class Node{

private:
    int data;
    struct Node *next;

public:
    void create(int *A, int n);
    void display(Node *p);
    int getData(Node *p){ return p->data; };
    int count(struct Node *p);
    void insert(Node *p, int index, int value);


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
    } // end if

} // end display

int Node::count(struct Node *p) {

    int c = 0;
    while(p!=NULL){
        c++;
        p = p->next;
    } // end while

    return c;

}

void Node::insert(Node *p, int index, int value) {

    int length = count(first);

    if(index < 0 || index > length)
        return;

    // ELSE
    Node *t = new Node;
    t->data = value;

    if(index == 0){
        t->next = first;
        first = t;
    } else {

        for(int i = 0; i < index-1; i++ )
            p = p->next;

        t->next = p->next;
        p->next = t;

    }


}


int main() {

    Node node;

    int A[] = {3,5,7,10,15};                // create a linked list using these elements

    node.create(A,5);                        // linked list created!
    node.display(first);
    std::cout << std::endl;
    node.insert(first,2,31);
    node.display(first);



    return 0;
}