// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
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
    unsigned long sum = 0UL, max = 0UL, min = 0UL;
	double average= 0.0;
    double target;
    double dstep;
	int ntrials;
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
		max = 0UL;
		min = 0UL;
		average = 0.0;
		sum = 0UL;

        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
		cout << "Enter number of trials: ";
		if (!(cin >> ntrials))
			break;
		unsigned long *arrSteps = new unsigned long[ntrials];
		for (int i = 0; i < ntrials; i++) {
			arrSteps[i] = 0;
			step.reset(0, 0, Vector::POL);
			result.reset(0, 0, Vector::POL);
			while (result.magval() < target)
			{
				direction = rand() % 360;
				step.reset(dstep, direction, Vector::POL);
				result = result + step;
				arrSteps[i]++;
			}
			if((i == 0) || (arrSteps[i] > max))
				max = arrSteps[i];
			if ((i == 0) || (arrSteps[i] < min))
				min = arrSteps[i];
			sum += arrSteps[i];
		}
		if (ntrials != 0)
			average = double(sum) / double(ntrials); 

        cout << "\nTrials: " << ntrials << "\nMax steps count: " << max
			 << "\nMin steps count: " << min << "\nAverage steps count: " << average << endl;
		delete [] arrSteps;
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";

    cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();

    return 0; 
}
