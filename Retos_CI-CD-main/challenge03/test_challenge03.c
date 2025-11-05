#include <stdio.h>
#include <string.h>
#include <assert.h>

// Declaraciones de nuestras funciones
size_t mi_strlen(const char *s);
int mi_strcmp(const char *s1, const char *s2);
char *mi_strcpy(char *dest, const char *src);

int main(void) {
    // Test mi_strlen
    assert(mi_strlen("") == strlen(""));  // Cadena vacía
    assert(mi_strlen("hola") == strlen("hola"));  // Cadena normal
    assert(mi_strlen("12345") == strlen("12345")); // Números
    
    // Test mi_strcmp
    assert(mi_strcmp("", "") == 0);  // Cadenas vacías
    assert(mi_strcmp("abc", "abc") == 0);  // Cadenas iguales
    assert(mi_strcmp("abc", "abd") < 0);  // Primera menor
    assert(mi_strcmp("b", "a") > 0);  // Primera mayor
    assert(mi_strcmp("abc", "abcd") < 0);  // Prefijo
    
    // Test mi_strcpy
    char dest[20];
    char dest2[20];
    
    // Probar cadena vacía
    mi_strcpy(dest, "");
    strcpy(dest2, "");
    assert(strcmp(dest, dest2) == 0);
    
    // Probar cadena normal
    mi_strcpy(dest, "Hello World");
    strcpy(dest2, "Hello World");
    assert(strcmp(dest, dest2) == 0);
    
    printf("All tests passed\n");
    return 0;
}