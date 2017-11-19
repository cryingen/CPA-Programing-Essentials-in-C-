#include <iostream>
int main(void) {
    int i, j, k;
    std::cout << "Enter i: ";
    std::cin >> i;
    std::cout << "Enter j: ";
    std::cin >> j;
    i += 2;
    j -= i;
    k = i / j;
    k += k;
    k--;
    j = k % i;
    k += (k + i);
    k += (k / j);
    k = k * k * k;
    k += (i * j);
    std::cout << k;
    return 0;
}
