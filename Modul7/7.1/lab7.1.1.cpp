#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	int a = 8, b = 0, c = 0;
	cout << "Input b please: ";
	cin >> b;
	try
	{
		if (b == 0)
			throw string("Your input is not valid, you can't divide by zero.");
		c = a / b;
	}
	catch (string &problem)
	{
		cout << problem << endl;
	}
	cout << "The result is: " << c << endl;
	return 0;
}