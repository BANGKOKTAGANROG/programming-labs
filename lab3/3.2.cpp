#include <iostream>

int main()
{
	int N = 70;

	bool state = N % 3 != 0 && N % 7 == 0 && N % 10 == 0;
	
	std::cout << std::boolalpha << state << std::endl;
}