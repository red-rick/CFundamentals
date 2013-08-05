#include <iostream>
#include <conio.h>

static const double kMultiplier = 63240;

double lightYearsToAstronomicalUnits(const double &);

int main()
{
	double years;
	std::cout<<"Enter the number of light years: ";
	std::cin>>years;
	if (years < 0) {
		std::cout<<"Error: Incorrect value";
	} else {
		std::cout<<years<<" light years = "<<lightYearsToAstronomicalUnits(years)<<" astronomical units";
	}
	_getch();
	return 0;
}

double lightYearsToAstronomicalUnits(const double &years)
{
	return kMultiplier * years;
}