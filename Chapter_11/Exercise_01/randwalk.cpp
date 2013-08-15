// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <fstream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include "vect.h"
int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));     // seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;

	fstream file;
	file.open("label.txt", ios_base::out);
	if(file.is_open()) {
		cout << "Enter target distance (q to quit): ";
		while (cin >> target)
		{
			cout << "Enter step length: ";
			if (!(cin >> dstep))
				break;
			file << "Target Distance: " << target << ", Step Size: " << dstep << endl; 
			while (result.magval() < target)
			{
				step.rect_mode();
				file << steps << ": " << step << endl;
				direction = rand() % 360;
				step.reset(dstep, direction, Vector::POL);
				result = result + step;
				steps++;
			}
			file << "After " << steps << " steps, the subject "
				"has the following location:\n";
			file << result << endl;
			result.polar_mode();
			file << " or\n" << result << endl;
			file << "Average outward distance per step = "
				<< result.magval()/steps << endl;
			steps = 0;
			result.reset(0.0, 0.0);
			cout << "Enter target distance (q to quit): ";
		}
		cout << "Bye!\n";
		cin.clear();
		while (cin.get() != '\n')
			continue;
		file.close();
	}
    return 0; 
}
