#include "calc.h"
#include <stdio.h>

#ifndef TESTING
int main() {
    int a = 10, b = 5;
    
    printf("Calculadora modularizada\n");
    printf("a = %d, b = %d\n", a, b);
    printf("Suma: %d\n", suma(a, b));
    printf("Resta: %d\n", resta(a, b));
    printf("Multiplicación: %d\n", multiplicacion(a, b));
    printf("División: %d\n", division(a, b));
    
    return 0;
}
#endif
