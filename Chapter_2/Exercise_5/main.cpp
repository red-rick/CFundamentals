#include <iostream>
#include <conio.h>

static const double kMultiplier = 1.8;
static const double kDifferenceValue = 32.0; 

double celsiusToFahrenheit(const double &);

int main()
{
	double temperature;

	std::cout<<"Please enter a Celsius value: ";
	std::cin>>temperature;
	std::cout<<temperature<<" degrees Celsius is "<<celsiusToFahrenheit(temperature)<<" degrees Fahrenheit\n";
	std::cout<<"For reference, here is the formula  for making the conversation:\n";
	std::cout<<"Fahrenheit = "<<kMultiplier<<" x degrees Celsius + "<<kDifferenceValue<<std::endl;
	_getch();
	return 0;
}

double celsiusToFahrenheit(const double &degrees)
{
	return (kMultiplier * degrees + kDifferenceValue);
}