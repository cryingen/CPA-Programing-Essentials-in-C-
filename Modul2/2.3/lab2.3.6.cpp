#include <iostream>
#include <string>

int main()
{
    int n, count;
    std::cout << "Input n: ";
    std::cin >> n;
    std::cout << "Input amount: ";
    std::cin >> count;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < count * (2 * n - 1); j++)
        {
            if((j % (2 * n - 1) == i) || ( j % (2 * n - 1) == 2 * n - 2 - i) || (i == 0))
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout << "\n";
    }
}