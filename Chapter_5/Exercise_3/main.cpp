#include<iostream>

int main()
{
	int n, sum = 0;

	std::cout << "Enter numbers or 0 for finish input\n";
	std::cin >> n;
	while( n != 0 ) {
		sum += n;
		std::cout << "Sum: " << sum << std::endl;
		std::cin >> n;
	}

	return 0;
}