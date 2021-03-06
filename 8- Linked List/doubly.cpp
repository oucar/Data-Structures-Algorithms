#include <iostream>
class Node {
public:
	int data;
	Node* next;
	Node* prev;
};

class DoublyLinkedList {
private:
	Node* head;

public:
	void Display();
	DoublyLinkedList(int* A, int n);
	~DoublyLinkedList();
};


DoublyLinkedList::DoublyLinkedList(int* A, int n) {
	Node* t;
	Node* tail;

	head = new Node;
	head->data = A[0];
	head->next = NULL;
	head->prev = NULL;
	tail = head;

	for (int i = 1; i < n; i++) {
		t = new Node;
		t->data = A[i];
		
		t->prev = tail;
		t->next = NULL;
	
		tail->next = t;
		tail = t;
	} // end for
} // end constructor

DoublyLinkedList::~DoublyLinkedList() {
	Node* p = head;

	while (p != NULL) {
		p = p->next;
		std::cout << head->data << " has been deleted ~\n";
		delete head;
		head = p;	
	} // end while
} // end destructor

void DoublyLinkedList::Display() {
	Node* p = head;
	
	while (p != NULL) {
		std::cout << p->data;
		p = p->next;
		if (p != NULL)
			std::cout << " <--> ";
	} // end while

	std::cout << std::endl;
} // end display()

int main() {
	int A[] = { 1, 3, 5, 7, 9 };

	DoublyLinkedList dl(A, sizeof(A) / sizeof(A[0]));
	dl.Display();

	return 0;
}