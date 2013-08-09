#include<iostream>
#include<fstream>

int main()
{
	std::ifstream iFile;
	iFile.open("test.txt");
	if (iFile.is_open()) {
		char ch;
		int number = 0;
		iFile >> ch;
		while (iFile.good()) {
			number++;
			iFile >> ch;
		}
		std::cout << "Numbers of character read: " << number;
		iFile.close();
	} else {
		std::cerr << "Error occured during file opening";
		std::cin.get();
		return 1;
	}
	std::cin.get();
	return 0;
}