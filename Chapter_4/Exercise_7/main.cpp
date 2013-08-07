#include<iostream>
#include<conio.h>

const int kNumber = 20;

int main()
{
	struct Pizza {
		char company[kNumber];
		int diameter;
		double weight;
	};

	Pizza customPizza;

	std::cout << "Please, enter company name: ";
	std::cin.getline(customPizza.company, kNumber);
	std::cout << "Enter diameter of pizza: ";
	std::cin >> customPizza.diameter;
	std::cout << "Enter wieght: ";
	std::cin >> customPizza.weight;

	std::cout << "\nYou choise is:\n\nCompany: " << customPizza.company
		<< "\nDiameter: " << customPizza.diameter << "\nWeight: " << customPizza.weight;

	_getch();
	return 0;
}