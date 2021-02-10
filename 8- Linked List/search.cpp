#include <iostream>
class Node{

private:
    int data;
    struct Node *next;

public:
    void create(int *A, int n);
    void display(Node *p);
    Node *search(Node *p, int key);
    Node *searchImproved(Node *p, int key);
    Node *searchRecursive(Node *p, int key);
    int getData(Node *p){ return p->data; };


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

Node * Node::search(Node *p, int key) {

    while (p!=NULL){
        if(key == p->data)
            return p;
        p = p->next;
    } // end while
    return NULL;
} // end search()


Node * Node::searchRecursive(Node *p, int key) {

    if(p == NULL)
        return NULL;

    if (p->data == key)
        return p;

    else searchRecursive(p->next, key);

} // end searchRecursive


Node * Node::searchImproved(Node *p, int key) {

    Node *q; // tail
    while(p!=NULL){

        if(key==p->data) {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        } else {
            q = p;
            p = p->next;
        } // end conditionals
    } //end while

    return NULL;


} // end searchImproved()



int main() {

    Node node;

    int A[] = {3,5,7,10,15};                // create a linked list using these elements

    node.create(A,5);                        // linked list created!
    node.display(first);

    Node *temp = node.search(first, 10);        // IMPORTANT! This is how you use things you passed
    if(temp) std::cout << "\nKey is Found! -->" << node.getData(temp);
    else std::cout << "\nKey is not Found! :( ";

    Node *tempRec = node.searchRecursive(first, 103);
    if(tempRec) std::cout << "\nKey is Found using Recursion! ---> " << node.getData(tempRec);
    else std::cout << "\nKey is not Found, even though I used Recursion :( ";

    Node *tempImproved = node.searchImproved(first,10);
    if(tempImproved) std::cout << "\nKey is Found and moved to the head! --->"  << node.getData(tempImproved);
    else std::cout << "\n Key is not Found!";
    std::cout << std::endl;
    node.display(first);


    return 0;
}