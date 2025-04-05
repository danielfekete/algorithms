#include <stdio.h>
#include <stdlib.h>
#include "bt_in_order.h"
#include "bt_post_order.h"
#include "bt_pre_order.h"


struct binary_node *create_binary_node(Item data);

int main(void){
    struct binary_node *head;
    Stack pre_path, post_path, in_order_path;

    //			7
    //  	3		4
    //   5
    //  5
    head = create_binary_node(7);
    head->left = create_binary_node(3);
    head->right = create_binary_node(4);
    head->left->left = create_binary_node(5);
    head->left->left->left = create_binary_node(5);

    printf("Pre path:");
    pre_path = bt_pre_order(head);
    print(pre_path);
    post_path = bt_post_order(head);
    printf("Post path:");
    print(post_path);
    printf("In order path:");
    in_order_path = bt_in_order(head);
    print(in_order_path);

    return 0;
}

struct binary_node *create_binary_node(Item data){
    struct binary_node *node = malloc(sizeof(struct binary_node));
    if(node == NULL){
        exit(EXIT_FAILURE);
    }
    node->data = data;
    return node;
}
