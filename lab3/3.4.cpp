#include <iostream>

int main()
{
	for (int i = 0; i < 3; i++)
	{
		int x;
		std::cin >> x;

		x = x > 0 ? x * x * x : 0;
		std::cout << x << std::endl;
	}
}