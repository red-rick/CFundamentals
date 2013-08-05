#include<iostream>
#include<conio.h>

const int kSecondsInMinute = 60;
const int kMinutesInHours = 60;
const int kHoursInDay = 24;

int main()
{
	using namespace std;

	long long seconds; 
	cout << "Enter the number of seconds: ";
	cin >> seconds;

	if ( seconds < 0 ) {
		cout << "Error: incorrect value";
	} else {
		int secondsInDay = kHoursInDay * kMinutesInHours * kSecondsInMinute;
		int secondsInHour = kHoursInDay * kMinutesInHours;

		cout << seconds << " seconds = " << seconds / secondsInDay << " days, "
			 << ( seconds % secondsInDay ) / secondsInHour << " hours, "
			 << ( ( seconds % secondsInDay ) % secondsInHour ) / kSecondsInMinute << " minutes, "
			 << ( ( ( seconds % secondsInDay ) % secondsInHour ) % kSecondsInMinute ) << " seconds";
	}
	_getch();
	return 0;
}