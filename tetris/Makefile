CC = gcc
FLAGS = -Wall -Werror -Wextra

all: tetris

tetris:
	@${CC} ${FLAGS} main.c func.c -o tetris -g

valgrind:
	@valgrind --leak-check=full --tool=memcheck ./tetris

run:
	@./tetris

gdb:
	@gdb ./tetris

clean:
	@rm -rf tetris *.out .vscode/
