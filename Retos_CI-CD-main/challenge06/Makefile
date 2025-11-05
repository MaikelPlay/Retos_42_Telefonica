CC=gcc
CFLAGS=-Wall -Wextra -Werror
SRC=starter.c
TARGET=programa
TEST_TARGET=test_challenge06

# Regla build: compilar el programa
build: $(SRC)
	@echo Compilando programa principal...
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)
	@echo Build completado.

# Regla test: ejecutar pruebas unitarias
test: build test_challenge06.c
	@echo Ejecutando pruebas unitarias...
	$(CC) $(CFLAGS) -DTESTING -o $(TEST_TARGET) $(SRC) test_challenge06.c
	.\$(TEST_TARGET)

# Regla package: generar binario final en dist/
package: build
	@echo Empaquetando binario...
	-mkdir dist 2> nul
	copy $(TARGET).exe dist\ > nul
	@echo Binario empaquetado en carpeta dist/

# Regla clean: limpiar archivos generados
clean:
	@echo Limpiando archivos generados...
	del /F /Q $(TARGET).exe $(TEST_TARGET).exe 2>nul || ver > nul
	rd /S /Q dist 2>nul || ver > nul
	@echo Limpieza completada.

.PHONY: build test package clean
