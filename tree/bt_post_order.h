#ifndef BT_BFS_H
#define BT_BFS_H

#include "bt.h"
#include "../linked_lists/stackADT.h"

static Stack walk(struct binary_node *cur, Stack path);
Stack bt_post_order(struct binary_node *head);

#endif
