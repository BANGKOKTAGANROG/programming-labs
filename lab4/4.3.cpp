#include <iostream>

// gcc version

//int main()
//{
//	int age;
//	std::cout << "Enter age: ";
//	std::cin >> age;
//
//	if (age < 0)
//	{
//		std::cout << "Age cannot be negative." << std::endl;
//		return 1;
//	}
//
//	switch (age)
//	{
//	case 0 ... 13:
//		std::cout << "Мальчик";
//		break;
//	case 14 ... 20:
//		std::cout << "Юноша";
//		break;
//	case 21 ... 70:
//		std::cout << "Мужчина";
//		break;
//	default:
//		std::cout << "Старец";
//		break;
//	}
// 
//  return 0;
//}

// MSVC version

int main()
{
	int age;
	std::cout << "Enter age: ";
	std::cin >> age;
	
	if (age < 0) std::cout << "Age cannot be negative." << std::endl;
	else if (age < 14) std::cout << "Мальчик" << std::endl;
	else if (age < 21) std::cout << "Юноша" << std::endl;
	else if (age < 70) std::cout << "Мужчина" << std::endl;
	else std::cout << "Старец" << std::endl;

	return 0;
}