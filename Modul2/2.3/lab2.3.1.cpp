#include <iostream>

int main(void) {
    int c, steps = 0;//counter for steps in loop
    std::cout << "Input the int number more then 0: ";
    std::cin >> c;
    if(c <= 0)
    {
        std::cout << "Value's wrong";
        return 1;
    }
    while(c != 1)
    {
        if(!(c % 2))
            c /= 2;
        else
            c = c * 3 + 1;
        steps++;
        std::cout << c << std::endl;
    }
    std::cout << "Steps: " << steps;
    return 0;
    }