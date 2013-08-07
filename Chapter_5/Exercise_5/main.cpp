#include<iostream>

const int kArSize = 12;

int main()
{
	char *month[kArSize] = {"January", "February", "Mart", "April", "Mai", "June", "Jule", "August", "September", "October", "November", "December"};
	int books[kArSize];
	int total = 0;

	std::cout << "How many book did you sell in\n";
	for( int i = 0; i < kArSize; i++ ) {
		std::cout << month[i] << ": ";
		std::cin >> books[i];
		if (books[i] < 0) {
			std::cerr << "Incorrect value";
			std::cin.get();
			std::cin.get();
			return 1;
		}
		total += books[i];
	}
	std::cout << "Total: " << total;
	std::cin.get();
	std::cin.get();
	return 0;
}