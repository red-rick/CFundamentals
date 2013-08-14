#include<iostream>
#include"move.h"

int main()
{
	using namespace std;
	double x, y;
	cout << "Enter point (x, y): ";
	cin >> x >> y;
	if (!cin) {
		std::cerr << "Incorrect values";
		cin.clear();
		while(cin.get() != '\n')
			continue;
		return 1;
	}
	Move point(x, y), offset(32.4, 51.5);
	cout << "Point before moving: ";
	point.showmove();
	Move newPoint = point.add(offset);
	cout << "\nAfter: ";
	newPoint.showmove();
	cout << "\nReset to (5.0 , 5.0): ";
	point.reset(5.0, 5.0);
	point.showmove();
	cin.get();
	cin.get();
	return 0;
}