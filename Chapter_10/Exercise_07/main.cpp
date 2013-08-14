#include <iostream>
#include "plorg.h"

const int kArrSize = 4;

void showlist(const plorg arr[], int n);

int main()
{
	using namespace std;

	plorg a[kArrSize] = {
		plorg("Barbarian", 49),
		plorg("Priest", 48),
		plorg("Mage", 47)
	};

	std::cout << "Your plorgs:\n";
	showlist(a, kArrSize);
	a[0].setci(51);
	a[1].setci(1);
	std::cout << "Notice some changes:\n";
	showlist(a, kArrSize);
	cin.get();
	return 0;
}

void showlist(const plorg arr[], int n)
{
	for (int i = 0; i < n; i++) {
		arr[i].report();
		std::cout << std::endl;
	}
}