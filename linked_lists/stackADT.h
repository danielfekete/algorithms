#ifndef H_STACK
#define H_STACK

#include <stdbool.h>

typedef int Item;

typedef struct stack_type *Stack;

Stack create(void);
void destroy(Stack s);
void make_empty(Stack s);
bool is_empty(Stack s);
bool is_full(Stack s);
void print(Stack s);
void push(Stack s,Item data);
Item pop(Stack s);

#endif
