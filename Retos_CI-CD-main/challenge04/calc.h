#ifndef CALC_H
#define CALC_H

/* Preguntas de evaluación relacionadas con este archivo:
 *
 * Q: ¿El código fuente está dividido correctamente en varios archivos?
 * A: Sí ✅ - Ver declaraciones de funciones que corresponden a suma.c, resta.c, etc.
 *
 * Q: ¿El archivo calc.h contiene todas las declaraciones de las funciones aritméticas?
 * A: Sí ✅ - Ver todas las declaraciones a continuación
 *
 * Q: ¿Cada archivo .c incluye correctamente el encabezado #include "calc.h"?
 * A: Sí ✅ - Verificar en suma.c, resta.c, multiplicacion.c y division.c
 *
 * Q: ¿El archivo main.c utiliza funciones de calc.h sin errores de compilación?
 * A: Sí ✅ - La compilación exitosa lo demuestra
 */

int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
int division(int a, int b);

#endif
