#include<iostream>
#include<conio.h>

long double percentsOfWorldPopulation( const long long&, const long long&);

int main()
{
	using namespace std;

	long long theUSAPopulation, worldPopulation;

	cout << "Enter the world's population: ";
	cin >> worldPopulation;
	cout << "Enter the population of the US: ";
	cin >> theUSAPopulation;
	if ( (worldPopulation < 0) || (theUSAPopulation < 0) ) {
		cout <<  "Error: incorrect values";
	} else {
		cout << "The population of the US is " << percentsOfWorldPopulation( worldPopulation, theUSAPopulation ) << " of the world population.\n"
			 << "You can use the Internet to get more recent figures.";
	}
	_getch();
	return 0;
}

long double percentsOfWorldPopulation( const long long &world, const long long &theUSA)
{
	return ( (long double (theUSA) / long double (world)) * 100.0L );
}