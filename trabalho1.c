#include <stdio.h>

#include "function1.h"
#include "function2.h"
#include "function3.h"

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
