#include <iostream>

int main(void) {
    int N;
    std::cout << "Input N, please: ";
    std::cin >> N;
    int sum = 0;
    for (int i = 1; i <= N; i++)
        sum += i;
    std::cout <<"The sum of first N natural numbers: " << sum;
    return 0;
}
