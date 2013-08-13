#include<iostream>

const int kLen = 20;
const int kSize = 2;
struct chaff {
	char dross[kLen];
	int slag;
};

void setchaff(chaff &ch, char *str = "Some", int n = 55);
void showchaff(const chaff &);

int main()
{
	char buffer1[100];
	char *buffer2 = new char[sizeof(chaff) * kSize];

	chaff *arr1 = new(buffer1) chaff[kSize];
	chaff *arr2 = new(buffer2) chaff[kSize];

	setchaff(arr1[0], "First", 132);
	setchaff(arr1[1], "Second", 333);

	setchaff(arr2[0], "Third", 444);
	setchaff(arr2[1], "Fourth", 555);

	std::cout << "First array:\n";
	for (int i = 0; i < kSize; i++)
		showchaff(arr1[i]);

	std::cout << "Second array:\n";
	for (int i = 0; i < kSize; i++)
		showchaff(arr2[i]);

	delete [] buffer2;

	std::cin.get();
	return 0;	
}

void setchaff(chaff &ch, char *str, int n)
{
	strncpy(ch.dross, str, kLen);
	ch.slag = n;
}

void showchaff(const chaff &ch)
{
	std::cout << ch.dross << ", " << ch.slag << std::endl;
}