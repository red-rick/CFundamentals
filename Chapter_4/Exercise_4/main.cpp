#include<iostream>
#include<conio.h>
#include<string>

int main()
{
	std::string firstName;
	std::string lastName;

	std::cout << "Enter your first name: ";
	std::getline(std::cin, firstName);
	std::cout << "Enter your last name: ";
	std::getline(std::cin, lastName);
	
	//std::string fullName = lastName + ", " + firstName; simple way

	std::string fullName(lastName);
	fullName.append(", ");
	fullName.append(firstName);

	std::cout << "Here\'s the information in single string: " << fullName;

	_getch();
	return 0;
}