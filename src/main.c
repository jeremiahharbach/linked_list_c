#include <time.h>
#include <stdlib.h>
#include <stdio.h>

// Define a structure that each node will have
struct node
{
	int value;							// Holds the value of this node
	struct node *next; 					// pointer to the next element in the list; of type "node"
};

int main(void)
{
	int j = 4;
	printf("int size = %d\n", j);
	printf("pointer size = %lu\n\n", sizeof(int *));

	/* Create the root node */
	struct node *root; 					// declare a pointer that marks the start of the linked list
	
	root = (struct node *) malloc(sizeof(struct node)); // reserve a chunk of memory = size of 1 node. Our node pointer called "root" will point at this node.
	root->next = NULL; 					// There isn't a next element at the moment so set it to NULL
	root->value = 4; 					// set an arbitrary value for root node

	// Make a list of random length between 6-10 nodes
	srand(time(NULL)); 					// Initialize the random number generator "rand()" and create a 'seed' value
	int size = rand() % 5 + 6; 			// returns a random number (rand()%5 gives a value of 0-4; +6 makes it 6-10)
	struct node* cur = root; 			// *cur points to the last node in the list

	// while size is greater than 0 (decrement by 1 each time; --, > )
	while (size-->0) {
		cur->next = (struct node *) malloc( sizeof(struct node) ); // allocate memory for new struct
		cur = cur->next; 				// update cur to the new node
		cur->value = rand() % 10 + 10; 	// pick a random number between 1 and 10
		cur->next = NULL; 				// Set the next node to NULL
	}

	cur = root; 						// point to the start of the linked list
	int i;
	for(i=0; cur; cur = cur->next){
		printf("Node %d has value of %d\n", i++, cur->value);
	}

	// cleanup
	cur = root;							// point cur to the beginning node
	while (cur) {
		struct node* nxt = cur->next; 	// point nxt to the next node
		free(cur);						// free up the current node
		cur = nxt;						// point cur to the nxt node
	}
	return 0;
}