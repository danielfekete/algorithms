#ifndef DFS_H
#define DFS_H

#include "../binary_tree/bt.h"
#include <stdbool.h>


bool search(struct binary_node *curr, int needle);
bool dfs(struct binary_node *head, int needle);

#endif
