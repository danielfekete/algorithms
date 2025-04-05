#include "dfs.h"
#include "compare.h"
#include <stdlib.h>
#include <stdio.h>

struct binary_node *create_node(int value);
int main(void){

	int needle = 3;
	struct binary_node *a = create_node(7);
	a->left = create_node(4);
	a->left->right = create_node(6);
	a->left->left = create_node(3);

	if(dfs(a, needle)){
		printf("Found it!\n");
	}else{
		printf("No node found with the value of: %d.\n",needle);
	}

	struct binary_node *b = create_node(7);
	b->left = create_node(4);
	b->left->right = create_node(6);
	b->left->left = create_node(3);

	if(compare(a,b)){
		printf("The 2 bsts are the same.\n");
	}else{
		printf("The 2 bsts are not the same.\n");
	}

	return 0;
}


struct binary_node *create_node(int value){
	struct binary_node *node = malloc(sizeof(struct binary_node));
	if(node == NULL){
		printf("Not enough memory to create a new node.");
		exit(EXIT_FAILURE);
	}
	node->data = value;
	return node;
}
