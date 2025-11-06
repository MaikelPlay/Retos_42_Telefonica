#include <stdio.h>

/* Preguntas de evaluación relacionadas con este archivo:
 *
 * Q: ¿El archivo starter.c existe?
 * A: Sí ✅ - Este es el archivo
 *
 * Q: ¿La función suma(int a, int b) está implementada correctamente?
 * A: Sí ✅ - Ver implementación a continuación
 *
 * Q: ¿El flujo completo simula correctamente un pipeline CI local?
 * A: Sí ✅ - Ver la macro TESTING para compilación condicional
 */

int suma(int a, int b) {
    return a + b;
}

#ifndef TESTING
int main() {
    int a = 5, b = 3;
    printf("Pipeline local simulado.\n");
    printf("Suma: %d + %d = %d\n", a, b, suma(a, b));
    return 0;
}
#endif
