#include<iostream>
#include"golf.h"

void setgolf(golf & g, const char * name, int hc)
{
	strncpy(g.fullname, name, Len);
	g.handicap = hc;
}

int setgolf(golf & g)
{
	std::cout << "Enter Full Name: ";
	std::cin.getline(g.fullname, Len);
	if (strlen(g.fullname) == 0)
		return 0;
	std::cout << "Enter handicap: ";
	(std::cin >> g.handicap).get();
	return 1;
}

void handicap(golf & g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf & g)
{
	std::cout << g.fullname << ", " << g.handicap << std::endl;
}