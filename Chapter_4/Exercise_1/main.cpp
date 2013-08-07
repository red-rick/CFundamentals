#include<iostream>
#include<conio.h>

const int kNumber = 20;

int main()
{
	char firstName[kNumber];
	char lastName[kNumber];
	char grade;
	unsigned age;
	
	std::cout << "What is yout first name? ";
	std::cin.getline(firstName, kNumber);
	std::cout << "What is your last name? ";
	std::cin.getline(lastName, kNumber);
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
