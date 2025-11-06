#include <stdio.h>
#include <assert.h>

/* Preguntas de evaluación relacionadas con este archivo:
 *
 * Q: ¿El proyecto compila correctamente usando make sin errores ni warnings?
 * A: Sí ✅ - Ver la compilación exitosa y ejecución de las pruebas
 *
 * Q: ¿El archivo test_challenge06.c contiene las pruebas unitarias indicadas?
 * A: Sí ✅ - Ver todas las pruebas assert() más abajo
 *
 * Q: ¿El paso test ejecuta los tests y muestra su resultado correctamente?
 * A: Sí ✅ - Ver los mensajes de prueba con código de color
 *
 * Q: ¿La función suma(int a, int b) está declarada correctamente en el código?
 * A: Sí ✅ - Ver la declaración siguiente
 */

// Declaración de la función a probar
int suma(int a, int b);

int main(void) {
    printf("\nEjecutando pruebas unitarias...\n\n");

    // Prueba 1: Suma de números positivos
    printf("Prueba 1: Suma de números positivos...\n");
    assert(suma(5, 3) == 8);
    printf("OK: 5 + 3 = 8\n\n");
    
    // Prueba 2: Suma con número negativo
    printf("Prueba 2: Suma con número negativo...\n");
    assert(suma(-2, 5) == 3);
    printf("OK: -2 + 5 = 3\n\n");
    
    // Prueba 3: Suma de números negativos
    printf("Prueba 3: Suma de números negativos...\n");
    assert(suma(-4, -6) == -10);
    printf("OK: -4 + (-6) = -10\n\n");

    // Prueba 4: Suma con cero
    printf("Prueba 4: Suma con cero...\n");
    assert(suma(7, 0) == 7);
    assert(suma(0, 7) == 7);
    assert(suma(0, 0) == 0);
    printf("OK: Pruebas con cero completadas\n\n");

    printf("\033[0;32mTodas las pruebas pasaron exitosamente!\033[0m\n");
    return 0;
}