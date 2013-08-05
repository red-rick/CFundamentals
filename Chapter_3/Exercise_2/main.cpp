#include<iostream>
#include<conio.h>

const double kDivider = 60.0;
const int kMaxDegrees = 360;

double degreesToDecimal( const int&, const int&, const int& );

int main()
{
	using namespace std;
	
	int degrees, minutes, seconds;

	cout << "Enter a latitude in degrees, minutes and seconds:\nFirst, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc:  ";
	cin >> seconds;
	
	int maxMinutesOrSeconds = int(kDivider);

	if ( (degrees > kMaxDegrees) || (degrees < 0) || 
		(minutes < 0) || (minutes > maxMinutesOrSeconds) ||
		(seconds < 0) || (seconds > maxMinutesOrSeconds) ) {
			cout << "Error: incorrect values";
	} else {
		cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " 
			 << degreesToDecimal( degrees, minutes, seconds) << " degrees";
	}
	_getch();
	return 0;
}

double degreesToDecimal( const int &degrees, const int &minutes, const int &seconds)
{
	return ( degrees + ( minutes + seconds / kDivider ) / kDivider );
}