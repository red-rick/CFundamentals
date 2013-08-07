#include<iostream>

const float kOriginalBalance = 100.0f;
const float kSimpleInterestMultiplier = 0.1f;
const float kcompoundInterestMultiplier = 0.05f;

int main()
{
	float daphneBalance = kOriginalBalance;
	float cleoBalance = kOriginalBalance;
	int i = 0;

	do {
		i++;
		daphneBalance += kSimpleInterestMultiplier * kOriginalBalance;
		cleoBalance += kcompoundInterestMultiplier * cleoBalance;
	} while ( daphneBalance >= cleoBalance );

	std::cout << "After " << i << " years Cleo will have " << cleoBalance << "$, Daphne " << daphneBalance <<"$"; 

	std::cin.get();
	return 0;
}