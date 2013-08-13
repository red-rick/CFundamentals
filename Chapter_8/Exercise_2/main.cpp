#include<iostream>

const int kSize = 20;

struct CandyBar {
	char brand[kSize];
	double weight;
	int calories;
};

void edit(CandyBar &candy, char *nBrand = "Millennium Munch", double nWeight = 2.85, int nCalories = 350);
void show (const CandyBar &candy);

int main()
{
	CandyBar candy  = {"Roshen",  4.2, 675};
	std::cout << "Candies:\n";
	show(candy);
	edit(candy);
	std::cout << "After editing:\n";
	show(candy);
	std::cin.get();
	return 0;
}

void edit(CandyBar &candy, char *nBrand, double nWeight, int nCalories)
{
	strncpy(candy.brand, nBrand, kSize);
	candy.weight = nWeight;
	candy.calories = nCalories;
}

void show(const CandyBar &candy)
{
	std::cout << candy.brand << ", " << candy.weight << ", " << candy.calories << std::endl; 
}