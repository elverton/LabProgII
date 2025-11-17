CC = gcc
CFLAGS = -Wall -std=c99
TARGET = trie
OBJS = main.o trie.o

# Regra padrão
all: $(TARGET)

# Compilação do executável
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Compilação dos objetos
main.o: main.c trie.h
	$(CC) $(CFLAGS) -c main.c

trie.o: trie.c trie.h
	$(CC) $(CFLAGS) -c trie.c

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
