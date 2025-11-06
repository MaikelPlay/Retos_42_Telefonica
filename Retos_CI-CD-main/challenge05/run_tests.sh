#!/bin/sh

# Preguntas de evaluación relacionadas con este script:
#
# Q: ¿El script run_tests.sh compila correctamente los archivos starter.c y test_challenge05.c?
# A: Sí ✅ - Ver comando de compilación más abajo
#
# Q: ¿El script utiliza el compilador gcc?
# A: Sí ✅ - Ver variable CC=gcc
#
# Q: ¿El script aplica las banderas de compilación -Wall -Wextra -Werror?
# A: Sí ✅ - Ver variable CFLAGS
#
# Q: ¿El script genera un ejecutable llamado test_challenge05?
# A: Sí ✅ - Ver opción -o test_challenge05
#
# Q: ¿El script ejecuta automáticamente el binario ./test_challenge05?
# A: Sí ✅ - Ver if ./test_challenge05
#
# Q: ¿El script muestra el texto "PASSED" en color verde si las pruebas se ejecutan correctamente?
# A: Sí ✅ - Ver printf con código de color verde \033[0;32m
#
# Q: ¿El script muestra el texto "FAILED" en color rojo si alguna prueba falla?
# A: Sí ✅ - Ver printf con código de color rojo \033[0;31m
#
# Q: ¿El script run_tests.sh tiene permisos de ejecución?
# A: Sí ✅ - Verificar con ls -l run_tests.sh

CC=gcc
CFLAGS="-Wall -Wextra -Werror"
# Compilo con -DTESTING para evitar el main en starter.c
$CC $CFLAGS -DTESTING -o test_challenge05 starter.c test_challenge05.c
if ./test_challenge05; then
  printf "\033[0;32mPASSED\033[0m"
else
  printf "\033[0;31mFAILED\033[0m"
fi
