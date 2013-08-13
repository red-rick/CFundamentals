#include "sales.h"
#include <iostream>

namespace SALES
{
	void setSales(Sales & s, const double ar[], int n)
	{
		int count = std::max(QUARTERS, n);
		double sum = 0;
		for (int i = 0; i < QUARTERS; i ++) {
			if (i < n) 
				s.sales[i] = ar[i];
			else
				s.sales[i] = 0;
			sum += s.sales[i];
			if (i == 0 || s.sales[i] < s.min)
				s.min = s.sales[i];
			if (i == 0 || s.sales[i] > s.max)
				s.max =s.sales[i];
		}

		s.average = sum / count;
	}


	void setSales(Sales & s)
	{
		std::cout << "Enter Sales for " << QUARTERS << " quarteres: ";
		double sum = 0;

		int i = 0;
		while (i < QUARTERS){
			if (!(std::cin >> s.sales[i]))
				s.sales[i] = 0;
			if (i == 0 || s.sales[i] < s.min)
				s.min = s.sales[i];
			if (i == 0 || s.sales[i] > s.max)
				s.max = s.sales[i];
			sum += s.sales[i];
			i++;
		}
		s.average = sum / QUARTERS;

		if (!std::cin) {
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
		}
	}

	void showSales(const Sales & s)
	{
		std::cout << "Sales: ";
		for (int i = 0; i < QUARTERS; i++)
			std::cout << s.sales[i] << " ";
		std::cout << "\nMax: " << s.max << " Min: " << s.min << " Average: " << s.average << std::endl;
	}
}