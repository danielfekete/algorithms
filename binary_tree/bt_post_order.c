#include <stdlib.h>
#include "bt_post_order.h"
#include "bt.h"
#include "../linked_lists/stackADT.h"


static Stack walk(struct binary_node *cur,Stack path){
    if(cur == NULL){
        return path;
    }

    // recurse
    walk(cur->left, path);
    walk(cur->right, path);
    push(path, cur->data);
    // post
    return path;
}

Stack bt_post_order(struct binary_node *head){
    Stack s = create();
    return walk(head, s);
}
