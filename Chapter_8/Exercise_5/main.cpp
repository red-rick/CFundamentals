#include<iostream>
using namespace std;

template <typename T> 
T max(T [], int);

template <> char * max<char *>(char *str[], int n);

int main()
{
	int arr1[6] = {10, 21, 33, 1, 53, -23};
	double arr2[4] = {10.5, 3.4, 5.6, 9.1};
	char *strs[5] = {"January", "February", "Mart", "April", "May"};

	cout << "Max int: " << max(arr1, 6) << endl;
	cout << "Max double: " << max(arr2, 4) << endl;
	cout << "Longest string: " << max(strs, 5) << endl;

	cin.get();
	return 0;
}

template <typename T> 
T max(T arr[], int n)
{
	T temp;
	if (n > 0) {
		temp = arr[0];
		for (int i = 1; i < n; i++) 
			if (temp < arr[i])
				temp = arr[i];
	}
	return temp;
}

template <> char * max<char *>(char *str[], int n)
{
	char *temp;
	if (n > 0) {
		temp = str[0];
		for (int i = 1; i < n; i++) 
			if (strlen(temp) < strlen(str[i]))
				temp = str[i];
	}
	return temp;
}