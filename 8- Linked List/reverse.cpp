#include <iostream>

class Node {
private:
	int data;
	Node* next;

public:
	void create(int *Arr, int size);
	void display(Node* p);
	void reverseLinks(Node* p);
	void reverseRecursion(Node* q, Node* p);

}*first = NULL;;


void Node::create(int *Arr, int n) {

	Node* last;
	Node* t;

	first = new Node;
	first->data = Arr[0];
	first->next = NULL;
	last = first;

	for (int i = 1; i < n; i++){
		t = new Node;
		t->data = Arr[i];
		t->next = NULL;

		last->next = t;
		last = t;

	} // end for

} // end create()

void Node::display(Node *p) {

	if (p != NULL) {
		std::cout << p->data << " ";
		display(p->next);
	} // end if 

} // end display


void Node::reverseLinks(Node* p) {

	Node *q; 
	Node *r; 
	q = r = NULL;

	while (p != NULL) {
		r = q;
		q = p;
		p = p->next;
		q->next = r;
	} // end while
	first = q;											// because r becomes null...
		
}	// end reverse

void Node::reverseRecursion(Node* q, Node* p) {

	if (p != NULL) {
		reverseRecursion(p, p->next);
		p->next = q;									// will be called at returning time....
	}
	else {
		first = q;										// if p reaches at the end, make q the first node
	}

}



int main() {

	Node node;
	int A[] = { 3,5,7,10,10,10,10,15 };                // create a linked list using these elements
	node.create(A, 8);
	node.display(first);
	node.reverseLinks(first);
	std::cout << std::endl;
	node.display(first);
	


	return 0;

}