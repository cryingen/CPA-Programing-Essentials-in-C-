#include <iostream>
using namespace std;
int main(void) {
    int x;
    double a, b;
    do
    {
        cout << "MENU:\n0 - exit\n1 - addition\n2 - subtraction\n3 - multiplication\n4 - division\nYour choice?\n";
        cin >> x;
        cout << "Input first number: ";
        cin >> a;
        cout << "Input second number: ";
        cin >> b;
        cout.precision(5);
        switch (x) {
        case 1:
            cout << "Result: " << (a + b) << endl;
            break;
        case 2:
            cout << "Result: " << (a - b) << endl;
            break;
        case 3:
            cout << "Result: " << (a * b) << endl;
            break;
        case 4:
            if(b == 0)
                cout << "Division by zero\n";
            else
                cout << "Result: " << (a / b) << endl;
            break;
        }
    }while(x != 0);
}