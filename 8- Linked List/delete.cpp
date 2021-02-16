#include <iostream>
class Node{

private:
    int data;
    struct Node *next;

public:
    void create(int *A, int n);
    void display(Node *p);
    int deleteNode(Node *p, int index);


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

int Node::deleteNode(Node *p, int index) {

    int data = -1;

    if(index == 1){                         // first node is being deleted
        Node *p = first;
        first = first->next;
        data = p->data;
        delete p;
        return data;
    } else{                                 // any other node is being deleted
        Node *q = NULL;
        Node *p = first;

        for(int i = 0; i<(index-1); i++){
            q = p;
            p = p->next;
        } // end for
        q->next = p->next;
        data = p->data;
        delete p;
        return data;

    } // end conditionals
} // end deleteNode()




int main() {

    Node node;

    int A[] = {3,5,7,10,15};                // create a linked list using these elements
    node.create(A, 5);
    node.display(first);
    std::cout << std::endl;
    std::cout << node.deleteNode(first,1) << " is deleted\n";
    std::cout << node.deleteNode(first,3) << " is deleted\n";
    node.display(first);

    return 0;
}