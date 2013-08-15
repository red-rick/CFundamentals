// stonewt1.cpp -- Stonewt class methods + conversion functions
#include <iostream>
using std::cout;
#include "stonewt1.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
    stone = int (lbs) / Lbs_per_stn;    // integer division
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
	t = POUND;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds =  stn * Lbs_per_stn +lbs;
	t = STONE;
}

Stonewt::Stonewt()          // default constructor, wt = 0
{
    stone = pounds = pds_left = 0;
	t = STONE;
}

Stonewt::~Stonewt()         // destructor
{
}

void Stonewt::changeType(const Type &type)
{
	t = type;
}

// conversion functions
Stonewt::operator int() const
{

    return int (pounds + 0.5);

}

Stonewt::operator double()const
{
    return pounds; 
}

Stonewt Stonewt::operator+(const Stonewt &st)
{
	double temp = pounds + st.pounds;
	return Stonewt(temp);
}
Stonewt Stonewt::operator-(const Stonewt &st)
{
	double temp = pounds - st.pounds;
	return Stonewt(temp);
}

Stonewt Stonewt::operator*(const Stonewt &st)
{
	double temp = pounds * st.pounds;
	return Stonewt(temp);
}


std::ostream &operator<<(std::ostream &st, const Stonewt stone)
{
	if (stone.t == Stonewt::POUND) {
		st << stone.pounds << " pounds";
	} else if (stone.t == Stonewt::STONE) {
		st << stone.stone << " stones " << stone.pds_left << " pounds";
	}
	return st;
}
