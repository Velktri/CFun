/*  Geoffrey Murray
 *  LinkedList with an
 *  object oriented approach.
 */

typedef struct {
  int value;
  struct node* next;
} node;

typedef struct {
  node* root;
  int (*get)(void *this, int index);


} LinkedList;

int main() {
  LinkedList list;

  return 0;
}
