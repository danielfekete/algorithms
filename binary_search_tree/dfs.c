#include "dfs.h"
#include <stdlib.h>

bool search(struct binary_node *curr, int needle){
	// base cases
	// 1. current node exists
	if(curr == NULL){
		return false;
	}
	// 2. found it
	if(curr->data == needle){
		return true;
	}
	// recurse
	// needle bigger than the current value -> go right
	if(curr->data < needle){
		return search(curr->right, needle);
	}
	// go left
	return search(curr->left, needle);
}

bool dfs(struct binary_node *head, int needle){
	return search(head, needle);
}
