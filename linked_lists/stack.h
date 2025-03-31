#ifndef STACK_H
#define STACK_H

struct node{
    int value;
    struct node *prev;
};
void push(int value);
int pop(void);
int peek(void);

#endif
