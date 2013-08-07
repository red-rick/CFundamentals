#include<iostream>
#include<string>

struct car {
	std::string make;
	int year;
};

int main()
{
	int count;

	std::cout << "How many cars do you wish to catalog? ";
	std::cin >> count;
	std::cin.get();

	if ( count < 0 ) {
		std::cerr << "Incorrect value";
		std::cin.get();
		return 1;
	}

	car *cars = new car[count];

	for ( int i = 0; i < count; i++ ) {
		std::cout << "Car #" << (i + 1) << std::endl;
		std::cout << "Please enter the make: ";
		std::getline(std::cin, cars[i].make);
		std::cout << "Please enter the year made: ";
		std::cin >> cars[i].year;
		std::cin.get();
	}

	std::cout <<"Here is your collection:\n";

	for (int i = 0; i < count; i++)
		std::cout << cars[i].year << " " << cars[i].make <<std::endl;  

	std::cin.get();
	return 0;
}