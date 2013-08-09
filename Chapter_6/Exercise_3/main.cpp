#include<iostream>

void printMenu();

int main()
{
	char ch;
	printMenu();

	while(std::cin >> ch) {
		switch(ch) {
			case 'a' :
				std::cout << "Nice choice\n";
				break;
			case 'b' :
				std::cout << "Try another letter\n";
				break;
			case 'c' :
				std::cout << "It's great, but not\n";
				break;
			case 'd' :
				std::cout << "ZzZzZz..\n";
				break;
			default:
				std::cout << "Please enter a, b, c or d: ";
		}
	}

	std::cin.get();
	return 0;
}

void printMenu()
{
	std::cout << "Please enter one of the following choices: \na) first b) second\nc) third d) fourth\n";
}