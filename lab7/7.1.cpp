#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	int k;
	std::cin >> k;

	double sum = 0;

	for (int i = 1; i <= k; i++)
	{
		sum += (std::pow(i * i - 4, 2) * std::tgamma(i + 1)) / (std::tgamma(2 * i));
	}
	
	std::cout << std::setprecision(12) << sum << std::endl;
	return 0;
}