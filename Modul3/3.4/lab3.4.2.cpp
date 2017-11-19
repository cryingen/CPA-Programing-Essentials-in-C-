#include <iostream>

bool isLeap(int year) {
	if ((year % 4 != 0) && (year % 400 != 0))
		return false;
	return true;
}
int monthLength(int year, int month) {
	int vector[12]{ 31,28,31,30,31,30,31,31,30,31,30,31 };
		if (isLeap(year))
			vector[1] = 29;
		return vector[month - 1];
}
int main(void) {
	for (int yr = 2000; yr < 2002; yr++) {
		for (int m = 1; m <= 12; m++)
			std::cout << monthLength(yr, m) << " ";
		std::cout << std::endl;
	}
	return 0;
}
