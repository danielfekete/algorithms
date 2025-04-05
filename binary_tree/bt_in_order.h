#ifndef BT_IN_ORDER_H
#define BT_IN_ORDER_H

#include "bt.h"
#include "../linked_lists/stackADT.h"

static Stack walk(struct binary_node *cur, Stack path);
Stack bt_in_order(struct binary_node *head);

#endif
