#include <stdio.h>

// Implementaciones de las funciones requeridas
int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int multiplicacion(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    if (b == 0) {
        // Manejo simple de división por cero: devolver 0
        // Podría también imprimirse un error en stderr si se desea
        fprintf(stderr, "division de 0\n");
        return 0;
    }
    return a / b;
}

// Excluir main cuando compilamos tests (definiendo TESTING)
#ifndef TESTING
int main(void) {
    printf("Calculadora inicializada.\n");
    return 0;
}
#endif
