#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;
int main()
{
    float EPSILON = numeric_limits<float>::epsilon();
    int a1, a2;
    std::cout << "This program compare two value's\nPlease, input first value" << std::endl;
    std::cin >> a1;
    std::cout << "Please, input second value" << std::endl;
    std::cin >> a2;
    bool flag;
    float diff = 1 / (float)a1 - 1 / (float)a2;
    if(diff < 0)
	flag =- EPSILON > -diff;
    else
	flag = diff < EPSILON;
    if(flag)
        std::cout << "This numbers are equal by " << fixed << std::setprecision(7) << EPSILON;
    else 
        std::cout << "This numbers aren't equal by " << fixed << std::setprecision(7) << EPSILON;
    return 0;
}