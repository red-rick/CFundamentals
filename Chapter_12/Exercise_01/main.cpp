#include <iostream>
#include "cow.h"

int main()
{
	using namespace std;

	Cow first;
	Cow second("Burenka", "Painting", 345.5);
	Cow third = second;
	Cow fourth(third);

	first.ShowCow();
	second.ShowCow();
	third.ShowCow();
	fourth.ShowCow();

	cin.get();
	return 0;
}