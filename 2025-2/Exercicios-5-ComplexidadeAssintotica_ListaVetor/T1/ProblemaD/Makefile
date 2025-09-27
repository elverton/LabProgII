CC = gcc
CFLAGS = -Wall -std=c99
TARGET = lista
OBJS = main.o lista.o

# Regra padrão
all: $(TARGET)

# Compilação do executável
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Compilação dos objetos
main.o: main.c lista.h
	$(CC) $(CFLAGS) -c main.c

lista.o: lista.c lista.h
	$(CC) $(CFLAGS) -c lista.c

# Teste
teste: $(TARGET)
	./teste.sh $(TARGET)

# Limpeza
clean:
	rm -f $(TARGET) $(OBJS) temp.txt

.PHONY: all teste clean
