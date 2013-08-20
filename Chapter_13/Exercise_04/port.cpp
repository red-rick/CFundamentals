#include "port.h"
#include <cstring>

Port::Port(const char * br, const char * st, int b)
{
	brand = new char[strlen(br) + 1];
	strcpy(brand, br);
	strncpy(style, st, LEN);
	bottles = b;
}

Port::Port(const Port & p) // copy constructor
{
	brand = new char[strlen(p.brand) + 1];
	strcpy(brand, p.brand);
	strcpy(style, p.style);
	bottles = p.bottles;
}

Port & Port::operator=(const Port & p)
{
	if (this == &p)
		return *this;
	delete [] brand;

	brand = new char[strlen(p.brand) + 1];
	strcpy(brand, p.brand);
	strcpy(style, p.style);
	bottles = p.bottles;
	
	return *this;
}

Port & Port::operator+=(int b)
{
	bottles += b;
	return *this;
}

Port & Port::operator-=(int b)
{
	if (bottles > b) 
		bottles -= b;
	return *this;
}
void Port::Show() const
{
	std::cout << "Brand: " << brand << std::endl
		      << "Kind: " << style << std::endl
			  << "Bottles: " << bottles << std::endl;
}

std::ostream & operator<<(std::ostream & os, const Port & p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles;

	return os;
}


VintagePort::VintagePort():Port()
{
	nickname = new char[8];
	strcpy(nickname, "Unknown");
	year = 1990;
}

VintagePort::VintagePort(const char * br, int b, const char * nn, int y): Port(br, "vintage", b)
{
	nickname = new char[strlen(nn) + 1];
	strcpy(nickname, nn);
	year = y;
}

VintagePort::VintagePort(const VintagePort & vp):Port(vp)
{
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
}

VintagePort & VintagePort::operator=(const VintagePort & vp)
{
	if(this == &vp)
		return *this;
	this->Port::operator=(vp);
	delete [] nickname;
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;

	return *this;
}
 
void VintagePort::Show() const
{
	this->Port::Show();
	std::cout << "Nickname: " << nickname << std::endl
			  << "Year: " << year << std::endl;
}

std::ostream & operator<<(std::ostream & os, const VintagePort & vp)
{
	os << (Port &)vp;
	os << ", " << vp.nickname << ", " << vp.year;

	return os;
}