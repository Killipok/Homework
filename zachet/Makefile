CC = gcc
FLAGS = -Wall -Werror -Wextra

all: zachet

zachet:
	@${CC} ${FLAGS} main.c zachet.c -o zachet -g

valgrind:
	@valgrind --leak-check=full --tool=memcheck ./zachet

run:
	@./zachet

gdb:
	@gdb ./zachet

clean:
	@rm -rf zachet *.out .vscode/
