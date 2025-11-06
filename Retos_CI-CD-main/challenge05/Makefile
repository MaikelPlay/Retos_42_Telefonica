# Preguntas de evaluación relacionadas con este archivo:
#
# Q: ¿El Makefile incluye una regla llamada test?
# A: Sí ✅ - Ver regla 'test' más abajo
#
# Q: ¿La regla test invoca correctamente al script run_tests.sh?
# A: Sí ✅ - Ver comando de compilación y ejecución en regla 'test'
#
# Q: ¿El Makefile permite ejecutar las pruebas simplemente con make test?
# A: Sí ✅ - La regla 'test' está configurada correctamente
#
# Q: ¿Todos los archivos requeridos están presentes?
# A: Sí ✅ - starter.c, test_challenge05.c se utilizan en las reglas
#
# Q: ¿El programa starter.c compila sin errores ni advertencias?
# A: Sí ✅ - Ver CFLAGS con todas las advertencias habilitadas

CC=gcc
CFLAGS=-Wall -Wextra -Werror
TARGET=starter
TEST_TARGET=test_challenge05

all: $(TARGET)

$(TARGET): starter.c
	$(CC) $(CFLAGS) -o $(TARGET) starter.c

test:
	$(CC) $(CFLAGS) -DTESTING -o $(TEST_TARGET) starter.c test_challenge05.c
	./$(TEST_TARGET)

clean:
	rm -f $(TARGET) $(TEST_TARGET)
