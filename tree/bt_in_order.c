#include <stdlib.h>
#include "../linked_lists/stackADT.h"
#include "bt.h"
#include "bt_in_order.h"


static Stack walk(struct binary_node *cur,Stack path){
    if(cur == NULL){
        return path;
    }

    // recurse
    walk(cur->left, path);
    push(path, cur->data);
    walk(cur->right, path);

    // post
    return path;
}

Stack bt_in_oder(struct binary_node *head){
    Stack s = create();
    return walk(head, s);
}
