#include<iostream>
#include<conio.h>

int main()
{
	using namespace std;
	double petrol, distance;
	cout << "What distance in kilometers did you pass? ";
	cin >> distance;
	cout << "How many liters of gasoline did you use? ";
	cin >> petrol;

	if ( (distance < 0.0) || (petrol < 0.0) ) {
		cout << "Error: Incorrect values";
	} else {
		cout << "Your car has gotten " << ( (petrol / distance) * 100 ) << "l/100km";
	}

	_getch();

	return 0;
}