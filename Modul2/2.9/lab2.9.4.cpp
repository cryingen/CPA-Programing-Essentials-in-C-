#include <iostream>
#include <cmath>
using namespace std;
int main(void) {
    double vector[] = { 1., 2., 3., 4., 5. };
    int n = sizeof(vector) / sizeof(vector[0]);
    double ArithM = 0;
    double HarmM = 0;
    double GeomM = 1;
    double RootMSqr = 0;//RootMeanSquare
    for(int i = 0; i < n; i++)
    {
        ArithM += vector[i];
        HarmM += 1 / vector[i];
        GeomM *= vector[i];
        RootMSqr += vector[i] * vector[i];
    }
    ArithM /= n;
    HarmM = n / HarmM;
    GeomM = pow(GeomM, (1. / n));
    RootMSqr = sqrt(RootMSqr / n);
    cout << "Arithmetic Mean = " << ArithM << endl;
    cout << "Harmonic Mean = " << HarmM << endl;
    cout << "Geometric Mean = " << GeomM << endl;
    cout << "RootMean Square = " << RootMSqr << endl;
    cout << endl;
    return 0;
}
