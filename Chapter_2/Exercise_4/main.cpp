#include <iostream>
#include <conio.h>

static const int kMonthMultiplier = 12;

int ageToMonth(const int &);

int main()
{
	int years;
	std::cout<<"Enter your age: ";
	std::cin>>years;
	if (years > 0) {
		std::cout<<"Your age in months is "<<ageToMonth(years);
	} else {
		std::cout<<"Error: Incorrect value";
	}
	_getch();

	return 0;
}

int ageToMonth(const int &years)
{
	return kMonthMultiplier * years;
}