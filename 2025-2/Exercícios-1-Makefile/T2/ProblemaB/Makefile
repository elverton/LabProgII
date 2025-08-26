# O nome do executável final
TARGET = produto

# Os arquivos-objeto necessários para criar o executável
OBJS = main.o Produto.o

# O compilador que será usado
CC = gcc

# Opções de compilação
CFLAGS = -Wall -Wextra -std=c99

# Regra 'all': a regra padrão, que compila o projeto
all: $(TARGET)

# Regra para criar o executável final (TARGET)
# Depende dos arquivos-objeto (.o)
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# Regra para compilar o arquivo main.c em main.o
# Depende de main.c
main.o: main.c 
	$(CC) $(CFLAGS) -c main.c

# Regra para compilar o arquivo Produto.c em Produto.o
# Depende de Produto.c e Produto.h
Produto.o: Produto.c Produto.h
	$(CC) $(CFLAGS) -c Produto.c

# Regra 'run': executa o programa
run: $(TARGET)
	./$(TARGET) < entrada.txt

# Regra 'clean': remove todos os arquivos compilados (objetos e executável)
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean run
