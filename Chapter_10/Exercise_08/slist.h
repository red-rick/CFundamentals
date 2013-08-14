#pragma once

class Node;

typedef double Item;
typedef tpf void (*pf)(Item &);

class Slist
{
private:
	enum {MAX = 10};
	Node *head;
	Node *last;
	int top;
public:
	Slist();
	~Slist(void);
	bool addItem(const Item &);
	bool isEmpty() const;
	bool isFull() const;
	void visit(tpf f);
};

