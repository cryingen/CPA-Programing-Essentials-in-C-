#include <iostream>
#include <iomanip>
int main()
{
    double a1, a2, a3, a4, a5;
    std::cout << "Input 1st vavue: ";
    std::cin >> a1;
    std::cout << "Input 2nd vavue: ";
    std::cin >> a2;
    std::cout << "Input 3rd vavue: ";
    std::cin >> a3;
    std::cout << "Input 4th vavue: ";
    std::cin >> a4;
    std::cout << "Input 5th vavue: ";
    std::cin >> a5;
    std::cout << std::endl;    
    std::cout << std::fixed << std::setprecision(1) << a1 <<std::endl;
    std::cout << std::setprecision(2) << a2 << std::endl;
    std::cout << std::setprecision(6) << a3 <<std::endl;
    std::cout << std::setprecision(2) << a4 <<std::endl;
    std::cout << (int)a5 << std::endl;
    return 0;
}