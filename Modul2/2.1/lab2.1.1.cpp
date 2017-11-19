#include <iostream>
int main(void) { 
    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;
    if (year % 4 != 0)
        std::cout << "common year" << std::endl;
    else if (year % 100 != 0)
        std::cout << "leap year" << std::endl;
    else if (year % 400 != 0)
        std::cout << "common year" << std::endl;
    else
        std::cout << "leap year" << std::endl;
    return 0;
}