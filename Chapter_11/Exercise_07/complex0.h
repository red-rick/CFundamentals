#ifndef COMPLEX0_H
#define COMPLEX0_H

#include <iostream>

class complex
{
private:
	double x;
	double y;
public:
	complex(const double &a, const double &b) { x = a; y = b; }
	complex() { x = 0.0; y = 0.0; }
	complex operator+(const complex &);
	complex operator-(const complex &);
	complex operator*(const complex &);
	complex operator~();
	friend complex operator*(double, const complex &);
	friend std::ostream &operator<<(std::ostream &, const complex &);
	friend std::istream &operator>>(std::istream &, complex &);
};


#endif
