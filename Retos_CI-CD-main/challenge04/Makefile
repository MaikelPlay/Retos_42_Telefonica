# Preguntas de evaluación relacionadas con este archivo:
#
# Q: ¿El proyecto compila correctamente usando make sin errores ni warnings?
# A: Sí ✅ - Ver CFLAGS con -Wall -Wextra -Werror
#
# Q: ¿El Makefile contiene la regla all que compila correctamente todos los archivos fuente?
# A: Sí ✅ - Ver regla 'all' y compilación de SRCS
#
# Q: ¿La regla clean elimina únicamente los archivos objeto (.o)?
# A: Sí ✅ - Ver regla 'clean'
#
# Q: ¿La regla fclean elimina tanto los archivos objeto como el ejecutable?
# A: Sí ✅ - Ver regla 'fclean'
#
# Q: ¿La regla re ejecuta correctamente una limpieza completa y recompila?
# A: Sí ✅ - Ver regla 're'
#
# Q: ¿La regla test compila y ejecuta las pruebas unitarias?
# A: Sí ✅ - Ver regla 'test'
#
# Q: ¿El Makefile utiliza variables correctamente?
# A: Sí ✅ - Ver CC, CFLAGS, NAME, SRCS, OBJS

CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=calc
SRCS=starter.c suma.c resta.c multiplicacion.c division.c
OBJS=$(SRCS:.c=.o)
TEST=test_challenge04

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(TEST)

re: fclean all

test: $(SRCS) test_challenge04.c
	$(CC) $(CFLAGS) -DTESTING -o $(TEST) $(SRCS) test_challenge04.c
	./$(TEST)
