#include "SLib.h"
#include <iostream>

namespace SLib
{
	void Greeter::greet(std::string name)
	{
		std::cout << "Введите имя: ";
		std::cin >> name;
		std::cout << "Здравствуйте, " << name << '!';
	}
}