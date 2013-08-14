#include <iostream>
#include <cctype>
#include "stack0.h"

void setCustomer(customer &c);
void showCustomer(const customer &c);

int main()
{
    using namespace std;
    Stack st; // create an empty stack
    char ch;
    customer po;
	double total = 0.0;
    cout << "Please enter A to add a payment order,\n"
         << "R to remove payment, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')   
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
             case 'A':
             case 'a': setCustomer(po);
                       if (st.isfull())
                           cout << "stack already full\n";
                       else
                           st.push(po);
                       break;
             case 'R':
             case 'r': if (st.isempty())
                           cout << "stack already empty\n";
                       else {
                           st.pop(po);
                           showCustomer(po);
						   total += po.payment;
						   cout << "Total payment: " << total << endl;
                       }
                       break;
        }
        cout << "Please enter A to add a payment order,\n"
             << "R to remove payment, or Q to quit.\n";
    }
    cout << "Bye\n";
    return 0; 
}

void setCustomer(customer &c)
{
	std::cout << "Enter full name: ";
	std::cin.getline(c.fullname, kLen);
	std::cout << "Enter payment amount : ";
	(std::cin >> c.payment).get();
}

void showCustomer(const customer &c)
{
	std::cout << c.fullname << " " << c.payment << std::endl;
}