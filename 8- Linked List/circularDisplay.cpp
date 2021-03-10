#include <iostream>
class Node {
public:
	int data;
	Node* next;

public:
	void create(int* Arr, int size);
	void display(Node* p);
};

class CircularLinkedList {
private:
	Node* head;

public:

	void Display();
	Node* getHead() { return head; }			// in case we need it
	CircularLinkedList(int* A, int n);
	~CircularLinkedList();
};

CircularLinkedList::CircularLinkedList(int* A, int n) {
	Node* t;
	Node* tail;

	head = new Node;

	head->data = A[0];
	head->next = head;
	tail = head;

	for (int i = 1; i < n; i++) {
		t = new Node;
		t->data = A[i];

		t->next = tail->next;					// tail = head for the first call!
		tail->next = t;
		tail = t;
	}
} // end constructor

CircularLinkedList::~CircularLinkedList() {
	Node* p = head;

	while (p->next != head) {					// empty cl
		p = p->next;
	}

	while (p != head) {							// regular cl
		p->next = head->next;
		delete head;
		head = p->next;
	}

	if (p == head) {							// head is the only node
		delete head;
		head = nullptr;
	}

} // end destructor

void CircularLinkedList::Display() {
	Node* p = head;

	do {
		std::cout << p->data << " -> ";
		p = p->next;
	} while (p != head);

	std::cout << std::endl;
} // end display()

int main() {
	int A[] = { 1, 3, 5, 7, 9 };

	CircularLinkedList cl(A, sizeof(A) / sizeof(A[0]));

	cl.Display();
	return 0;
}