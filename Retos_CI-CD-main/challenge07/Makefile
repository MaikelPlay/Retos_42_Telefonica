CC=gcc
CFLAGS=-Wall -Wextra -Werror
TARGET=starter
TEST_TARGET=test_challenge07

all: $(TARGET)

$(TARGET): starter.c
	@echo "Compilando programa principal..."
	$(CC) $(CFLAGS) -o $(TARGET) starter.c
	@echo "Compilación completada."

test: starter.c test_challenge07.c
	@echo "Compilando y ejecutando pruebas..."
	$(CC) $(CFLAGS) -DTESTING -o $(TEST_TARGET) starter.c test_challenge07.c
	./$(TEST_TARGET)

clean:
	@echo "Limpiando archivos generados..."
	rm -f $(TARGET) $(TEST_TARGET)
	@echo "Limpieza completada."

.PHONY: all test clean
