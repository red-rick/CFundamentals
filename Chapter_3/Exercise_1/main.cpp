#include <iostream>
#include <conio.h>
#include <math.h>

const short kFeetToInchesMultiplier = 12;
const double kInchesToMeterMultiplier = 0.0254;
const double kPoundToKiloDivider = 2.2;

double heightInMeters( const unsigned&, const unsigned& );
double weightInKilos( const unsigned& );
double bodyMassIndex( const double&, const double& );

int main()
{
	using namespace std;



	unsigned height;
	cout << "Enter your height in inches: ____ \b\b\b\b\b";
	cin >> height;

	cout << "Your height is " << (height / kFeetToInchesMultiplier) << "ft " << (height % kFeetToInchesMultiplier) << "in\n";
	_getch();
	
	unsigned heightFeet;
	unsigned heightInches;
	unsigned weight;

	cout << "Enter your height:\nfeet: ";
	cin >> heightFeet;
	cout << "inches: ";
	cin >> heightInches;
	cout << "Enter your weight in pounds: ";
	cin >> weight;

	cout << "Your body mass index: " << bodyMassIndex( weightInKilos( weight ), heightInMeters( heightFeet, heightInches ) );
	_getch();

	return 0;
}

double heightInMeters( const unsigned &feet, const unsigned &inches )
{
	return ( ( feet + kFeetToInchesMultiplier * inches ) * kInchesToMeterMultiplier );
}

double bodyMassIndex( const double &weight, const double &height)
{
	return weight / pow( height, 2 );
}

double weightInKilos( const unsigned &weight)
{
	return weight / kPoundToKiloDivider;
}
