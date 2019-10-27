#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "headers.h"

int main() {
  struct node *begin = (struct node *)malloc(sizeof(struct node));
  begin = NULL;
  printf("empty: ");
  print_list(begin);
  printf("\nadding 1:\n");
  begin = insert_front(begin,1);
  print_list(begin);
  printf("\nAdding 2-10 to front:\n");
  for(int q = 2; q <= 10; q++) {
    begin = insert_front(begin, q);
  }
  print_list(begin);
  printf("\n");

  printf("Removing 6:\n");
  begin = remove_node(begin, 6);
  print_list(begin);
  printf("\n");
  printf("Removing 10:\n");
  begin = remove_node(begin, 10);
  print_list(begin);
  printf("\n");
  printf("Removing 1:\n");
  begin = remove_node(begin, 1);
  print_list(begin);
  printf("\n");

  printf("Freeing list:\n");
  begin = free_list(begin);
  printf("Freed!\n");
  print_list(begin);

  return 0;
}
