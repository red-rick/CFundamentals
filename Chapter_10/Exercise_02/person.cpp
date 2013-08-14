#include<iostream>
#include"person.h"

Person::Person(const std::string & ln, const char * fn)
{
	lname = ln;
	strncpy(fname, fn, LIMIT);
}

void Person::Show() const
{
	std::cout << this->fname << " " << this->lname << std::endl;
}

void Person::FormalShow() const
{
	std::cout << this->lname << " " << this->fname << std::endl;
}