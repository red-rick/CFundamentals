#include <iostream>
#include "slist.h"

const int kArrSize = 11;

int main()
{
	using namespace std;
	double arr[kArrSize] = {1.1, 2.2, 1.2, 2.1, 3.1, 3.2, 3.3, 1.3, 2.3, 4.1, 4.2};
	Slist list;

	while (list.isFull());

	cin.get();
	return 0;
}