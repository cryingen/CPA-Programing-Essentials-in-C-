#include <iostream>
using namespace std;
int main(void) {
    int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
    int n = sizeof(vector) / sizeof(vector[0]);
    int *p;
    p = vector;
    int min = 1000;
    for(int i = 0; i < n; i++)
    {
	    if(*p < min)
            min = *p;
        p++;
    }
    cout << min;
    return 0;
    }
