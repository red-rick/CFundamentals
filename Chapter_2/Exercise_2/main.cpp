#include <iostream>
#include <conio.h>

static const int skMultiplier = 220;

int furlongToYard(const int &);

int main()
{
	int distance;
	std::cout<<"What is the distance?\n";
	std::cin>>distance;
	if ( distance > 0 ) {
		std::cout<<"Distance in yards: " << furlongToYard(distance);
	} else {
		std::cout<<"Error: Inorrect value";
	}
	_getch();
	return 0;
}


int furlongToYard(const int &distance)
{
	return distance * skMultiplier;
}