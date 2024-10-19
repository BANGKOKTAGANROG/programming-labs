#include <iostream>
#include <iomanip>
#include <cmath>
#include <numbers>

int main()
{
	double low = 0.1, high = 2.5, step = 0.2;
	double const pi = std::numbers::pi;

	for (double x = low; x <= high; x += step)
	{
		double y = x * x + 2 * pi * std::cos(pi * x);
		std::cout << std::setprecision(3) << std::setw(8) << std::setfill(' ') << y << '|';
	}
}