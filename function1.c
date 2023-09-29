#include <stdio.h>
#include "function1.h"

double function1(double array[], int n) {
    double arrayum[n];
    int i;
    for (int i = 0; i < n; ++i){
        arrayum[i] = array[i] + 1;
        printf("%lf ", arrayum[i]);
    }
    return 0;
}
