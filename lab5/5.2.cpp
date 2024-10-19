#include <iostream>

int main()
{
	double x = 0.8;
	int n = 100;

	double sum = x;
	double term = x;

	for (int i = 2; i <= n; i++)
	{
		term *= -1 * x * (i - 1) / i;
		sum += term;
	}

	std::cout << sum << std::endl;
	return 0;
}