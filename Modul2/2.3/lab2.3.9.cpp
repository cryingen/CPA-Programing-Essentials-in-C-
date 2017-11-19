#include <iostream>

int main()
{
    int side;
    std::cout << "Input the square side, it must be odd(and more then 0): ";
    std::cin >> side;
    if(!(side % 2) || (side <= 0))
    {
        std::cout << "The input value is wrong!";
        return 1;
    }
    std::cout << side * side - side * 2 + 2;
    return 0;
}
