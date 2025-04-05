INCLUDE_DIR = ../binary_tree

CC = gcc
CFLAGS = -I$(INCLUDE_DIR)

main:					main.o	dfs.o	compare.o
							$(CC)	-o	main	main.o	dfs.o	compare.o

main.o:				main.c	dfs.h	compare.h
							$(CC)	$(CFLAGS)	-c	main.c

dfs.o:				dfs.c	dfs.h	$(INCLUDE_DIR)/bt.h
							$(CC)	$(CFLAGS)	-c	dfs.c

compare.o:		compare.c	compare.h	$(INCLUDE_DIR)/bt.h
							$(CC)	$(CFLAGS)	-c	compare.c
