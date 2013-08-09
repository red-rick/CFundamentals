#include<iostream>

const int kArSize = 10;

int main()
{
	double *values = new double[kArSize];
	double total = 0.0;
	int i = 0;

	std::cout << "Enter 10 numbers: \n";

	while (std::cin >> values[i]) {
		total += values[i];
		i++;
	}
	
	i++;
	double average = total / i;
	int moreThenAverage = 0;
	for (int j = 0; j < i; j++)
		if (values[j] > average)
			moreThenAverage++;
	
	std::cout << "Average number: " << average << "\nNumber of items bigger then average: " << moreThenAverage;

	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
	std::cin.get();
	return 0;
}