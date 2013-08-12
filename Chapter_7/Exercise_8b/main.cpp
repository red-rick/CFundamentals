#include<iostream>

const int Seasons = 4;
const char *Snames[] = {"Spring", "Summer", "Fall", "Winter"};
struct expenses {
	double values[Seasons];
};
// function to modify array object
void fill(expenses &exp);
// function that uses array object without modifying it
void show(const expenses &exp);

int main()
{
	expenses exp;
	fill(exp);
	show(exp);

	std::cin.get();
	std::cin.get();
	return 0;
}
void fill(expenses &exp)
{
	using namespace std;
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> exp.values[i];
	}
}
void show(const expenses &exp)
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << exp.values[i] << endl;
		total += exp.values[i];
	}
	cout << "Total Expenses: $" << total << endl;
}