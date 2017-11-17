#include <iostream>
#include <string>
#include <math.h>

using namespace std;
class Square
{
    public:
        Square(double side);
        double side;
        double area;
    public:
};
Square::Square(double side)
{
    this->side = side;
    this->area = side * side;
}
void print(Square square)
{
    cout << "Square: side = " << square.side << ", area = " << square.area << endl;
}
double Set_side(void)
{
    int side;
    cout << "Input side: ";
    cin >> side;
    return side;
}
int main()
{
    int side = Set_side();
    Square s(side);
    print(s);
    return 0;
}
