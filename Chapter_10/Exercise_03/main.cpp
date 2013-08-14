#include <iostream>
#include "golf.h"

const int kSize = 10;

void showMembers(Golf *, int);

int main()
{
	using namespace std;
	Golf arr[kSize];
	cout << "Enter " << kSize << " members of golf club(skip name for exit):\n";
	int i = 0;
	while(arr[i].setGolf() && i < kSize)
		i++;
	std::cout << "Before:\n";
	showMembers(arr, i);
	if (i > 0) {
		arr[0] = Golf("Helln Kompf", 1200);
		arr[1].setHandicap(2300);
	}
	std::cout << "After:\n";
	showMembers(arr, i);
	cin.get();
	return 0;
}

void showMembers(Golf *m, int n)
{
	for (int i = 0; i < n; i++)
		m[i].show();
}