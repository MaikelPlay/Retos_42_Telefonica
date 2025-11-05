#include <stdio.h>

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
