#include <iostream>

int main(void) {
    int valute[5] = { 50, 20, 10, 5, 1};
    int value;
    std::cout << "Input the value: ";
    std::cin >> value;
    for(int i = 0; i <= 4; i++)
        while(value >= valute[i])
        {
            std::cout << valute[i] << " ";
            value -= valute[i];
        }
}
