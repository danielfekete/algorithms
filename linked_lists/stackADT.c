#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "stackADT.h"

struct node{
    Item data;
    struct node *next;
};

struct stack_type{
    struct node *head;
};

static void terminate(const char *message){
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

Stack create(void){
    Stack s = malloc(sizeof(struct stack_type));
    if(s == NULL){
        terminate("Error in create: stack could not be created");
    }
    s->head = NULL;
    return s;
}

void destroy(Stack s){
    make_empty(s);
    free(s);
}

void make_empty(Stack s){
    while(!is_empty(s)){
        pop(s);
    }
}

bool is_empty(Stack s){
    return s->head == NULL;
}

bool is_full(Stack s){
    return false;
}

void push(Stack s, Item data){
    struct node *n = malloc(sizeof(struct node));
    if(n == NULL){
        terminate("Error in push: stack is full.");
    }
    n->data = data;
    n->next = s->head;
    s->head = n;
}

Item pop(Stack s){
    struct node *old_head;
    Item data;
    if(is_empty(s)){
        terminate("Error in pop: stack is empty.");
    }
    old_head = s->head;
    data = old_head->data;
    s->head = old_head->next;
    free(old_head);

    return data;
}
