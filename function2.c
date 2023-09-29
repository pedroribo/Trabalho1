#include <stdio.h>
#include "function2.h"

double function2(double array[], int n) {
    double arraydois[n];
    int i;
    for (int i = 0; i < n; ++i){
        arraydois[i] = array[i] + 2;
        printf("%lf ", arraydois[i]);
    }
    return 0;
}
