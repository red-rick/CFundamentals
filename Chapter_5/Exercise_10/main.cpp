#include<iostream>

int main()
{
	int n;
	std::cout << "Enter number of rows: ";
	std::cin >> n;
	
	if (n < 0) {
		std::cerr << "Incorrect value";
		std::cin.get();
		return 1;
	}

	for ( int j = 0; j < n; j++ ) {
		for (int i = 0; i < n; i++ ) {
			if ( i > (n - j - 2) ) {
				std::cout << "*";
			} else {
				std::cout << ".";
			}
		}
		std::cout<<std::endl;
	}

	std::cin.get();
	std::cin.get();
	return 0;
}