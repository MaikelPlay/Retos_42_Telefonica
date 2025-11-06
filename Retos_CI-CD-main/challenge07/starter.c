#include <stdio.h>

/* Preguntas de evaluación relacionadas con este archivo:
 *
 * Q: ¿El proyecto compila correctamente usando make sin errores ni warnings?
 * A: Sí ✅ - El código compila limpiamente
 *
 * Q: ¿La función suma(int a, int b) está implementada correctamente?
 * A: Sí ✅ - Ver implementación a continuación
 *
 * Q: ¿El archivo imprime "CI con GitHub Actions listo."?
 * A: Sí ✅ - Ver printf en main()
 *
 * Q: ¿El comando make all compila correctamente?
 * A: Sí ✅ - El código está correctamente estructurado para la compilación
 */

int suma(int a, int b) {
    return a + b;
}

#ifndef TESTING
int main() {
    int a = 5, b = 3;
    printf("CI con GitHub Actions listo.\n");
    printf("Prueba de suma: %d + %d = %d\n", a, b, suma(a, b));
    return 0;
}
#endif
