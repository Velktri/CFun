/*  Geoffrey Murray
 *  Linked List in C
 */

#include <stdlib.h>
#include <stdio.h>

struct node {
  int x;
  struct node *next;
  struct node *prev;
};

struct node* LinkedList(int* array) {
  struct node* root;
  struct node* index;

  root = malloc(sizeof(struct node));
  root->next = 0;
  root->x = array[0];
  index = root;
  printf("%d \n", root->x);

  return root;
}

int main(int argc, char** argv) {
  int listArray[5] = {5, 7, 11, 2, 4};

  LinkedList(listArray);


  return 0;
}
