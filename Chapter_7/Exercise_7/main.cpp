#include <iostream>

const int Max = 5;
// function prototypes
double *fill_array(double *first, double *last);
void show_array(const double *first, const double *last); // don't change data
void revalue(double r, double *first, double *last);

int main()
{
	using namespace std;
	double properties[Max];
	double *endp = fill_array(properties, (properties + Max));
	show_array(properties, endp);
	if (properties != endp) {
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor)) {
			cin.clear();
			while (cin.get() != '\n')
			continue;
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, properties, endp);
		show_array(properties, endp);
	}
	cout << "Done.\n";
	cin.get();
	cin.get();
	return 0;
}
double *fill_array(double *first, double *last)
{
	using namespace std;
	double temp;
	double *iterator = first;
	for( ; iterator < last; iterator++)
	{
		cout << "Enter value #: ";
		cin >> temp;
		if (!cin) // bad input
		{
			cin.clear();
			while (cin.get() != '\n')
			continue;
			cout << "Bad input; input process terminated.\n";
			break;
		} else if (temp < 0) // signal to terminate
			break;
		*iterator = temp;
	}
	return iterator;
}
// the following function can use, but not alter,
// the array whose address is ar
void show_array(const double *first, const double *last)
{
	int n = last - first;
	using namespace std;
	for (int i = 0; i < n; i++) {
		cout << "Property #" << (i + 1) << ": $";
		cout << *(first + i) << endl;
	}
}
// multiplies each element of ar[] by r
void revalue(double r, double *first, double *last)
{
	for (; first < last; first++)
		*first *= r;
}