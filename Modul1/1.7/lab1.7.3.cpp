#include <iostream>
#include <stdio.h>
int main()
{
    int a1, a2, a3, a4;
    std::cout << "Please, input first value" << std::endl;
    std::cin >> a1;
    std::cout << "Please, input second value" << std::endl;
    std::cin >> a2;
    std::cout << "Please, input second value" << std::endl;
    std::cin >> a3;
    std::cout << "Please, input second value" << std::endl;
    std::cin >> a4;
    printf("%d.%d.%d.%d", a1, a2, a3, a4);
    return 0;
}