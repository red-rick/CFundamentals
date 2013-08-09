#include<iostream>

const int kStrSize = 50;

struct contributor {
	char fullname[kStrSize];
	double amount;
};

int main()
{
	int n;

	std::cout << "Enter number of contributors: ";
	std::cin >> n;
	std::cin.get();

	if (n < 0) {
		std::cerr << "IncorectV value";
		std::cin.get();
		return 1;
	}
	
	contributor *patrons = new contributor[n];
	const double greatAmount = 10000;

	for (int i = 0; i < n; i++) {
		std::cout << "Enter contributor info:\nFull Name: ";
		std::cin.getline(patrons[i].fullname, kStrSize);
		std::cout << "Amount of contribution: ";
		std::cin >> patrons[i].amount;
		std::cin.get();
	}

	std::cout << "\nGrand Patrons:\n";
	bool flag = false;
	for (int i = 0; i < n; i++)
		if (patrons[i].amount >= greatAmount) {
			std::cout << patrons[i].fullname << " - " << patrons[i].amount << std::endl;
			flag = true;
		}
	if (!flag)
		std::cout << "none";

	flag = false;
	std::cout << "\nPatrons:\n";
	for (int i = 0; i < n; i++)
		if (patrons[i].amount < greatAmount) {
			std::cout << patrons[i].fullname << " - " << patrons[i].amount << std::endl;
			flag = true;
		}
	if (!flag)
		std::cout << "none";

	std::cin.get();
	return 0;
}