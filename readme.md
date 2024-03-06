# About

An implementation of a linked list in C.

Generates a series of nodes each containing two member variables:
* Value
* Pointer (to a single child element)

Once the nodes have been generated the list is traversed sequentially beginning with the root (i.e. first created) node and ending with the last.

Once traversed, the program runs "cleanup" by traversing the list one last time and freeing the memory that was taken by each node.

## Example Output

```bash
PS F:\code\linked_list_c\build> ."F:/code/linked_list_c/build/main.exe"

int size = 4
pointer size = 8

Node 0 has value of 4
Node 1 has value of 14
Node 2 has value of 17
Node 3 has value of 17
Node 4 has value of 11
Node 5 has value of 17
Node 6 has value of 16
Node 7 has value of 19
Node 8 has value of 15
Node 9 has value of 13
```

# Todo

[ ] - Traverse the linked list backwards