/* Write a function called doubleNumber() that takes one integer parameter. The function should return double the value of the parameter.
   Write a complete program that reads an integer from the user, doubles it using the doubleNumber() function you wrote in the previous quiz question, 4
   and then prints the doubled value out to the console. */


#include <iostream>

int doubleNumber(int x) 
{
	return x * 2;
}


int main()
{
	std::cout << "Enter an integer: ";
	int num{};
	std::cin >> num;

	std::cout << "The doubled value of " << num << " is " << doubleNumber(num) << '\n';

	return 0;
}