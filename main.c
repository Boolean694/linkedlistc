#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

int main() {
  struct node *no0 = (struct node *)malloc(sizeof(struct node));
  no0->i = 3;
  char *name0 = "no0";
  no0->name = name0;
  struct node *no1 = (struct node *)malloc(sizeof(struct node));
  no1->i = 5;
  char *name1 = "no1";
  no1->name = name1;
  struct node *no2 = (struct node *)malloc(sizeof(struct node));
  no2->i = 7;
  struct node *p1 = no1;
  no0->next = p1;
  struct node *p0 = no0;

  print_list(p0);
  //no0->next =
/*  struct node no1;
  no1.i = 5;
  struct node no2;
  no2.i = 7;
  no2.next = NULL;
  no0.next = no1;
  no1.next = no2; */

  return 0;
}
