#include <iostream>

int main(void) {
    int num;
    std::cout << "Input number: ";
    std::cin >> num;
    int res = 1;
    if (num == 0)
        res = 1;
    else
        for (int i = 1; i <= num; i++ )
            res *= i;
    std::cout << res;
}