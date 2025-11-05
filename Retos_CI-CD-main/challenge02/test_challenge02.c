#include <stdio.h>
#include <assert.h>

// Declaraciones de las funciones implementadas en starter.c
int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
int division(int a, int b);

int main(void) {
    // Suma
    assert(suma(2, 3) == 5);
    assert(suma(-2, 3) == 1);

    // Resta
    assert(resta(5, 3) == 2);
    assert(resta(3, 5) == -2);

    // Multiplicación
    assert(multiplicacion(4, 5) == 20);
    assert(multiplicacion(-4, 5) == -20);

    // División
    assert(division(10, 2) == 5);
    assert(division(-9, 3) == -3);

    // División por cero (según requisito, esperamos 0 o manejo seguro)
    assert(division(5, 0) == 0);

    printf("All tests passed\n");
    return 0;
}
