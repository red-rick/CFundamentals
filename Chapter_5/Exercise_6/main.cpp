#include<iostream>

const int kArSize = 12;
const int kNumberOfYears = 3;

int main()
{
	char *month[kArSize] = {"January", "February", "Mart", "April", "Mai", "June", "Jule", "August", "September", "October", "November", "December"};
	int books[kArSize][kNumberOfYears];
	int total = 0;

	std::cout << "How many book did you sell in\n";
	for( int j = 0; j < kNumberOfYears; j++ ) {
		int yearTotal = 0;
		for( int i = 0; i < kArSize; i++ ) {
			std::cout << month[i] << ": ";
			std::cin >> books[i][j];
			if (books[i][j] < 0) {
				std::cerr << "Incorrect value";
				std::cin.get();
				std::cin.get();
				return 1;
			}
			yearTotal += books[i][j];
		}
		std::cout << "Total in " << (j + 1) << " year: " << yearTotal << std::endl;
		total += yearTotal;
	}
	std::cout << "Total: " << total;
	std::cin.get();
	std::cin.get();
	return 0;
}