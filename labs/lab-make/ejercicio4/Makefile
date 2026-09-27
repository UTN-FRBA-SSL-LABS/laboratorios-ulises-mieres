# Nombre del ejecutable final
PROGRAMA := programa

# Compilador y flags
CC := gcc
CFLAGS := -Wall

# Archivos fuente y objetos
SRCS := main.c operaciones.c
OBJS := $(SRCS:.c=.o)

# Objetivo principal
all: $(PROGRAMA)

# Unir los objetos y generar el ejecutable
$(PROGRAMA): $(OBJS)
	$(CC) $^ -o $(PROGRAMA)

# Compilar cada archivo fuente
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Eliminar los archivos generados
clean:
	rm -f $(PROGRAMA) $(PROGRAMA).exe $(OBJS)

.PHONY: all clean