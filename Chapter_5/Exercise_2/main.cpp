#include<iostream>
#include<array>

const int kArSize = 101;

int main()
{
	std::array<long double, kArSize> factorials;
	factorials[1] = factorials[0] = 1.0L;
	for( int i = 2; i < kArSize; i++ )
		factorials[i] = i * factorials[i-1];
	for( int i = 0; i < kArSize; i++ )
		std::cout << i << "! = " << factorials[i] << std::endl;
	
	std::cin.get();

	return 0;
}