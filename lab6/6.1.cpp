#include <iostream>

int main()
{
	int n = 0;
	int bacteria = 1;

	do
	{
		bacteria *= 2;
		n++;
	} while (bacteria < 10000);

	std::cout << n << std::endl;
	return 0;
}