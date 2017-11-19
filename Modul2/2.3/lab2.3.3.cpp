#include <iostream>

int main(void) {
    int power;
    long result = 1;
    std::cout << "Input the power of 2 (from 0 to 63): ";
    std::cin >> power;
    if((power <= 0) || (power >= 63))
    {
        std::cout << "Value's wrong";
        return 1;
    }
    for(int i = 0; i < power; i++)
        result *= 2;
    std::cout << "2^" << power << " = " << result;
    return 0;
    }