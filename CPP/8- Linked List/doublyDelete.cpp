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
	int getLength();							// helper function for Insert()
	void Insert(int index, int x);
	int Delete(int index);
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
} // end Display()

int DoublyLinkedList::getLength() {
	int length = 0;
	Node* p = head;
	while (p != NULL) {
		length++;
		p = p->next;
	} // end while
	return length;
} // end getLength()

void DoublyLinkedList::Insert(int index, int x) {

	if (index<0 || index > getLength())
		return;

	Node* p = head;
	Node* t = new Node;
	t->data = x;

	if (index == 0) {							//insert as the first element (before head)
		
		t->prev = NULL;
		t->next = head;
		head->prev = t;
		head = t;
	} else {									// insert in a given index
		for (int i = 0; i < index - 1; i++)
			p = p->next;
		
		t->next = p->next;
		t->prev = p;
		if (p->next != NULL)					// if t has another node after node
			p->next->prev = t;
		p->next = t;

	} // end conditionals
} // end Insert()

int DoublyLinkedList::Delete(int index) {
	
	int x = -1;
	Node* p = head;								// reference to head

	if (index < 0 || (index > getLength()-1)) return x;

	
	if (index == 0) {							// delete the first node
		p = head;
		x = p->data;
		head = head->next;
		if (head != NULL) head->prev = NULL;	// what if there is only one node and I want to delete that node?
		delete p;
	} else {									// delete from the given index
		p = head;
		for (int i = 0; i < index; i++) p = p->next;
		x = p->data;
		p->prev->next = p->next;				// # P # ==> # --> # 
		if (p->next != NULL)					// what if it is the last node
			p->next->prev = p->prev;			// # P # ==> # <--> #
		delete p;
	} // end conditionals
	return x;
} // end Delete();


int main() {
	int A[] = { 1, 3, 5, 7, 9 };

	DoublyLinkedList dl(A, sizeof(A) / sizeof(A[0]));
	dl.Display();

	dl.Insert(0, 30);
	dl.Insert(6, 99);
	dl.Insert(3, 100);
	dl.Display();

	std::cout << " -----------------------\n";
	std::cout << "Deleted by the function: "<< dl.Delete(0) << std::endl;
	dl.Display();
	std::cout << "Deleted by the function: " << dl.Delete(7) << std::endl;
	dl.Display();
	std::cout << "\nDestructors: \n";

	return 0;
}