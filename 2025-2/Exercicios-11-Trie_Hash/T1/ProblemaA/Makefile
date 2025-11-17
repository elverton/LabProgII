CC = gcc
CFLAGS = -Wall -std=c99
TARGET = th
OBJS = main.o th.o

# Regra padrão
all: $(TARGET)

# Compilação do executável
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Compilação dos objetos
main.o: main.c th.h
	$(CC) $(CFLAGS) -c main.c

th.o: th.c th.h
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
