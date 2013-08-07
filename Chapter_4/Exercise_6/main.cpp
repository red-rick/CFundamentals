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
	
	CandyBar candies[kCandiesCount] = {
		{"Mocha Munch", 2.3, 350},
		{"Ice", 3.4, 100},
		{"Lukum", 2.5, 157}
	};
	std::cout << "We have such candies:\n";
	for (int i = 0; i < kCandiesCount; i++)
	{
		std::cout << "\nBrand: " << candies[i].brand
			<< "\nWeight: " << candies[i].weight << "\nCalories: " << candies[i].calories << "\n\n";
	}

	_getch();
	return 0;
}