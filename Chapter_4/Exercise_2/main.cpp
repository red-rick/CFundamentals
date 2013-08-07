#include<iostream>
#include<conio.h>
#include<string>

int main()
{
	std::string firstName, lastName;
	char grade;
	unsigned age;
	
	std::cout << "What is yout first name? ";
	std::getline(std::cin, firstName);
	std::cout << "What is your last name? ";
	std::getline(std::cin, lastName);
	std::cout << "What letter grade do you deserve? ";
	std::cin.get(grade);
	std::cout << "What is your age? ";
	std::cin >> age;
	grade = grade + 1;

	std::cout << "Name: " << lastName << ", " << firstName << std::endl; 
	std::cout << "Grade: " << grade << std::endl;
	std::cout << "Age:" << age;
	_getch();
	return 0;
}
