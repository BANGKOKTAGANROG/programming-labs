#include <iostream>

int main()
{
	int sum = 0;

	for (int i = 4; i < 100; i += 4)
	{
		sum += i;
	}
	
	std::cout << sum << std::endl;
}