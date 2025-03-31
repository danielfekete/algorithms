#include <stdlib.h>
#include <stdio.h>
#include "doublyLinkedList.h"


static int len = 0;
static struct node *head = NULL;
static struct node *tail = NULL;

static void terminate(const char *message){
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

bool is_empty(void){
    return len == 0;
}

bool is_full(void){
    return false;
}

void prepend(Item i){
    struct node *n = malloc(sizeof(struct node));
    if(n == NULL){
        terminate("Error in prepend: node could not be created.");
    }
    len++;
    if(head == NULL){
        head = tail = n;
    }
    n->next = head;
    head->prev = n;
    head = n;
}
void append(Item i){
    struct node *n = malloc(sizeof(struct node));
    if(n == NULL){
        terminate("Error in append: node could not be created.");
    }
    len++;
    if(tail == NULL){
        tail = head = n;
    }
    n->prev = tail;
    tail->next = n;
    tail = n;
}
Item rm(Item i){
    if(len == 0){
        return -1;
    }
    struct node *p;
    for(p = head;p != NULL && p->value != i;p = p->next);
    if(p == NULL){
        terminate("Error in rm: node could not be created.");
    }
    return remove_node(p);
}
Item get(int index){
    struct node *p;
    int v;
    p = get_at(index);
    if(p == NULL){
        return -1;
    }
    v = p->value;
    free(p);
    return v;
}
void insert_at(Item i,int index){
    if(index < 0 || index > len){
        return;
    }
    if(index == len){
        append(i);
        return;
    }
    if(index == 0){
        prepend(i);
        return;
    }
    len++;
    struct node *n = malloc(sizeof(struct node));
    if(n == NULL){
        terminate("Error in insertAt: node could not be created.");
        return;
    }
    struct node *p;
    p = get_at(index);
    n->next = p;
    n->prev = p->prev;
    p->prev = n;
    if(n->prev != NULL){
        n->prev->next = n;
    }
}
int remove_at(int index){
    if(index < 0 || index > len){
        return -1;
    }
    struct node *p;
    p = get_at(index);
    if(p == NULL){
        terminate("Error in removeAt: node could not be created.");
    }
    return remove_node(p);
}
static int remove_node(struct node *n){
    int value;
    len--;
    if(n->next != NULL){
        n->next->prev = n->prev;
    }
    if(n->prev != NULL){
        n->prev->next = n->next;
    }
    value = n->value;
    free(n);
    return value;
}
static struct node *get_at(int index){
    struct node *p;
    int i;
    for(p = head, i = 0; p != NULL && i < index;p = p->next, i++);
    return p;
}
