#include <iostream>

int readNumber()
{
	std::cout << "Enter an integer: ";
	int x{};
	std::cin >> x;

	return x;
}


void writeAnswer(int x)
{
	std::cout << "The sum of entered integers is: " << x << '\n';
}