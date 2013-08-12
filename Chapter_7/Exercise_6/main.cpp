#include<iostream>

int fill_array(double [], int);
void show_array(double [], int);
void reverse_array(double [], int);

const int kSize = 5;

int main()
{
	double arr[kSize] = {};

	int number = fill_array(arr, kSize);
	show_array(arr, number);
	reverse_array(arr, number);
	show_array(arr, number);
	reverse_array((arr + 1), number -2);
	show_array(arr, number);

	std::cin.get();
	std::cin.get();
	return 0;
}


int fill_array(double arr[], int aSize)
{
	std::cout << "Enter " << aSize << " numbers: \n";
	int i = 0;
	for ( ; i < aSize ; i++) {
		std::cout << "a[" << i << "] = ";
		std::cin >> arr[i];
		if (!std::cin) {
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			break;
		}
	}

	return i;
}

void show_array(double arr[], int aSize)
{
	std::cout << "Array:\n";
	for(int i = 0; i < aSize; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout <<std::endl;
}

void reverse_array(double arr[], int aSize)
{
	int count = aSize / 2;
	int temp = 0;
	for (int i = 0; i < count; i++){
		temp = *(arr + i);
		*(arr + i) = *(arr + aSize - i - 1);
		*(arr + aSize - i - 1) = temp;
	}
}