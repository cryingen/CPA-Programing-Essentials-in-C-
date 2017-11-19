#include <iostream>
int main(void) { 
    int year;
    std::cout << "Enter a year, please: ";
    std::cin >> year;
    int a, b, c, d, e;
    a = year % 19;
    b = year % 4;
    c = year % 7;
    d = (a * 19 + 24) % 30;
    e = (2 * b + 4 * c + 6 * d + 5) % 7;
    if (d + e < 10)
    {
        std::cout << "March "; 
        std::cout << d + e + 22  << std::endl;
    }
    else 
    {
        std::cout << "April ";
        std::cout << (d + e - 9) << std::endl;
    }
}