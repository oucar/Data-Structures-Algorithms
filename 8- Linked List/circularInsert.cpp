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
	void Insert(int index, int x);
	int findLength();
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

int CircularLinkedList::findLength() {

	int length = 0;
	Node* p = head;

	do {
		length++;
		p = p->next;
	} while (p->next != NULL);

} // end findLength()

void CircularLinkedList::Insert(int index, int x) {

	Node* p = head;
	Node* t = NULL;

	t = new Node;
	t->data = x;

	if (index < 0 || index > findLength()){ // check whether given index is valid or not
		std::cout << "Invalid length!";
		return;
	} // end if 
	

	if (index == 0) {

		if (head == NULL) {					// insert as the first node
			head = t;
			t->next = t;
		} else {							// insert before the head!
			while (p->next != head)
				p = p->next;
			t->next = head;					// t points to the head
			p->next = t;					// last node points to the t (which makes it circular)
			head = t;						// t becomes the new head
		} // end inner conditionals

	} else {

		for (int i = 0; i < index - 1; i++)
			p = p->next;
		t->next = p->next;			
		p->next = t;
	
	} // end outer conditionals



} // end insert();


int main() {
	int A[] = { 1, 3, 5, 7, 9 };

	CircularLinkedList cl(A, sizeof(A) / sizeof(A[0]));

	cl.Display();
	return 0;
}