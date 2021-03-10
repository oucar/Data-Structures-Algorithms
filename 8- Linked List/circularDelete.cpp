// (*sprite).x = sprite->x

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
	int Delete(int index);
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
		std::cout << p->data << " ";
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
	} while (p != head);
	return length;

} // end findLength()

int CircularLinkedList::Delete(int index){

	Node* q;
	Node* p = head;
	int x = -1;

	if (index < 0 || index > findLength()) return -1;
	
	if (index == 0) {								// delete the head node

		while (p->next != head) p = p->next;
		int x = head->data;
		if (head == p) {							// if head is the only node
			delete head;
			head = NULL;
		} else {
			p->next = head->next;
			delete head;
			head = p->next;
		} // end conditionals

	} else {
		
		for (int i = 0; i < index - 2; i++) p = p->next;

		q = p->next;
		p->next = q->next;
		x = q->data;
		delete head;
	}

	return x;

} // end delete();

int main() {
	int A[] = { 1, 3, 5, 7, 9 };

	CircularLinkedList cl(A, sizeof(A) / sizeof(A[0]));
	cl.Display();
	
	int deleted = cl.Delete(0);
	std::cout << "Element " << deleted << " has been deleted!\n";
	cl.Display();

	return 0;
}