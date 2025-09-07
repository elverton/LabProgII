CC = gcc
CFLAGS = -Wall -std=c99
TARGET = cilindro
OBJS = main.o cilindro.o

# Regra padrão
all: $(TARGET)

# Compilação do executável
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS) -lm

# Compilação dos objetos
main.o: main.c cilindro.h
	$(CC) $(CFLAGS) -c main.c

cilindro.o: cilindro.c cilindro.h
	$(CC) $(CFLAGS) -c cilindro.c

# Teste
teste: $(TARGET)
	./teste.sh

# Limpeza
clean:
	rm -f $(TARGET) $(OBJS) temp.txt

.PHONY: all teste clean
