#include<iostream>
#include<conio.h>

const int kNumber = 20;
const int kCandiesCount = 3;

int main()
{
	struct CandyBar
	{
		char brand[kNumber];
		double weight;
		unsigned calories;
	}; 
	
	CandyBar *candies = new CandyBar[kCandiesCount];

	strcpy(candies[0].brand , "Mocha Munch");
	strcpy(candies[1].brand , "Ice");
	strcpy(candies[2].brand , "Lukum");

	candies[0].weight = 2.3;
	candies[1].weight = 3.4;
	candies[2].weight = 2.5;

	candies[0].calories = 350;
	candies[1].calories = 100;
	candies[2].calories = 157;

	std::cout << "We have such candies:\n";
	for (int i = 0; i < kCandiesCount; i++)
	{
		std::cout << "\nBrand: " << candies[i].brand
			<< "\nWeight: " << candies[i].weight << "\nCalories: " << candies[i].calories << "\n\n";
	}

	_getch();
	return 0;
}