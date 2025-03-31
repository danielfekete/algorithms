#ifndef BT_H
#define BT_H

typedef int Item;

struct binary_node{
    struct binary_node* left;
    struct binary_node* right;
    Item data;
};

#endif
