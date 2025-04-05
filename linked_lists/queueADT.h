#ifndef H_QUEUE_ADT
#define H_QUEUE_ADT

typedef int Item;

typedef struct queue_type *Queue;

#include <stdbool.h>

Queue create(void);
void destroy(Queue q);
void make_empty(Queue q);
bool is_full(Queue q);
bool is_empty(Queue q);
void enqueue(Queue q, Item data);
Item dequeue(Queue q);

#endif
