#include <iostream>
// Note: some implementations require double instead of long double
long double probability(unsigned numbers, unsigned powern, unsigned picks);

int main()
{
	using namespace std;
	double total, powernum, choices;
	cout << "Enter the total number of choices on the game card, power number and\n"
	"the number of picks allowed:\n";
	while ((cin >> total >> powernum >> choices) && choices <= total)
	{
		cout << "You have one chance in ";
		cout << probability(total, powernum,choices); // compute the odds
		cout << " of winning.\n";
		cout << "Next two numbers (q to quit): ";
	}
	cout << "bye\n";
	return 0;
}

long double probability(unsigned numbers, unsigned powern, unsigned picks)
{
	long double result = 1.0; // here come some local variables
	long double n;
	unsigned p;
	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p ;
	return result * powern;
}