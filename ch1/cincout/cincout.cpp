#include <iostream> // for std::cout

int main()
{
    int x{ 5 };
    std::cout << "x is equal to: " << x << '\n'; // Using '\n' standalone
    std::cout << "And that's all, folks!\n"; // Using '\n' embedded into a double-quoted piece of text (note: no single quotes when used this way)


    std::cout << "Enter a number: "; // ask user for a number

    int y{};       // define variable x to hold user input (and value-initialize it)
    std::cin >> y; // get number from keyboard and store it in variable x

    std::cout << "You entered " << y << '\n';
    return 0;

}