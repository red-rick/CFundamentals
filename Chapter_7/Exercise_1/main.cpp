#include<iostream>

double harmonic(const double &, const double &);

int main()
{
	double a, b;
	std::cout << "Enter pair of numbers(0 for exit):\n";
	std::cin >> a >> b;
	while ((a != 0) && (b != 0)) {
		std::cout << "Harmonic: " << harmonic(a, b) << std::endl;
		std::cin >> a >> b;
	}

	std::cin.get();
	return 0;
}

double harmonic(const double &x, const  double &y)
{
	return 2 * x * y / (x + y);
}