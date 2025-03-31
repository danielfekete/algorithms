#include <stdlib.h>
#include "bt_pre_order.h"
#include "bt.h"
#include "../linked_lists/stackADT.h"


static Stack walk(struct binary_node *cur,Stack path){
    if(cur == NULL){
        return path;
    }

    // pre
    push(path, cur->data);
    // recurse
    walk(cur->left, path);
    walk(cur->right, path);
    // post
    return path;
}

Stack bt_pre_oder(struct binary_node *head){
    Stack s = create();
    return walk(head, s);
}
