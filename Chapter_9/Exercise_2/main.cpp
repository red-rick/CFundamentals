// static.cpp -- using a static local variable
#include <iostream>
#include <string>
// constants
const int ArSize = 10;

// function prototype
void strcount(const std::string &str);

int main()
{
    using namespace std;
	string nStr;
    char next;

    cout << "Enter a line:\n";
    getline(cin, nStr);
    while (!nStr.empty())
    {
        strcount(nStr);
        cout << "Enter next line (empty line to quit):\n";
        getline(cin, nStr);
    }
    cout << "Bye\n";

    cin.get();

    return 0;
}

void strcount(const std::string &str)
{
    using namespace std;
    static int total = 0;        // static local variable
	int count = str.length();               // automatic local variable

    cout << "\"" << str <<"\" contains ";

    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}
