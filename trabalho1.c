#include <stdio.h>

double function1(double array[], int n) {
    double arrayum[n];
    int i;
    for (int i = 0; i < n; ++i){
        arrayum[i] = array[i] + 1;
        printf("%lf ", arrayum[i]);
    }
    return 0;
}

double function2(double array[], int n) {
    double arraydois[n];
    int i;
    for (int i = 0; i < n; ++i){
        arraydois[i] = array[i] + 2;
        printf("%lf ", arraydois[i]);
    }
    return 0;
}

double function3(double array[], int n) {
    double arraytres[n];
    int i;
    for (int i = 0; i < n; ++i){
        arraytres[i] = array[i] + 3;
        printf("%lf ", arraytres[i]);
    }
    return 0;
}

int main() {
    printf("SEL0456 Trabalho 1\n");
    int n;
    printf("Defina o tamanho da array: ");
    scanf("%d", &n);
    double array[n];
    int i = 0;
    printf("A array é: ");
    for (i = 0; i < n; ++i) {
        array[i] = 1;
        printf("%lf ", array[i]);
    }
    printf(".\n");
    printf("O resultado da primeira função é: ");
    function1(array, n);
    printf(".\n");
    printf("O resultado da segunda função é: ");
    function2(array, n);
    printf(".\n");
    printf("O resultado da terceira função é: ");
    function3(array, n);
    printf(".\n");
    return 0;
}
