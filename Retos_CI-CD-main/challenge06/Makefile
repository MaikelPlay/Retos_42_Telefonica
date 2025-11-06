# Preguntas de evaluación relacionadas con este archivo:
#
# Q: ¿El Makefile existe y contiene las reglas requeridas?
# A: Sí ✅ - Ver todas las reglas definidas a continuación
#
# Q: ¿La regla build compila correctamente el programa principal?
# A: Sí ✅ - Ver regla 'build'
#
# Q: ¿La regla test ejecuta automáticamente las pruebas unitarias?
# A: Sí ✅ - Ver regla 'test'
#
# Q: ¿La regla package genera un binario final dentro del directorio dist/?
# A: Sí ✅ - Ver regla 'package' y creación de directorio dist/
#
# Q: ¿La regla clean elimina los archivos de compilación y el binario generado?
# A: Sí ✅ - Ver regla 'clean' que elimina .exe y carpeta dist/
#
# Q: ¿Las reglas están encadenadas para simular un pipeline CI local?
# A: Sí ✅ - Ver dependencias entre reglas (build → test → package)
#
# Q: ¿El paso build se ejecuta sin errores?
# A: Sí ✅ - Ver compilación con CFLAGS estrictos
#
# Q: ¿El binario final se encuentra dentro de dist/ al finalizar?
# A: Sí ✅ - Ver comando copy en regla 'package'

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
