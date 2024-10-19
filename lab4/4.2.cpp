#include <iostream>
#include <cmath>

int main()
{
	std::cout << "1. a = 0.1, b = 9.8, c = 11.12\n" << "2. a = 10, b = 10.05, c = 6.2\n" << "3. a = 100, b = 3.03, c = 7.12\n" << std::endl;

	int var;
	double x, y;
	double a, b, c;

	std::cout << "Enter x: ";
	std::cin >> x;

	std::cout << "Enter variant: ";
	std::cin >> var;

	switch (var)
	{
	case 1:
		a = 0.1;
		b = 9.8;
		c = 11.12;
		break;
	case 2:
		a = 10;
		b = 10.05;
		c = 6.2;
		break;
	case 3:
		a = 100;
		b = 3.03;
		c = 7.12;
		break;
	default:
		std::cout << "Wrong number!" << std::endl;
		return 1;
	}

	double thing = std::log10(a);

	if (thing > x)
	{
		y = std::cbrt(b * b + std::sqrt(std::abs(x + c)));
	}
	else if (thing < x)
	{
		y = std::sin(x + a - b);
	}
	else
	{
		y = std::cos(x - b - c);
	}

	std::cout << "y = " << y << std::endl;
	return 0;
}