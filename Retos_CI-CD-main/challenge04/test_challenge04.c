#include <stdio.h>
#include <assert.h>
#include "calc.h"

int main(void) {
    // Pruebas de suma
    assert(suma(5, 3) == 8);
    assert(suma(-5, 3) == -2);
    assert(suma(0, 0) == 0);

    // Pruebas de resta
    assert(resta(5, 3) == 2);
    assert(resta(-5, 3) == -8);
    assert(resta(0, 0) == 0);

    // Pruebas de multiplicación
    assert(multiplicacion(5, 3) == 15);
    assert(multiplicacion(-5, 3) == -15);
    assert(multiplicacion(0, 5) == 0);

    // Pruebas de división
    assert(division(6, 2) == 3);
    assert(division(-6, 2) == -3);
    assert(division(0, 5) == 0);
    // La división por cero ya está manejada en la implementación

    printf("All tests passed!\n");
    return 0;
}