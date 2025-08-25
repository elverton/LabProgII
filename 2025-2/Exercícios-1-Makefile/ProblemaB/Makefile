# O nome do executável final
TARGET = sistema_bancario

# Os arquivos-objeto necessários para criar o executável
OBJS = main.o ContaBancaria.o

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
# Depende de main.c e ContaBancaria.h
main.o: main.c ContaBancaria.h
	$(CC) $(CFLAGS) -c main.c

# Regra para compilar o arquivo ContaBancaria.c em ContaBancaria.o
# Depende de ContaBancaria.c e ContaBancaria.h
ContaBancaria.o: ContaBancaria.c ContaBancaria.h
	$(CC) $(CFLAGS) -c ContaBancaria.c

# Regra 'run': executa o programa
run: $(TARGET)
	./$(TARGET)

# Regra 'clean': remove todos os arquivos compilados (objetos e executável)
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean run
