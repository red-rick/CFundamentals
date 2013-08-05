#include <iostream>
#include <conio.h>

void showTime(const int &, const int &);

int main()
{
	int hours;
	int minutes;

	std::cout<<"Enter the number of hours: ";
	std::cin>>hours;
	std::cout<<"Enter the number of minutes: ";
	std::cin>>minutes;
	showTime(minutes, hours);
	_getch();
	return 0;
}

void showTime(const int &minutes, const int &hours)
{
	if ( (minutes > 59) || (minutes < 0) || (hours > 23) || (hours < 0) ) {
		std::cout<<"Error: Incorrect value";
	} else {
		std::cout<<"Time: "<<hours<<":"<<minutes;
	}
}