#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, count;
    cout << "Input n: ";
    cin >> n;
    cout << "Input amount: ";
    cin >> count;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < count * (2 * n - 1); j++)
        {
            if((j % (2 * n - 1) == i) || ( j % (2 * n - 1) == 2 * n - 2 - i) || (i == 0))
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}