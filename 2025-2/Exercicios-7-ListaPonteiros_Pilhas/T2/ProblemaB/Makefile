CC = gcc
CFLAGS = -Wall -std=c99
TARGET = pilha
OBJS = main.o pilha.o

# Regra padrão
all: $(TARGET)

# Compilação do executável
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Compilação dos objetos
main.o: main.c pilha.h
	$(CC) $(CFLAGS) -c main.c

lista.o: pilha.c pilha.h
	$(CC) $(CFLAGS) -c pilha.c

# Teste
teste: $(TARGET)
	./teste.sh $(TARGET)

# Limpeza
clean:
	rm -f $(TARGET) $(OBJS) temp.txt

.PHONY: all teste clean
