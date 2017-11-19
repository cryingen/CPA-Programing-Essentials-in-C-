#include <iostream>
int main(void) {
 float pi = 3.14159265359;
 float x, y;
 std::cout << "Enter value for x: ";
 std::cin >> x;
 float x2 = x * x;
 float pi2= pi * pi;
 y = x2 / (pi2 * (x2 + 0.5)) * (1 + x2 / (pi2 * (x2 - 0.5) * (x2 - 0.5)));
 std::cout << "y = " << y;
 return 0;
 }