#include <stdio.h>
#include <stddef.h>

// Implementación de strlen: contar caracteres hasta encontrar '\0'
size_t mi_strlen(const char *s) {
    size_t len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

// Implementación de strcmp: comparar caracteres hasta encontrar diferencia o '\0'
int mi_strcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

// Implementación de strcpy: copiar caracteres hasta encontrar '\0'
char *mi_strcpy(char *dest, const char *src) {
    char *d = dest;
    while ((*dest++ = *src++) != '\0');
    return d;
}

#ifndef TESTING
int main(void) {
    printf("Funciones de cadenas inicializadas.\n");
    return 0;
}
#endif
