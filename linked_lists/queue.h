#ifndef QUEUE_H
#define QUEUE_H


struct node{
    int value;
    struct node *next;
};
void enqueue(int value);
int dequeue(void);
int peek(void);

#endif
