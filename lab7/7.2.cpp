#include <iostream>
#include <cmath>

int main()
{
	int number, result = 0, i = 0, first, last;
	std::cin >> number;

	do
	{
		int rem = number % 10;
		number /= 10;
		i++;

		if (i == 2)
		{
			first = rem;
			continue;
		}
		result += rem * std::pow(10, i - 1);

		if (number < 10)
		{
			last = number;
			break;
		}
		} while (number > 0);

	result += first * std::pow(10, i);
	result += last * 10;

	std::cout << result << std::endl;
}