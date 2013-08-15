// stonewt1.h -- revised definition for the Stonewt class
#ifndef STONEWT1_H_
#define STONEWT1_H_

#include <iostream>

class Stonewt
{
public:
	enum Type {STONE, POUND};
private:
	Type t;                       //type of internal data presentation
    enum {Lbs_per_stn = 14};      // pounds per stone
    int stone;                    // whole stones
    double pds_left;              // fractional pounds
    double pounds;                // entire weight in pounds
public:
    Stonewt(double lbs);          // construct from double pounds
    Stonewt(int stn, double lbs); // construct from stone, lbs
    Stonewt();                    // default constructor
    ~Stonewt();
	void changeType(const Type &); //change type of representation
//overloaded operators
	friend std::ostream &operator<<(std::ostream &st, const Stonewt stone);
	Stonewt operator+(const Stonewt &);
	Stonewt operator-(const Stonewt &);
	Stonewt operator*(const Stonewt &);
// conversion functions
    operator int() const;
    operator double() const;
};
#endif
