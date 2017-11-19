#include <iostream>

bool isLeap(int year) {
    if ((year % 4 != 0) && (year % 400 != 0))
        return false;
    return true;
}
int main(void) {
	for (int yr = 1995; yr < 2017; yr++)
		std::cout << yr << " -> " << isLeap(yr) << std::endl;
	return 0;
}