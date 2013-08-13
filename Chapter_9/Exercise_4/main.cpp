#include <iostream>
#include "sales.h"

const int kSize = 2;

int main()
{
	using namespace SALES;
	
	double n[] = {2.4, 4.5, 2.7};
	Sales arr[kSize];

	setSales(arr[0], n, 3);
	setSales(arr[1]);

	std::cout << "Your sales:\n";
	for (int i = 0; i < kSize; i++)
		showSales(arr[i]);

	std::cin.get();
	std::cin.get();
	return 0;
}