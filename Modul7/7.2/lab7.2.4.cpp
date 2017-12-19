#include <iostream>
#include <exception>
#include <stdexcept>
#include <string>
using namespace std;
class invalid_area_value : public invalid_argument
{
public:
	explicit invalid_area_value(const string& a) : invalid_argument(a) 
	{
		cout << a << endl;
	};
};
float square_area(float a) throw (invalid_area_value)
{
	if (a <= 0)
		throw invalid_area_value("Your input is not valid. The area or side can't be negative.");
	return a * a;
}
float rectangle_area(float a, float b) throw (invalid_area_value)
{
	if (a <= 0 || b <= 0) 
		throw invalid_area_value("Your input is not valid. The area can't be negative.");
	return a * b;
}
int main(void)
{
	float a, b;
	cin >> a;
	cin >> b;
	try
	{
		float rsquare = square_area(a);
		float rrectangle = rectangle_area(a, b);
		cout << rsquare << endl << rrectangle << endl;
	}
	catch (invalid_area_value ex)
	{
		cout << ex.what() << endl;
	}
	return 0;
}