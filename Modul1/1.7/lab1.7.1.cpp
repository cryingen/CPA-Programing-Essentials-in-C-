#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a1,a2,a3,a4,a5;
    cout<<"Input 1st vavue: ";
    cin>>a1;
    cout<<"Input 2nd vavue: ";
    cin>>a2;
    cout<<"Input 3rd vavue: ";
    cin>>a3;
    cout<<"Input 4th vavue: ";
    cin>>a4;
    cout<<"Input 5th vavue: ";
    cin>>a5;
    cout<<endl;    
    cout<<fixed<<setprecision(1)<<a1<<endl;
    cout<<setprecision(2)<<a2<<endl;
    cout<<setprecision(6)<<a3<<endl;
    cout<<setprecision(2)<<a4<<endl;
    cout<<(int)a5<<endl;
    return 0;
}