#include<iostream>

const int strsize = 50;

struct bop {
	char fullname[strsize]; // real name
	char title[strsize]; // job title
	char bopname[strsize]; // secret BOP name
	int preference; // 0 = fullname, 1 = title, 2 = bopname
};

enum prefType {fullName, title, bopname};

void printMenu();

int main()
{
	char ch;
	bop members[] = {
		{"John Doe", "Programmer", "OAK", 2},
		{"Any Lee", "QA", "LEAF", 1},
		{"Jack AppleSeed", "Manager", "ROCK", 0}
	};

	printMenu();
	std::cout << "Enter you choice: ";
	std::cin>> ch;
	const int kArSize = 3;
	while (ch != 'q') {
		switch(ch) {
			case 'a' :
				for(int i = 0; i < kArSize; i++) 
					std::cout << members[i].fullname << std::endl;
				break;
			case 'b' :
				for(int i = 0; i < kArSize; i++) 
					std::cout << members[i].title << std::endl;
				break;
			case 'c' :
				for(int i = 0; i < kArSize; i++) 
					std::cout << members[i].bopname << std::endl;
				break;
			case 'd' :
				for(int i = 0; i < kArSize; i++) {
					switch(members[i].preference) {
						case fullName :
							std::cout << members[i].fullname << std::endl;
							break;
						case title :
							std::cout << members[i].title << std::endl;
							break;
						case bopname :
							std::cout << members[i].bopname << std::endl;
							break;
						default:
							std::cout << "No preference \n";
					}
				}
				break;
			default:
				std::cout << "Please enter a, b, c, d or q \n";
		}

		std::cout << "Next choice: ";
		std::cin >> ch;
	}

	std::cin.get();
	return 0;
}


void printMenu()
{
	std::cout << "Benevolent Order of Programmers Report\na. display by name    b. display by title\n"
			  << "c. display by bopname d. display by preference\nq. quit\n";
}