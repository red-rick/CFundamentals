#pragma once

class Node;

typedef double Item;
typedef void (*tpf)(Item &);

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
	bool isEmpty() const { return (top == 0);}
	bool isFull() const { return (top == MAX); }
	void visit(tpf f);
};

