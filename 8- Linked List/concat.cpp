#include <iostream>

class Node {
private:
	int data;
	Node* next;

public:
	void create(int* Arr, int size);
	void create2(int* Arr, int size);
	void create3(int* Arr, int size);
	void display(Node* p);
	void concat(struct Node *p, struct Node *q);

}*first = NULL, *second = NULL, *third = NULL;


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

void Node::create2(int* Arr, int n) {

	Node* last;
	Node* t;

	second = new Node;
	second->data = Arr[0];
	second->next = NULL;
	last = second;

	for (int i = 1; i < n; i++) {
		t = new Node;
		t->data = Arr[i];
		t->next = NULL;

		last->next = t;
		last = t;

	} // end for

} // end create()

void Node::create3(int* Arr, int n) {

	Node* last;
	Node* t;

	first = new Node;
	first->data = Arr[0];
	first->next = NULL;
	last = first;

	for (int i = 1; i < n; i++) {
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


void Node::concat(Node *p, Node *q) {
	third = p;

	while (p->next != NULL)
		p = p->next;

	p->next = q;

}



int main() {

	Node node;
	int A[] = { 50, 40, 10, 30, 20 };
	int B[] = { 1,2,3,4,5 };
	node.create(A, 5);
	node.create2(B, 5);

	node.display(first);
	std::cout << std::endl;
	node.display(second);

	std::cout << '\n';
	node.concat(first, second);
	node.display(third);
	


	return 0;

}