#include <stdio.h>
#include <assert.h>

// Declaración de la función definida en starter.c
int suma(int a, int b);

int main(void) {
    // 1) Suma de dos positivos
    assert(suma(2, 3) == 5);

    // 2) Suma de positivo + negativo
    assert(suma(5, -3) == 2);

    // 3) Suma de dos negativos
    assert(suma(-4, -6) == -10);

    printf("All tests passed\n");
    return 0;
}
