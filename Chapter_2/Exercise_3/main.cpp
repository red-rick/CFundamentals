#include <iostream>
#include <conio.h>

void infoAboutMice(void);
void infoAboutDirective(void);

int main()
{
	infoAboutMice();
	infoAboutMice();
	infoAboutDirective();
	infoAboutDirective();
	_getch();
}
void infoAboutMice()
{
	std::cout<<"Tree blind mice\n";
}


void infoAboutDirective()
{
	std::cout<<"See how they run\n";
}