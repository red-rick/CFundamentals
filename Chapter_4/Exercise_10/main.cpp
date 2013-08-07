#include<iostream>
#include<conio.h>
#include<array>

const int kNumber = 3;

int main()
{
	std::array<float, 3> results;

	std::cout << "Enter three results of passign 40-yd dash: ";
	std::cin >> results[0] >> results[1] >> results[2];

	float average = (results[0] + results[1] + results[2]) / 3.0f;

	std::cout << "Your results: 1) " << results[0] << "s 2) " << results[1] << "s 3) " << results[2] << "s\n";
	std::cout << "Average: " <<  average;

	_getch();
	return 0;
}