// bank.cpp -- using the Queue interface
// compile with queue.cpp
#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
#include "queue.h"
const int MIN_PER_HR = 60;

bool newcustomer(double x); // is there a new customer?

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;
// setting things up
    std::srand(std::time(0));    //  random initializing of rand()

    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;

    int hours = 100;              //  hours of simulation
    // simulation will run 1 cycle per minute
    long cyclelimit = MIN_PER_HR * hours; // # of cycles

    int customers_per_hour = 1;
	double min_per_cust = MIN_PER_HR / double(customers_per_hour);    //  average time between arrivals
    double average_time = 0.0; //average wait time
	long line_wait;     //  cumulative time in line
	long customers;     //  joined the queue
	long served;        //  served during the simulation
	int wait_time;      //  time until autoteller is free
	double temp_time = 0.0;
// running the simulation
	while (((average_time > 1.0f) && (temp_time > 1.0f)) || 
			((temp_time < 1.0f) && (average_time < 1.0f)))
	{
		Queue line(qs);         // line queue holds up to qs people
		Item temp;              //  new customer data 
		served = 0;
		wait_time = 0;
		line_wait = 0;
		customers = 0;
		average_time = temp_time;
		
		customers_per_hour++;
		
		if (customers_per_hour == 0)
			break;
		min_per_cust = MIN_PER_HR / double(customers_per_hour);

		for (int cycle = 0; cycle < cyclelimit; cycle++)
		{
			if (newcustomer(min_per_cust))  // have newcomer
			{
				if (!line.isfull())
				{
					customers++;
					temp.set(cycle);    // cycle = time of arrival
					line.enqueue(temp); // add newcomer to line
				}
			}
			if (wait_time <= 0 && !line.isempty())
			{
				line.dequeue (temp);      // attend next customer
				wait_time = temp.ptime(); // for wait_time minutes
				line_wait += cycle - temp.when();
				served++;
			}
			if (wait_time > 0)
				wait_time--;
		}
		temp_time = double(line_wait) / served;
		cout << " Customers: " << customers_per_hour << " Wait time:" << average_time  
			 << " Customers: " << (customers_per_hour + 1) << " | Wait time:" << temp_time << endl;
	}

// reporting results
    if (customers > 0)
    {
        cout << "Number of customers(per hour) for average wait time less then 1 min: "
             << customers_per_hour << "\n";
    }
    else
        cout << "No customers!\n";
    cout << "Done!\n";
    cin.get();
    cin.get();
    return 0;
}

//  x = average time, in minutes, between customers
//  return value is true if customer shows up this minute
bool newcustomer(double x)
{
    return ((std::rand() * x / RAND_MAX) < 1); 
}
