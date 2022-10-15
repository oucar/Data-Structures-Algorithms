#include <iostream>

class Node {
private:
	int data;

public:
	Node* next;
	void create(int* Arr, int size);
	void display(Node* p);
	int isLoop(Node* p);


}*first = NULL;


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


int Node::isLoop(Node *f) {
	Node* p, * q;
	p = q = f;

	while ( p != NULL && q != NULL && p != q) {	// while (p && q)
		p = p->next;
		q = q->next;
		if (q != NULL)
			q = q->next;
	} // end while

	if (p == q) return true;
	else return false;

}


int main() {

	Node node;
	Node *t1, *t2;	

	int A[] = { 50, 40, 10, 30, 20 };
	node.create(A, 5);


	t1 = first->next->next;					// set next as a public member to access from the main function
	t2 = first->next->next->next;

	t2->next = t1;							// ! loop


	int stat = node.isLoop(first);			// should return 1
	std::cout << "is there a loop: " << stat;


	return 0;

}