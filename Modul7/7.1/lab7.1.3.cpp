#include <string>
using namespace std;
int main(void)
{
	int a = 0, b = 0, c = 0;
	cout << "Input b please: ";
	cin >> b;
	cout << "Input a please: ";
	cin >> a;
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
	cout << "a / b = " << c << endl;
	return 0;
}