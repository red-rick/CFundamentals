#include <iostream>
#include "golf.h"

const int kSize = 10;

void showMembers(golf *, int);

int main()
{
	using namespace std;
	golf arr[kSize];
	cout << "Enter " << kSize << " members of golf club(skip name for exit):\n";
	int i = 0;
	while(setgolf(arr[i]) && i < kSize)
		i++;
	std::cout << "Before:\n";
	showMembers(arr, i);
	if (i > 1) {
		setgolf(arr[0], "Helln Kompf", 1200);
		handicap(arr[1], 2300);
	}
	std::cout << "After:\n";
	showMembers(arr, i);
	cin.get();
	return 0;
}

void showMembers(golf *m, int n)
{
	for (int i = 0; i < n; i++)
		showgolf(m[i]);
}