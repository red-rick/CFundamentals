#include<iostream>

int main()
{
	const int kArSize = 4;
	double taxesRates[] = {0.0, 0.1, 0.15, 0.2};
	int taxesBorders[] = {5000, 10000, 15000, 20000};
	double  tvarps;

	std::cout << "Enter your tvarps: ";
	while(std::cin >> tvarps && tvarps > 0.0) {
		int i = 0;
		double taxes = 0;
		while (i < kArSize) {
			if (tvarps < taxesBorders[i]) {
				taxes = tvarps * taxesRates[i];
				break;
			}
			i++;
		}
		if (i != 0 && taxes == 0.0)
			taxes = tvarps * taxesRates[kArSize - 1];
		std::cout << "Your taxe: " << taxes << std::endl;
		std::cout << "Enter next amount of tvarps: ";
	}
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
	return 0;
}