#include<iostream>
#include<fstream>

const int kStrSize = 50;

struct contributor {
	char fullname[kStrSize];
	double amount;
};

int main()
{
	std::ifstream iFile;
	iFile.open("test.txt");
	if (iFile.is_open()) {
		
		int n;

		iFile >> n;
		iFile.get();

		if (n < 0) {
			std::cerr << "IncorectV value";
			std::cin.get();
			iFile.close();
			return 1;
		}
	
		contributor *patrons = new contributor[n];
		const double greatAmount = 10000;
		int j = 0;
		while(iFile.good() && j < n) {
			iFile.getline(patrons[j].fullname, kStrSize);
			iFile >> patrons[j].amount;
			iFile.get();
			j++;
		}

		std::cout << "Grand Patrons:\n";
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

		iFile.close();
	} else {
		std::cerr << "Error occured during file opening";
		std::cin.get();
		return 1;
	}

	std::cin.get();
	return 0;
}