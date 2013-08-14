#include <iostream>
using namespace std;
#include <cstring> // for strlen(), strcpy()
struct stringy {
	char * str; // points to a string
	int ct; // length of string (not counting '\0')
};

void show(const stringy &str, int n = 1);
void show(const char *str, int n = 1);
void set(stringy &strc, char *s);

int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing); // first argument is a reference,
	// allocates space to hold copy of testing,
	// sets str member of beany to point to the
	// new block, copies testing to new block,
	// and sets ct member of beany
	show(beany); // prints member string once
	show(beany, 2); //prints member string twice
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing); // prints testing string once
	show(testing, 3); // prints testing string thrice
	show("Done!");

	cin.get();
	delete beany.str;
	return 0;
}

void show(const stringy &str, int n)
{
	for (int i = 0; i < n; i++)
		cout << str.str << endl;
}

void show(const char *str, int n)
{
	for (int i = 0; i < n; i++)
		cout << str << endl;
}

void set(stringy &strc, char *s)
{
	strc.ct = strlen(s);
	strc.str = new char(strc.ct + 1);
	strcpy(strc.str, s);
}