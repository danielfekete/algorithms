#include <stdlib.h>
#include "compare.h"


bool compare(struct binary_node *a, struct binary_node *b){
	// base cases
	// 1. structural checks
		if(a == NULL && b == NULL){
			return true;
		}
		if(a == NULL || b == NULL){
			return false;
		}

		// value check
		if(a->data != b->data){
			return false;
		}

		// recurse
		return compare(a->left, b->left) && compare(a->right, b->right);
}
