#include "stonewt1.h"

int main()
{
	using namespace std;

	Stonewt first(123.5);
	Stonewt second(20.4);
	Stonewt third (2, 13.4);

	Stonewt subst = (first - second);
	subst.changeType(Stonewt::STONE);
	cout << "Sum " << first  << " and " << second << ": " << (first + second) << endl;
	cout << "Substraction " << first << " and " << second << ": " << subst << endl;
	cout << "Multiply " << second << " and " << third << ": " << (second * third) << endl;

	cin.get();
	return 0;
}