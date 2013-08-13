#include<iostream>
#include<string>
#include<cctype>

std::string &convert(std::string &str);

int main()
{
	std::string str;
	std::cout << "Enter a string (q for quit): ";
	std::getline(std::cin, str);
	while(std::cin && str != "q"){
		std::cout << convert(str) << std::endl;
		std::cout << "Enter another string (q for quit): ";
		std::getline(std::cin, str);
	}
	return 0;
}

std::string &convert(std::string &str)
{
	for(int i = 0; i < str.length(); i++)
		str[i] = std::toupper(str[i]);
	return str;
}