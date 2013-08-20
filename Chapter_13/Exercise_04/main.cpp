#include "port.h"

const int SIZE = 4;

int main()
{	
	Port *arr[SIZE] = {
		new Port("Croft", "Colheita", 10),
		new VintagePort("Penfolds", 10, "Penfold Club Port", 2001),
		new VintagePort("Fonseca Guimaraens", 15, "Fonseca Vinatage Port", 2009),
		new Port("Sandeman", "Crusted", 123)
	};

	for (int i = 0; i < SIZE; i++) {
		std::cout << *arr[i] << std::endl;
		*arr[i] += 10;
	}
	std::cout << std::endl;
	int sum= 0;
	for (int i = 0; i < SIZE; i++) {
		arr[i]->Show();
		sum += arr[i]->BottleCount();
		std::cout << std::endl;
	}
	std::cout << "Total bottles: " << sum;
	for (int i = 0; i < SIZE; i++)
		delete arr[i];

	std::cin.get();
	return 0;
}