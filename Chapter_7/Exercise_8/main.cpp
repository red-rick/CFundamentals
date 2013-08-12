#include<iostream>

const int Seasons = 4;
const char *Snames[] = {"Spring", "Summer", "Fall", "Winter"};
// function to modify array object
void fill(double *exp);
// function that uses array object without modifying it
void show(double *exp);

int main()
{
	double expenses[Seasons];
	fill(expenses);
	show(expenses);

	std::cin.get();
	std::cin.get();
	return 0;
}
void fill(double *exp)
{
	using namespace std;
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> exp[i];
	}
}
void show(double *exp)
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << exp[i] << endl;
		total += exp[i];
	}
	cout << "Total Expenses: $" << total << endl;
}