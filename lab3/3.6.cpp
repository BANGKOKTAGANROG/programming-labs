#include <iostream>

int main()
{
	int number, b;
	std::cin >> number >> b;

	int sum = 0;
	sum += number % 10;
	number /= 10;

	sum += number % 10;
	number /= 10;

	sum += number % 10;
	number /= 10;

	bool is_bigger = sum > b;
	std::cout << std::boolalpha << is_bigger << std::endl;
}