#include <stdio.h>

// Implementación de la función requerida por el reto
int suma(int a, int b) {
    return a + b;
}

// El main se excluye al compilar los tests definiendo TESTING
#ifndef TESTING
int main(void) {
    // Ejemplo de uso rápido
    printf("Resultado: %d\n", suma(2, 3));
    return 0;
}
#endif
