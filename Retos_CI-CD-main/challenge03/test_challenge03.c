#include <stdio.h>
#include <string.h>
#include <assert.h>

// Función que copia una cadena fuente a una cadena destino
char *mi_strcpy(char *dest, const char *src) {
    // Guardar el puntero original para retornarlo
    char *original_dest = dest;
    
    // Copiar cada carácter de src a dest hasta encontrar el nulo
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    
    // Asegurar que la cadena destino termina con '\0'
    *dest = '\0';
    
    // Retornar el puntero original al inicio de la cadena destino
    return original_dest;
}

// Otras declaraciones de funciones
size_t mi_strlen(const char *s);
int mi_strcmp(const char *s1, const char *s2);

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
    char dest[50];
    char dest2[50];
    char *result;
    
    printf("\nPruebas de mi_strcpy:\n");
    
    // 1. Probar cadena vacía
    printf("1. Prueba con cadena vacía...\n");
    result = mi_strcpy(dest, "");
    assert(dest[0] == '\0');
    assert(result == dest);
    printf("   OK - Cadena vacía copiada correctamente\n");
    
    // 2. Probar cadena normal
    printf("2. Prueba con cadena normal...\n");
    result = mi_strcpy(dest, "Hola Mundo");
    assert(strcmp(dest, "Hola Mundo") == 0);
    printf("   OK - 'Hola Mundo' copiado correctamente\n");
    
    // 3. Probar caracteres especiales
    printf("3. Prueba con caracteres especiales...\n");
    result = mi_strcpy(dest, "Tab\tSalto\nFin");
    assert(strcmp(dest, "Tab\tSalto\nFin") == 0);
    printf("   OK - Caracteres especiales copiados correctamente\n");
    
    // 4. Probar cadena con espacios
    printf("4. Prueba con espacios...\n");
    result = mi_strcpy(dest, "  espacios  al  inicio  y  fin  ");
    assert(strcmp(dest, "  espacios  al  inicio  y  fin  ") == 0);
    printf("   OK - Espacios copiados correctamente\n");
    
    // 5. Probar números y símbolos
    printf("5. Prueba con números y símbolos...\n");
    result = mi_strcpy(dest, "12345!@#$%");
    assert(strcmp(dest, "12345!@#$%") == 0);
    printf("   OK - Números y símbolos copiados correctamente\n");
    
    printf("\nTodas las pruebas de mi_strcpy pasaron exitosamente!\n");
    printf("All tests passed\n");
    return 0;
}