#include "sales.h"
#include <iostream>

namespace SALES
{
	Sales::Sales(const double ar[], int n)
	{
		int count = std::max(QUARTERS, n);
		double sum = 0;
		for (int i = 0; i < QUARTERS; i ++) {
			if (i < n) 
				sales[i] = ar[i];
			else
				sales[i] = 0;
			sum += sales[i];
			if (i == 0 || sales[i] < min)
				min = sales[i];
			if (i == 0 || sales[i] > max)
				max = sales[i];
		}

		average = sum / count;
	}

	Sales::Sales()
	{
		for (int i = 0; i < QUARTERS; i++)
			sales[i] = 0.0;
		average = 0.0;
		max  = 0.0;
		min = 0.0;
	}

	void Sales::setSales()
	{
		std::cout << "Enter Sales for " << QUARTERS << " quarteres: ";
		double arr[QUARTERS];
		int i = 0;
		while (i < QUARTERS){
			if (!(std::cin >> arr[i]))
				arr[i] = 0;
			i++;
		}

		if (!std::cin) {
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
		}
		*this = Sales(arr, QUARTERS);
	}

	void Sales::show()
	{
		std::cout << "Sales: ";
		for (int i = 0; i < QUARTERS; i++)
			std::cout << sales[i] << " ";
		std::cout << "\nMax: " << max << " Min: " << min << " Average: " << average << std::endl;
	}
}