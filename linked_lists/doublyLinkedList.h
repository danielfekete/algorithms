#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include <stdbool.h>

typedef int Item;
struct node{
    Item value;
    struct node *prev;
    struct node *next;
};

static void terminate(const char *message);
bool is_empty(void);
bool is_full(void);
void make_empty(void);
void prepend(Item item);
void insert_at(Item item,int index);
void append(Item item);
Item rm(Item item);
Item get(int index);
Item remove_at(int index);
static Item remove_node(struct node *n);
static struct node *get_at(Item index);

#endif
