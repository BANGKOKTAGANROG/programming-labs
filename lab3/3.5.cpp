#include <iostream>
#include <string>

int main()
{
	std::string month;
	int n;
	std::cin >> n;

	if (n == 1) month = "jan";
	if (n == 2) month = "feb";
	if (n == 3) month = "mar";
	if (n == 4) month = "apr";
	if (n == 5) month = "may";
	if (n == 6) month = "jun";
	if (n == 7) month = "jul";
	if (n == 8) month = "aug";
	if (n == 9) month = "sep";
	if (n == 10) month = "oct";
	if (n == 11) month = "nov";
	if (n == 12) month = "dec";
	if (n > 12 || n < 1) month = "wrong number";

	std::cout << month << std::endl;

	return 0;
}