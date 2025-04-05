#include "queueADT.h"
#include <stdlib.h>
#include <stdio.h>

struct node{
    Item data;
    struct node *next;
};

struct queue_type{
    struct node *head;
    struct node *tail;
};

static void terminate(const char *message){
    printf("%s\n",message);
    exit(EXIT_FAILURE);
}
Queue create(void){
    Queue q = malloc(sizeof(Queue));
    if(q == NULL){
        terminate("Error in create: Queue is full");
    }
    q->head = q->tail = NULL;
    return q;
}
void destroy(Queue q){
    make_empty(q);
    free(q);
}
void make_empty(Queue q){
    while(!is_empty(q)){
        dequeue(q);
    }
}
bool is_full(Queue q){
    return false;
}
bool is_empty(Queue q){
    return q->head = NULL;
}
void enqueue(Queue q, Item data){
    struct node *n = malloc(sizeof(struct node));
    if(n == NULL){
        terminate("Error in enqueue: Queue is full.");
    }
    n->data = data;
    if(q->tail == NULL){
        q->tail = q->head = n;
        return;
    }
    q->tail->next = n;
    q->tail = n;
}
Item dequeue(Queue q){
    if(q->head == NULL){
        terminate("Error in dequeue: Queue is empty.");
    }
    struct node *temp = q->head;
    Item data = temp->data;
    q->head = temp->next;

    free(temp);
    return data;
}
