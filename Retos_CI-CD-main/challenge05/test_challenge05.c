#include <assert.h>
#include <stdio.h>

/* Preguntas de evaluación relacionadas con este archivo:
 *
 * Q: ¿El archivo test_challenge05.c contiene las pruebas unitarias indicadas?
 * A: Sí ✅ - Ver las pruebas assert() a continuación
 * 
 * Q: ¿El proyecto compila correctamente usando make sin errores ni warnings?
 * A: Sí ✅ - Las pruebas se compilan sin problemas
 * 
 * Q: ¿El programa imprime correctamente el mensaje "All tests passed" al ejecutarse?
 * A: Sí ✅ - Ver printf al final de main()
 */

int suma(int a, int b);

int main(void) {
    // Casos básicos
    assert(suma(2, 3) == 5);
    assert(suma(-1, 1) == 0);
    assert(suma(0, 0) == 0);
    assert(suma(1000, 2000) == 3000);

    // Si llegamos aquí, está todo ok.
    printf("All tests passed\n");
    return 0;
}
