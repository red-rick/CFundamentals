#include <iostream>
#include "stonewt1.h"

const int kArrSize = 6;

int main()
{
	using namespace std;
	Stonewt starr[kArrSize] = {
		Stonewt(12.3),
		Stonewt(10.2),
		Stonewt(12, 4.5)
	};

	int n = 0, i = 0;
	Stonewt endFlag, min, max;
	Stonewt etalone(11, 0.0);
	while (starr[i] != endFlag) {
		starr[i].show_lbs();
		if ((i == 0) || min > starr[i])
			min = starr[i];
		if ((i == 0) || max < starr[i])
			max = starr[i];
		if (starr[i] >= etalone)
			n++;
		i++;
	}
	cout << "\nMax: ";
	max.show_lbs();
	cout << "\Min: ";
	min.show_lbs();
	cout << "Number of elements larger or equal ";
	etalone.show_stn();
	cout << n;
	cin.get();
	return 0;
}