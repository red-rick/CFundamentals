#include<iostream>

long long factorial(long long);

int main()
{
	int value = 0;
	std::cout << "Enter number : ";
	std::cin >> value;
	while ( (value >= 0)) {
		std::cout << "Factorial: " << factorial(value) << std::endl;
			std::cout << "Enter number : ";
			std::cin >> value;
	}
	std::cin.get();
	return 0;
}

long long factorial(long long n)
{
	if (n  < 2)
		return 1;
	return factorial(n-1) * n;
}