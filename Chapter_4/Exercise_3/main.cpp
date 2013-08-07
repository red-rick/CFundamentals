#include<iostream>
#include<conio.h>

const int kNumber = 20;

int main()
{
	char firstName[kNumber];
	char lastName[kNumber];

	std::cout << "Enter your first name: ";
	std::cin.getline(firstName, kNumber);
	std::cout << "Enter your last name: ";
	std::cin.getline(lastName, kNumber);
	
	size_t length = strlen(firstName) + strlen(lastName) + 3;
	char *fullName = new char[length];
	char *divider = ", ";
	strcpy(fullName, lastName);
	strncat(fullName, divider, strlen(divider));
	strncat(fullName, firstName, strlen(firstName));

	std::cout << "Here\'s the information in single string: " << fullName;

	_getch();
	delete [] fullName;
	return 0;
}