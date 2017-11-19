#include <iostream>
#include <cmath>

bool isPrime(int n){
	if(n == 1)
		return false;
	for(int d = 2; d*d <= n; d++) 
		if(n % d == 0) 
			return false;
	return true;
	}
int main(void) {
	for(int i = 1; i <= 21; i++)
	if(isPrime(i))
		std::cout << i << " ";
	std::cout << std::endl;
	return 0;
}
