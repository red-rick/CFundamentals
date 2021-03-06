#include <iostream>
#include "classic.h"


Cd::Cd(char * s1, char * s2, int n, double x)
{
	performers = new char[strlen(s1) + 1];
	strcpy(performers, s1);
	label = new char[strlen(s2) + 1];
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd & d)
{
	performers = new char[strlen(d.performers) + 1];
	strcpy(performers, d.performers);
	label = new char[strlen(d.label) + 1];
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd()
{
	selections = 0;
	playtime = 0.0;
}

Cd::~Cd()
{
	delete [] performers;
	delete [] label;
}

void Cd::Report() const
{
	std::cout << "Performers: " << performers << "\nLabel: " << label 
			  << "\nSelections: " << selections <<  "\nPlaytime: " << playtime << std::endl;
}

Cd & Cd::operator=(const Cd & d)
{
	if (this == &d)
		return *this;
	
	performers = new char[strlen(d.performers) + 1];
	strcpy(performers, d.performers);
	label = new char[strlen(d.label) + 1];
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;

	return *this;
}

Classic::Classic(char *s1, char * s2, char * s3,  int n, double x): Cd(s2, s3, n, x)
{
	main_work = new char[strlen(s1) + 1];
	strcpy(main_work, s1);
}

Classic::Classic(const Classic & c):Cd(c)
{
	main_work = new char[strlen(c.main_work) + 1];
	strcpy(main_work, c.main_work);
}

Classic::Classic():Cd()
{
	main_work = new char[7];
	strcpy(main_work, "NoWork");
}
Classic::~Classic()
{
	delete [] main_work;
}

Classic & Classic::operator=(const Classic & c)
{
	if (this == &c)
		return *this;
	
	this->Cd::operator=(c);
	main_work = new char[strlen(c.main_work) + 1];
	strcpy(main_work, c.main_work);

	return *this;
}

void Classic::Report() const
{
	this->Cd::Report();
	std::cout << "Main work: " << main_work << std::endl;
}

