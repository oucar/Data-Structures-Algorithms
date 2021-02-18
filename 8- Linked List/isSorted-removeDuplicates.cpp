#include <iostream>
class Node{

private:
    int data;
    struct Node *next;

public:
    void create(int *A, int n);
    void display(Node *p);
    bool isSorted(Node *p);
    void removeDuplicates(Node *p);          // my version (has bugs removing more than one duplicates)
    void removeDuplicates2(Node *p);         // teacher's version

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

bool Node::isSorted(Node *p) {

    int x = -32768;

    while (p != NULL){

        if(p->data < x)
            return false;
        x = p->data;
        p = p->next;

    } // end while
    return true;

} // end isSorted();

// my version
void Node::removeDuplicates(Node *p) {

    Node *q = NULL;

    if(!isSorted(p)) {
        std::cout << "Linked list is not sorted!\n";
    } else {                                            // link list is sorted
        q = p;
        p = p->next;
            while (p != NULL){
                if(p->data == q-> data){
                    std::cout << p->data << " and " << q->data << " are duplicated!\n";
                    q->next = p->next;
                    delete p;
                    p = q->next;
                }
                q = p;
                p = p->next;
            } //end while
    } // end conditionals

} // end removeDuplicates()

void Node::removeDuplicates2(Node *p) {

    Node *q = first->next;              // node we will be deleting

    while (q != NULL) {
        if (p->data != q->data) {
            p = q;
            q = q->next;
        } else {
            p->next = q->next;
            delete q;                   // duplicated node has been deleted
            q = p->next;                // keeps iterating from the next node
        } // end else
    } // end while
}

int main() {

    Node node;

    int A[] = {3,5,7,10,10,10,10,15};                // create a linked list using these elements
    node.create(A, 8);
    node.display(first);
    std::cout << std::endl;
    std::cout << "Is sorted?: " << node.isSorted(first) << std::endl;
    //node.removeDuplicates(first);
    node.removeDuplicates(first);
    node.display(first);

    return 0;
}