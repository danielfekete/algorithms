#include <stdlib.h>
#include "queue.h"

struct node *head = NULL;
struct node *tail = NULL;
int length = 0;

void enqueue(int value){
    struct node *item = malloc(sizeof(struct node));
    if(item == NULL){
        return;
    }
    item->value = value;
    item->next = NULL;
    
    if(length == 0){
        tail = head = item;
    }else{
        tail->next = item;
        tail = item;
    }
    length++;
}

int *dequeue(){
    if(length == 0){
        return -1;
    }
    
    struct node *temp = head;
    int value = head->value;
    head = head->next;
    free(temp);
    
    length--;

    return value;
}

int peek(){
    if(head == NULL){
        return -1;
    }
    return head->value;
}

