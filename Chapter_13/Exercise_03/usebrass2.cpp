// usebrass2.cpp -- polymorphic example
// compile with brass.cpp
#include <iostream>
#include <string>
#include "dma.h"
const int OBJECTS = 4;
const int kLen = 40;

int main()
{
   using std::cin;
   using std::cout;
   using std::endl;

   abb * p_objects[OBJECTS];
   char temp1[kLen];
   int tempnum;
   double tempbal;
   char kind;

   for (int i = 0; i < OBJECTS; i++)
   {
       cout << "Enter label: ";
	   cin.getline(temp1, kLen);
       cout << "Enter rating: ";
       cin >> tempnum;
       cout << "Enter 1 for baseDMA, 2 for lacksDMA or"
            << " 3 for BrassPlus Account: ";
       while (cin >> kind && (kind != '1' && kind != '2' && kind != '3'))
           cout <<"Enter either 1, 2 or 3: ";
       if (kind == '1')
           p_objects[i] = new baseDMA(temp1, tempnum);
       else if (kind == '2')
       {
		   char temp2[kLen];
		   cout << "Enter color: ";
		   cin.getline(temp2, kLen);
           p_objects[i] = new lacksDMA(temp1, temp2, tempnum);
        }
	   else
	   {
		    char temp3[kLen];
		    cout << "Enter style: ";
			cin.getline(temp3, kLen);
			p_objects[i] = new hasDMA(temp1, temp3, tempnum);

	   }
        while (cin.get() != '\n')
            continue;
   }
   cout << endl;
   for (int i = 0; i < OBJECTS; i++)
   {
       p_objects[i]->View();
       cout << endl;
   }
              
   for (int i = 0; i < OBJECTS; i++)
   {
       delete p_objects[i];  // free memory
   }
   cout << "Done.\n";         

   if (!cin)
      cin.clear();
   while (cin.get() != '\n')
      continue;
   return 0; 
}
