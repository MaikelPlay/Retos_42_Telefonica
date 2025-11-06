# Configuración común
CC=gcc
CFLAGS=-Wall -Wextra -Werror
TARGET=starter

# Configuración específica del sistema operativo
ifdef SystemRoot
    # Windows con MinGW
    TARGET_EXEC=$(TARGET).exe
    RM=del /F /Q
else
    # Linux/MacOS
    TARGET_EXEC=$(TARGET)
    RM=rm -f
endif

all: $(TARGET_EXEC)

$(TARGET_EXEC): starter.c
	$(CC) $(CFLAGS) -o $@ starter.c

clean:
	$(RM) $(TARGET_EXEC)
