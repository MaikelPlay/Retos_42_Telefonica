#include <stdio.h>

int suma(int a, int b) {
    return a + b;
}

int main() {
    int a = 5, b = 3;
    printf("Matrix build ejecutándose.\n");
    printf("Prueba de suma: %d + %d = %d\n", a, b, suma(a, b));
    return 0;
}
