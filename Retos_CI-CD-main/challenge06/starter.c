#include <stdio.h>

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
