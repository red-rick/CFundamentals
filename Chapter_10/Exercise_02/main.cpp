#include<iostream>
#include<string>
#include"person.h"

int main()
{
	using namespace std;

	Person one; // use default constructor
	Person two("Smythecraft"); // use #2 with one default argument
	Person three("Dimwiddy", "Sam"); // use #2, no defaults
	one.Show();
	one.FormalShow();
	two.Show();
	two.FormalShow();
	three.Show();
	three.FormalShow();

	cin.get();
	return 0;
}