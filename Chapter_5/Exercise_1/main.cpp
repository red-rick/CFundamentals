#include<iostream>

int main()
{
	int min, max;

	std::cout << "Enter min and max values: ";
	std::cin >> min >> max;

	if (min >= max) {
		std::cerr << "Incorrect values";
		return 1;
	}

	int sum = 0;
	max++;
	for (int i = min; i < max; i++) 
		sum +=i;

	std::cout << "Sum of all the integers between "<< min << " and " << --max << " is " << sum;

	std::cin.get();
	std::cin.get();
	return 0;
}