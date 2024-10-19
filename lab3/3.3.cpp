#include <iostream>
#include <iomanip>
#include <cmath>

double f(double x) { return std::abs(x + 1); }

double g(double x) { return -1 * std::abs(x + 1) + 2; }

struct Point
{
	double x, y;
};

int main()
{
	Point point;
	std::cin >> point.x >> point.y;

	bool inside_of_area = false;

	if (point.x > 0 || point.x < -2)
	{
		inside_of_area = false;
	}

	else if (point.y >= f(point.x) && point.y <= g(point.x))
	{
		inside_of_area = true;
	}

	std::cout << std::boolalpha << inside_of_area << std::endl;
	return 0;
}