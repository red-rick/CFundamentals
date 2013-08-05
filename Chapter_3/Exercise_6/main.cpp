#include<iostream>
#include<conio.h>

const double kMilesIn100km = 62.14;
const double kLitersInGalon = 3.875;

double milesPerGalone( const double& );

int main()
{
	using namespace std;
	double gasoline;
	cout << "How many liters of gasoline has your car spent per 100km: ";
	cin >> gasoline;
	if ( gasoline < 0.0 ) {
		cout << "Error: Incorrect value";
	} else {
		cout << "You can drive " << milesPerGalone( gasoline ) << " miles using 1 galone";
	}

	_getch();
	return 0;
}

double milesPerGalone( const double &gasoline )
{
	return ( kMilesIn100km * kLitersInGalon ) / gasoline ;
}