#include <iostream>
#include "sales.h"

const int kSize = 2;

int main()
{
	using namespace SALES;
	
	double n[] = {2.4, 4.5, 2.7};
	Sales arr[kSize];

	arr[0] = Sales(n, 3);
	arr[1].setSales();

	std::cout << "Your sales:\n";
	for (int i = 0; i < kSize; i++)
		arr[i].show();

	std::cin.get();
	std::cin.get();
	return 0;
}