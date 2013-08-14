#ifndef BANKACC_H
#define BANKACC_H

#include <string>

class BankAcc
{
private:
	std::string m_name;
	std::string m_number;
	double m_balance;
public:
	BankAcc();
	BankAcc(const std::string &, const std::string &, double);
	~BankAcc();
	void show();
	void add(double);
	void withdraw(double);
};

#endif