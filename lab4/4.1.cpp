#include <iostream>

int main()
{
	int theme;
	char variant;

	std::cin >> theme >> variant;

	switch (theme)
	{
	case 1:
		std::cout << "Новогодние открытки, вариант " << variant << std::endl;
		break;
	case 2:
		std::cout << "С днем рождения, вариант " << variant << std::endl;
		break;
	case 3:
		std::cout << "С Днем Защитника Отечества, вариант " << variant << std::endl;
		break;
	default:
		std::cout << "Неправильный номер темы" << std::endl;
		if (variant < 97 || variant > 99) // char 97 = 'a', char 98 = 'b', char 99 = 'c'
		{
			std::cout << "Неправильный вариант" << std::endl;
		}
		break;
	}
}