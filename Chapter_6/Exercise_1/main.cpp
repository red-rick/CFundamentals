#include <iostream>
#include <cctype>

int main()
{
	char ch;
	std::cout << "Please enter sequence characters(\'@\' for finishing): \n";
	while (std::cin.get(ch) && (ch != '@')) {
		if (std::isalpha(ch)) 
			ch = std::isupper(ch) ? std::tolower(ch) : std::toupper(ch);
		std::cout << ch;
	}
	std::cin.get();
	std::cin.get();
	return 0;
}
