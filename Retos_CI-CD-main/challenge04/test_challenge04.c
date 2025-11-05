#include <stdio.h>
#include <assert.h>
#include "calc.h"

/*
 * Suite de pruebas para la calculadora modularizada
 * 
 * Este archivo contiene pruebas unitarias para verificar el funcionamiento
 * de las cuatro operaciones básicas: suma, resta, multiplicación y división.
 * Cada función se prueba con diferentes casos incluyendo:
 * - Números positivos
 * - Números negativos
 * - Cero
 * - Casos especiales
 */

int main(void) {
    printf("\nIniciando pruebas de la calculadora...\n\n");

    /* Pruebas de suma (suma.c)
     * Función: int suma(int a, int b)
     * Descripción: Realiza la suma de dos números enteros
     * Casos probados:
     * 1. Suma de números positivos (5 + 3 = 8)
     * 2. Suma con número negativo (-5 + 3 = -2)
     * 3. Suma con ceros (0 + 0 = 0)
     */
    printf("Probando función suma()...\n");
    assert(suma(5, 3) == 8);    // Caso positivo
    assert(suma(-5, 3) == -2);  // Con negativo
    assert(suma(0, 0) == 0);    // Con ceros
    printf("✓ Pruebas de suma completadas\n\n");

    /* Pruebas de resta (resta.c)
     * Función: int resta(int a, int b)
     * Descripción: Realiza la resta de dos números enteros (a - b)
     * Casos probados:
     * 1. Resta de números positivos (5 - 3 = 2)
     * 2. Resta con resultado negativo (-5 - 3 = -8)
     * 3. Resta de números iguales (0 - 0 = 0)
     */
    printf("Probando función resta()...\n");
    assert(resta(5, 3) == 2);    // Caso positivo
    assert(resta(-5, 3) == -8);  // Resultado negativo
    assert(resta(0, 0) == 0);    // Con ceros
    printf("✓ Pruebas de resta completadas\n\n");

    /* Pruebas de multiplicación (multiplicacion.c)
     * Función: int multiplicacion(int a, int b)
     * Descripción: Realiza la multiplicación de dos números enteros
     * Casos probados:
     * 1. Multiplicación de positivos (5 * 3 = 15)
     * 2. Multiplicación con negativo (-5 * 3 = -15)
     * 3. Multiplicación por cero (0 * 5 = 0)
     */
    printf("Probando función multiplicacion()...\n");
    assert(multiplicacion(5, 3) == 15);    // Caso positivo
    assert(multiplicacion(-5, 3) == -15);  // Con negativo
    assert(multiplicacion(0, 5) == 0);     // Por cero
    printf("✓ Pruebas de multiplicación completadas\n\n");

    /* Pruebas de división (division.c)
     * Función: int division(int a, int b)
     * Descripción: Realiza la división entera de dos números (a / b)
     * Casos probados:
     * 1. División exacta (6 / 2 = 3)
     * 2. División con negativo (-6 / 2 = -3)
     * 3. División de cero (0 / 5 = 0)
     * Nota: La función maneja internamente la división por cero
     */
    printf("Probando función division()...\n");
    assert(division(6, 2) == 3);    // Caso exacto
    assert(division(-6, 2) == -3);  // Con negativo
    assert(division(0, 5) == 0);    // Cero dividido
    printf("✓ Pruebas de división completadas\n\n");

    printf("\n¡Todas las pruebas completadas exitosamente!\n");
    printf("Resumen:\n");
    printf("- Suma: Manejo de positivos, negativos y cero OK\n");
    printf("- Resta: Operaciones basicas y casos especiales OK\n");
    printf("- Multiplicacion: Productos y caso cero OK\n");
    printf("- Division: Division entera y casos especiales OK\n\n");
    return 0;
}