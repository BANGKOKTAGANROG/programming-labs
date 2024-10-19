#include <iostream>
#include <cmath>

int main()
{
	double low = -0.5, high = 5, step = 0.2;

	for (double x = low; x <= high; x += step)
	{
		double y;
		if (x < 0)
		{
			y = std::exp(-1 * x);
		}
		else if (x <= 4.5)
		{
			y = 1 - std::log(std::abs(1 + x * x));
		}
		else
		{
			y = 2 * x;
		}

		std::cout << y << std::endl;
	}

	return 0;
}