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
	Node *getPrev() const { return m_prev; }
	Node *getNext() const {return m_next; }
	Item &getItem() { return m_itm; }
	void setPrev(Node *prev) { m_prev = prev; }
	void setNext(Node *next) { m_next = next; }
};


Slist::Slist(void)
{
	top = 0;
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

void Slist::visit(tpf f)
{
	Node *node = head;
	while(node != NULL) {
		f(node->getItem());
		node = node->getNext();
	}
}