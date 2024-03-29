#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "headers.h"


void printnode(struct node *no) {
  printf("This node:  %s\n", (*no).name);
  printf("Node value: %d\n", (*no).i);
  printf("Next node: %s\n", (*no).next->name);
}

void print_list(struct node *no) {
  if(no == NULL) {
    printf("[]");
  }
  else {
  struct node *p = no;
  printf("[");
  while((*p).next != NULL) {
    printf("%d,", (*p).i);
    p = (*p).next;
  }
  printf("%d", (*p).i);
  printf("]");
  }
}

struct node * insert_front(struct node *no, int in) {
  struct node *nnf = (struct node *)malloc(sizeof(struct node));
  nnf->i = in;
  struct node *p = no;
  nnf->next = p;
  nnf->name = "nnf";
  struct node *pr = nnf;
  return pr;
}

struct node * free_list(struct node *no) {
  while(no != NULL) {
    struct node *fr = no;
    no = no->next;
    fr->i = 0;
    free(fr);
  }
  return NULL;
}

struct node * remove_node(struct node *no, int data) {
  if(no->i == data) {
    struct node *del = no;
    no = no->next;
    free(del);
    return no;
  }
  else {
    struct node *retfro = no;
    struct node *back;
    while(no != NULL && no->i != data) {
      back = no;
      no = no->next;
    }
    if(no->i == data) {
      back->next = no->next;
    }
    return retfro;
  }
}
