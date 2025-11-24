CC = gcc
CFLAGS = -Wall -std=c99
TARGET = hash
OBJS = main.o hash.o

# Regra padrão
all: $(TARGET)

# Compilação do executável
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Compilação dos objetos
main.o: main.c hash.h
	$(CC) $(CFLAGS) -c main.c

th.o: hash.c hash.h
	$(CC) $(CFLAGS) -c th.c

# Execução
run: $(TARGET)
	./$(TARGET)

# Teste
teste: $(TARGET)
	./teste.sh $(TARGET)

# Limpeza
clean:
	rm -f $(TARGET) $(OBJS) temp.txt

.PHONY: all run teste clean
