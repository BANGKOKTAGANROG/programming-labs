#include <iostream>
#include <cmath>

int main() 
{
	int x = 1, y = 2;

	bool state = (x >= 0) && (std::pow(y, 2) != 4);

	std::cout << state << std::endl;
}