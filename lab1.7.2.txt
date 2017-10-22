#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;
int main()
{
    float EPSILON = numeric_limits<float>::epsilon();
    int a1,a2;
    cout<<"This program compare two value's\nPlease, input first value"<<endl;
    cin>>a1;
    cout<<"Please, input second value"<<endl;
    cin>>a2;
    bool fuck;
    float diff=1/(float)a1-1/(float)a2;
    if(diff < 0)
	    fuck=-EPSILON > -diff;
    else
	    fuck=diff < EPSILON;
    if(fuck)
        cout<<"This numbers are equal by "<<fixed<<setprecision(7)<<EPSILON;
    else 
        cout<<"This numbers aren't equal by "<<fixed<<setprecision(7)<<EPSILON;
    return 0;
}