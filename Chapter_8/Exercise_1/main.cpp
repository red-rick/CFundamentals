#include<iostream>

void show(char *, int n = 0);

int main()
{
	show("A");
	show("B");
	show("C", 10);
	std::cin.get();
	return 0;
}


void show(char *str, int n)
{
	static int count = 0;
	count++;
	if(n != 0)
		for (int i = 0; i < count; i++)
			std::cout << str << std::endl;
	else
		std::cout << str << std::endl;
}