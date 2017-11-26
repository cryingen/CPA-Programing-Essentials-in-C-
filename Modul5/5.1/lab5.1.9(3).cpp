#include <iostream>
#include <string>
using namespace std;
class AdHocSquare
{
public:
	AdHocSquare(double side);
	void setSide(double side);
	double getArea();
private:
	double side;
};

class LazySquare
{
public:
	LazySquare(double side);
	void setSide(double side);
	double getArea();
private:
	double side;
	double area;
	bool sideChanged;
};

AdHocSquare::AdHocSquare(double side)
{
	this->side = side;
}
void AdHocSquare::setSide(double side)
{
	if (side < 0)
		return;
	AdHocSquare::side = side;
}
double AdHocSquare::getArea()
{
	return AdHocSquare::side*AdHocSquare::side;
}

LazySquare::LazySquare(double side)
{
	this->side = side;
	this->area = side*side;
}
void LazySquare::setSide(double side)
{
	LazySquare::side = side;
	LazySquare::sideChanged = true;
}
double LazySquare::getArea()
{
	if (LazySquare::sideChanged)
	{
		LazySquare::area = LazySquare::side*LazySquare::side;
		LazySquare::sideChanged = !LazySquare::sideChanged;
	}
	return LazySquare::area;
}