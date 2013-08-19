#include "stack0.h"

Stack::Stack(int n) // create an empty stack
{
	pitems = new Item[n];
	size = n;
	top = 0;
}

Stack::Stack(const Stack & st)
{
	pitems = new Item[st.size];
	size = st.size;
	top = st.top;
	for (int i =  0; i < size; i++)
		pitems[i] = st.pitems[i];
}

Stack::~Stack()
{
	delete [] pitems;
}

bool Stack::isempty() const
{
	return top == 0;
}
bool Stack::isfull() const
{
	return top == MAX;
}
bool Stack::push(const Item & item)
{

	if (top < MAX) {
		pitems[top++] = item;
		return true;
	} else
		return false;
}

bool Stack::pop(Item & item)
{
	if (top > 0) {
		item = pitems[--top];
		return true;
	} else
		return false;
}

Stack & Stack::operator=(const Stack & st)
{
	if (this == &st)
		return *this;
	delete [] pitems;
	pitems = new Item[st.size];
	size = st.size;
	top = st.top;
	for (int i =  0; i < size; i++)
		pitems[i] = st.pitems[i];
}

std::ostream &operator<<(std::ostream &os, const Stack & st)
{
	for (int i=0; i < st.top; i++)
		os << st.pitems[i] << " ";
	os << std::endl;

	return os;
}