#include<iostream>
#include<vector>

void fill(std::vector<double> &, int);
void show(const std::vector<double> &);
double average(const std::vector<double> &);

const int aSize = 10;

int main()
{
	std::vector<double> vec(aSize);

	std::cout << "Enter 10 golf scores (or negative number for exit prior):\n";
	fill (vec, aSize);
	show (vec);
	std::cout << "Average: " <<	average(vec) << std::endl;

	std::cin.get();
	std::cin.get();

	return 0;
}


void fill(std::vector<double> &vec, int aSize)
{
	double temp = 0;
	for (int i = 0; i < aSize; i++){
		std::cin >> temp;
		if (temp < 0) {
			break;
		} else {
			vec[i] = temp;
		}
	}
}
void show(const std::vector<double> &vec)
{
	for (int i = 0; i < vec.size(); i++) {
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl;
}

double average(const std::vector<double> &vec)
{
	double sum = 0;
	for (int i = 0; i < vec.size(); i++) {
		sum += vec[i];
	}
	return sum / vec.size();
}