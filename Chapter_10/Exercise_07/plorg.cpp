#include "plorg.h"
#include <iostream>
#include <cstddef>

plorg::plorg(const char *name, int ci)
{
	if (name != NULL)
		strncpy(m_name, name, kLen);
	m_ci = ci;
}

void plorg::setci(int n)
{
	m_ci = n;
}

void plorg::report() const
{
	std::cout << m_name << ",  " << m_ci;
}