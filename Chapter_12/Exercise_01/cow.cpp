#include "cow.h"
#include <cstring>
#include <iostream>

Cow::Cow()
{
	strcpy(name, "NoName");
	hobby = new char[8];
	strcpy(hobby, "NoHobby");
	weight = 0.0;
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
	strncpy(name, nm, kLen);
	hobby = new char[strlen(ho) + 1];
	strcpy(hobby, ho);
	weight = wt;
}

Cow::Cow(const Cow &c)
{
	strcpy(name, c.name);
	hobby = new char[strlen(c.hobby) + 1];
	strcpy(hobby, c.hobby);
	weight = c.weight;
}

Cow::~Cow()
{
	delete [] hobby;
}

Cow & Cow::operator=(const Cow & c)
{
	if (this == &c)
		return *this;
	delete [] hobby;
	strcpy(name, c.name);
	hobby = new char[strlen(c.hobby) + 1];
	strcpy(hobby, c.hobby);
	weight = c.weight;

	return *this;
}
void Cow::ShowCow() const
{
	std::cout << "Name: " << name << "\nHobby: " << hobby << "\nWeigth: " << weight << std::endl;
}