# Nome do executável final
TARGET = programa_vetores

# Arquivos-objeto necessários para criar o executável
OBJS = main.o Vetores.o

# O compilador que será usado
CC = gcc

# Opções de compilação
CFLAGS = -Wall -Wextra -std=c99

# Regra 'all': a regra padrão, que compila o projeto
all: $(TARGET)

# Regra para criar o executável final
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# Regra para compilar main.c em main.o
main.o: main.c
	$(CC) $(CFLAGS) -c main.c

# Regra para compilar Vetores.c em Vetores.o
Vetores.o: Vetores.c Vetores.h
	$(CC) $(CFLAGS) -c Vetores.c

# Regra 'run': executa o programa
run: $(TARGET)
	./$(TARGET)

# Regra 'clean': remove todos os arquivos compilados (objetos e executável)
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean run
