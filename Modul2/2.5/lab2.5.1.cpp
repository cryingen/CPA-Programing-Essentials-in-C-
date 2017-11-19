#include <iostream>

int main(void) {
    int x;
    double a, b;
    do
    {
        std::cout << "MENU:\n0 - exit\n1 - addition\n2 - subtraction\n3 - multiplication\n4 - division\nYour choice?\n";
        std::cin >> x;
        std::cout << "Input first number: ";
        std::cin >> a;
        std::cout << "Input second number: ";
        std::cin >> b;
        std::cout.precision(5);
        switch (x) {
        case 1:
            std::cout << "Result: " << (a + b) << std::endl;
            break;
        case 2:
            std::cout << "Result: " << (a - b) << std::endl;
            break;
        case 3:
            std::cout << "Result: " << (a * b) << std::endl;
            break;
        case 4:
            if(b == 0)
                std::cout << "Division by zero\n";
            else
                std::cout << "Result: " << (a / b) << std::endl;
            break;
        }
    }while(x != 0);
}