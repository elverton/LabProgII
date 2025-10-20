CC = gcc
CFLAGS = -Wall -std=c99
TARGET = matriz
OBJS = main.o matriz.o

# Regra padrão
all: $(TARGET)

# Compilação do executável
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Compilação dos objetos
main.o: main.c matriz.h
	$(CC) $(CFLAGS) -c main.c

matriz.o: matriz.c matriz.h
	$(CC) $(CFLAGS) -c matriz.c

# Teste
teste: $(TARGET)
	./teste.sh $(TARGET)

# Limpeza
clean:
	rm -f $(TARGET) $(OBJS) temp.txt

.PHONY: all teste clean
