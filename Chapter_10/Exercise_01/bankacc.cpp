#include<iostream>
#include"bankacc.h"

BankAcc::BankAcc(const std::string &name, const std::string &number, double balance)
{
	m_name = name;
	m_number = number;
	m_balance = balance;
}

BankAcc::~BankAcc()
{
	m_name = "no name";
	m_number = "undefined";
	m_balance = 0.0; 
}

void BankAcc::show()
{
	std::cout << this->m_name << ", " << this->m_number << ", " << this->m_balance << std::endl;
}

void BankAcc::add(double n)
{
	if(n < 0.0) {
		std::cerr << "Incorrect value, use withdraw() for decrease balance";
		return;
	}

	this->m_balance += n;
}

void BankAcc::withdraw(double n)
{
	if(n < 0.0) {
		std::cerr << "Incorrect value, use add() for increase balance";
		return;
	}

	this->m_balance -= n;
}
