#include<iostream>
#include"bankacc.h"

int main()
{
	using namespace std;
	
	BankAcc first("Helen Lokampf", "A234985222", 2345.6);
	BankAcc second("Pier Lotte", "A9897987988", 230455.2);

	double n = 230.0;

	cout << "Before transaction:\n";
	first.show();
	second.show();

	first.add(n);
	second.withdraw(n);

	cout << "After transaction:\n";
	first.show();
	second.show();

	cin.get();
	return 0;
}