INCLUDE_DIR = ../linked_lists

CC = gcc
CFLAGS = -I$(INCLUDE_DIR)

main:							main.o  	bt_in_order.o		bt_post_order.o	bt_pre_order.o	bt.o	stackADT.o
									$(CC) -o  main	main.o	bt_in_order.o	bt_post_order.o	bt_pre_order.o	bt.o	stackADT.o

main.o:						main.c	bt_in_order.h		bt_post_order.h	bt_pre_order.h
									$(CC) $(CFLAGS)	-c  main.c

bt_in_order.o:		bt_in_order.c		bt_in_order.h		bt.h		$(INCLUDE_DIR)/stackADT.h
									$(CC)	$(CFLAGS)	-c	bt_in_order.c

bt_pre_order.o:		bt_pre_order.c	bt_pre_order.h	bt.h		$(INCLUDE_DIR)/stackADT.h
									$(CC)	$(CFLAGS)	-c	bt_pre_order.c

bt_post_order.o:	bt_post_order.c		bt_post_order.h		bt.h	$(INCLUDE_DIR)/stackADT.h
									$(CC)	$(CFLAGS)	-c  bt_post_order.c

bt.o:							bt.c	bt.h
									$(CC)	$(CFLAGS)	-c	bt.c

stackADT.o:				$(INCLUDE_DIR)/stackADT.c	$(INCLUDE_DIR)/stackADT.h
									$(CC)	$(CFLAGS)	-c	$(INCLUDE_DIR)/stackADT.c
