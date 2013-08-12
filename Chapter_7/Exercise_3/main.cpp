#include<iostream>

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void show(box);
void show(box *);

int main()
{
	box aBox = {"Hugo", 20, 30, 20, 1200}; 

	std::cout << "Show box info(by value):\n";
	show(aBox);
	std::cout << "Show box info(by address):\n";
	show(&aBox);
	std::cin.get();
	return 0;
}


void show(box a)
{
	std::cout<<"Maker: " << a.maker << "\nheight: " << a.height << "\nwidth: " << a.width
		<< "\nlength: " << a.length << "\nvolume: " << a.volume << std::endl;
}

void show(box *a)
{
	std::cout<<"Maker: " << a->maker << "\nheight: " << a->height << "\nwidth: " << a->width
		<< "\nlength: " << a->length << "\nvolume: " << a->volume << std::endl;
}