#include <iostream>
using namespace std; 
const int DivideByZero = 111; 
float internaldiv (float arg1, float arg2) throw(int)
{
	if (0 == arg2)
		throw DivideByZero;
	return arg1 / arg2;
}
bool div(float &res, float arg1, float arg2)
{
	try
	{
		res = internaldiv(arg1, arg2);
	}
	catch (int &result)
	{
		if (result == 111)
			cout << "Your input is not valid. You can't divide by zero" << endl;
		return false;
	}
	return true;
}
int main(void) {
	float r, a, b;
	while (cin >> a)
	{
		cin >> b;
		if (div(r, a, b))
			cout << r << endl;
		else
			cout << "Are you kidding me?" << endl;
	}
	return 0;
}