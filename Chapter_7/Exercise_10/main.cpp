#include<iostream>

double add(double x, double y);
double substruct(double x, double y);
double multiply(double x, double y);

const char *action[] = {"Add", "Substruct", "Multily"};

double calculate(double a, double b, double (*pf)(double x, double y));

const int kSize = 3;

int main()
{
	double (*pf[kSize])(double, double) = {add, substruct, multiply};
	double a = 0, b = 0;

	while (std::cin) {
		std::cout << "Enter pair of numbers(0 for exit): ";
		std::cin >> a >> b;
		if (a == 0 || b == 0)
			break;
		for (int i = 0; i < kSize; i++) 
			std::cout << action[i] << ": " << calculate(a, b, pf[i]) << std::endl;
	}
	std::cin.get();
	return 0;
}

double calculate(double a, double b, double (*pf)(double x, double y))
{
	return pf(a, b);
}

double add(double x, double y)
{
	return x + y;
}

double substruct(double x, double y)
{
	return x - y;
}

double multiply(double x, double y)
{
	return x * y;
}