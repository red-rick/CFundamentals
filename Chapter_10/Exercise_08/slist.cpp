#include "slist.h"
#include <cstddef>

class Node
{
private:
	Item m_itm;
	Node *m_prev;
	Node *m_next;
public:
	Node() { m_prev = NULL; m_next = NULL; }
	Node(const Item &itm) { m_prev = NULL; m_next = NULL; m_itm = itm; }
	Node *getPrev() { return m_prev; }
	Node *getNext() {return m_next; }
	void setPrev(Node *prev) { m_prev = prev; }
	void setNext(Node *next) { m_next = next; }
};


Slist::Slist(void)
{
	int top = 0;
}


Slist::~Slist(void)
{
	Node *temp = head;
	while(head != NULL) {
		head = head->getNext();
		delete temp;
		temp = head;
	}
}

bool Slist::addItem(const Item &itm)
{
	if (isFull()) {
		return false;
	} else {
		Node *newNode = new Node(itm);
		if (isEmpty()) {
			head = newNode;
			last = newNode;
		} else {
			last->setNext(newNode);
			newNode->setPrev(last);
			last = newNode;
		}
		top++;
	}
}


bool Slist::isEmpty()
{
	return (top != 0);
}