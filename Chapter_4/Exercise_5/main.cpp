#include<iostream>
#include<conio.h>

const int kNumber = 20;

int main()
{
	struct CandyBar
	{
		char brand[kNumber];
		double weight;
		unsigned calories;
	} snack = {"Mocha Munch", 2.3, 350};

	std::cout << "We have such candies:\nBrand: " << snack.brand
		<< "\nWeight: " << snack.weight << "\nCalories: " << snack.calories;

	_getch();
	return 0;
}