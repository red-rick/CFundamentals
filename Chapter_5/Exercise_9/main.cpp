#include<iostream>
#include<string>

const int kArSize = 20;

int main()
{
	std::string str;
	const std::string finishFlag = "done";
	std::cout << "Enter words (to stopm type the word \'done\'):\n";
	std::cin >> str;
	int counter = 0;
	while ( str.compare(finishFlag) != 0 ) {
		counter++;
		std::cin >> str;
	}
	std::cout << "You enter a total of " << counter << " words";
	
	std::cin.ignore(INT_MAX, '\n');
	std::cin.get();
	return 0;
}