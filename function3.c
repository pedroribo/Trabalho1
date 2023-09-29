#include <stdio.h>
#include "function3.h"

double function3(double array[], int n) {
    double arraytres[n];
    int i;
    for (int i = 0; i < n; ++i){
        arraytres[i] = array[i] + 3;
        printf("%lf ", arraytres[i]);
    }
    return 0;
}
