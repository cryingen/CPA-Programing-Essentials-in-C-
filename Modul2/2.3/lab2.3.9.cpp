#include <iostream>
using namespace std;
int main()
{
    int side;
    cout << "Input the square side, it must be odd(and more then 0): ";
    cin >> side;
    if(!(side % 2) || (side <= 0))
    {
        cout << "The input value is wrong!";
        return 1;
    }
    cout << side * side - side * 2 + 2;
    return 0;
}
