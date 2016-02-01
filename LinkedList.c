/*  Geoffrey Murray
 *  Linked List in C
 */

#include <stdlib.h>
#include <stdio.h>

/* Integer node struct for a singly 
   or doubly linked list. */
typedef struct {
  int x;
  struct node *next;
  struct node *prev;
  struct node *root;
} node;

/* Generates a linked list based on the
 * integer array passed in.  
 * (1) Array 
 * (2) Array Size 
 * (3) 0 for a singly linkedlist or 1 for a doubly linkedlist
 */
node* LinkedList(int* array, int size, int type) {
  node* root;
  node* index;

  root = malloc(sizeof(node));
  root->next = 0;
  root->prev = 0;
  root->root = root;
  root->x = array[0];
  index = root;

  for (int i = 1; i < size; i++) {
    index->next = malloc(sizeof(node));
    if (index == 0) {
      exit(127);
    }
    if (type) {
      node* temp = index->next;
      temp->prev = index;
    }
 
    index = index->next;
    
    if (!type) {
      index->prev = 0;
    }
    index->root = root;
    index->next = 0;
    index->x = array[i]; 
  }
  
  return root;
}

void printList(node* list) {
  while (list->next != 0) {
    printf("%d ", list->x);
    list = list->next;
  }
  printf("%d\n", list->x);
}

int main(int argc, char** argv) {
  int listArray[2] = {5, 7};
  int listArray2[3] = {4, 5, 6};

  node* list = LinkedList(listArray, (sizeof(listArray)/sizeof(listArray[0])), 0);
  node* list2 = LinkedList(listArray2, (sizeof(listArray2)/sizeof(listArray[0])), 1);  

  printList(list);
  printList(list2);
  
  return 0;
}
