#include <assert.h>
#include <stdio.h>

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
