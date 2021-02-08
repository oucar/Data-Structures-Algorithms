#include <iostream>
class Node{

private:
    int data;
    struct Node *next;

public:
    void create(int *A, int n);
    void display(Node *p);
    int count(Node *p);
    int countRecursive(Node *p);
    int add(Node *p);
    int addRecursive(Node*p);

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

int Node::count(Node *p) {

    int counter = 0;

    while(p!=NULL){
        counter++;
        p = p->next;
    } // end while

    return counter;
} // end count()

int Node::countRecursive(Node *p) {

    if(p==NULL) return 0;
    else {
        return (countRecursive(p->next)+1);
    } // end else

} // end countRecursive()


int Node::add(Node *p) {

    int sum = 0;

    while(p!=NULL){
        sum = sum + p->data;
        p = p->next;
    } // end while
    return sum;

} // end add()

int Node::addRecursive(Node *p) {

    if(p==NULL) return 0;
    else return (addRecursive(p->next) + p->data);

} // end addRecursive()

int main() {

    Node node;

    int A[] = {3,5,7,10,15};                // create a linked list using these elements

    node.create(A,5);                        // linked list created!
    node.display(first);

    // COUNT
    int countIter = node.count(first);
    int countRec = node.countRecursive(first);

    std::cout << "\nTotal node count (iterative): " << countIter << std::endl;
    std::cout << "Total node count (recursive): " << countRec << std::endl;

    // ADD
    int addIter = node.add(first);
    int addRec = node.addRecursive(first);

    std::cout << "Sum (iterative): " << addIter << std::endl;
    std::cout << "Sum (recursive): " << addRec << std::endl;


    return 0;
}