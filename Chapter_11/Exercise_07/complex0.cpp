#include "complex0.h"

complex complex::operator+(const complex &b)
{
	return complex(x + b.x, y + b.y);
}

complex complex::operator-(const complex &b)
{
	return complex(x - b.x, y - b.y);
}

complex complex::operator*(const complex &b)
{
	return complex((x* b.x - y * b.y), (x * b.y + y * b.x));
}

complex complex::operator~()
{
	return complex(x, -y);
}

complex operator*(double a, const complex &b)
{
	return complex(b.x * a, b.y * a);
}

std::ostream &operator<<(std::ostream &str, const complex &c)
{
	str << "(" << c.x << "," << c.y << "i)";

	return str;
}

std::istream &operator>>(std::istream &str, complex &c)
{
	std::cout << "real: ";
	str >> c.x;
	std::cout << "imaginary: ";
	str >> c.y;

	return str;
}
