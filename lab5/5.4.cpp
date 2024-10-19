#include <iostream>
#include <cmath>

int main() 
{
	double low = -2, high = 1, step = 0.5;

	for (double x = low; x <= high; x += step)
	{
		double y;	
		if (x > 0)
		{
			y = 0;
			
			for (int k = 3; k <= 9; k++)
			{
				y += std::pow(x, -1 * k);
			}
		}
		else
		{
			y = std::pow(2 - x, 2 - x);
		}

		std::cout << y << std::endl;
	}
}