#include <iostream>
#include "slist.h"

const int kArrSize = 11;

void show(double &d);

int main()
{
	using namespace std;
	double arr[kArrSize] = {1.1, 2.2, 1.2, 2.1, 3.1, 3.2, 3.3, 1.3, 2.3, 4.1, 4.2};
	Slist list;

	int i = 0;
	while (list.addItem(arr[i]))
		i++;

	list.visit(show);

	cin.get();
	return 0;
}

void show(double &d)
{
	std::cout << d << std::endl;
}