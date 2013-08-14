#include<iostream>
#include"golf.h"

Golf::Golf(const char * name, int hc)
{
	strncpy_s(fullname, name, Len);
	handicap = hc;
}

int Golf::setGolf()
{
	int n;
	char temp[Len];

	std::cout << "Enter Full Name: ";
	std::cin.getline(temp, Len);
	if (strlen(temp) == 0) 
		return 0;
	std::cout << "Enter handicap: ";
	(std::cin >> n).get();
	*this = Golf(temp, n);

	return 1;
}

void Golf::setHandicap(int hc)
{
	handicap = hc;
}

void Golf::show()
{
	std::cout << fullname << ", " << handicap << std::endl;
}