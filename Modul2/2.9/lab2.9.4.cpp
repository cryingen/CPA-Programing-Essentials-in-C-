#include <iostream>
#include <cmath>

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
    std::cout << "Arithmetic Mean = " << ArithM << std::endl;
    std::cout << "Harmonic Mean = " << HarmM << std::endl;
    std::cout << "Geometric Mean = " << GeomM << std::endl;
    std::cout << "RootMean Square = " << RootMSqr << std::endl;
    std::cout << std::endl;
    return 0;
}
