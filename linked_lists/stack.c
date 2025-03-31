#include <stdlib.h>
#include "stack.h"

int length = 0;
struct node *head = NULL;

void push(int value){
    struct node *item = malloc(sizeof(struct node));
    if(item == NULL){
        return;
    }

    item->prev = head;
    item->value = value;
    head = item;
    
    length++;
}

int pop(void){
    if(head == NULL){
        return -1;
    }

    struct node *temp = head;
    int value = head->value;
    head = head->prev;
    free(temp);
    
    length--;

    return value;
}

int peek(void){
    if(head == NULL){
        return -1;
    }
    return head->value;
}
