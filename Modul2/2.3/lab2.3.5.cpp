#include <iostream>

int main(void) {
    int side;
    std::cout << "Input the square's side long (it must be int, from 1 to 177): ";
    std::cin >> side;
    if((side <= 0) || (side > 177))
    {
        std::cout << "Value's wrong";
        return 1;
    }
    std::cout << '+';
    for(int i = 0; i < side; i++)
        std::cout << '-'; 
    std::cout << '+' << std::endl;
    for(int i = 0; i < side; i++) 
    {  
        std::cout << '|';
        for(int j = 0; j < side; j++)
            std::cout << ' ';
        std::cout << '|' << std::endl;
    } 
    std::cout << '+';
    for(int i = 0; i < side; i++)
        std::cout << '-';
    std::cout << '+' << std::endl;
    return 0; 
    }