#include <iostream>
#include <cmath>

int main()
{
	double x = 1.25849, term = 1, sum = term;
	int n = 10;

	for (int i = 0; i < n; i++)
	{
		term *= (std::cos(x) - std::sin(x) * std::tan(i * x)) / (i + 1);
		sum += term;
	}

	std::cout << sum << std::endl;
	return 0;
}