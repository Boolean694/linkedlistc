#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

void print_list(struct node *no) {
  printf("This node:  %s\n", (*no).name);
  printf("Node value: %d\n", (*no).i);
  printf("Next node: %s\n", (*no).next->name);
}
/*
struct node * insert_front(struct node *no, int i) {

}

struct node * free_list(struct node *no) {

}
*/
