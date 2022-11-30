// Pseudocodes
/*
1. use while to check if node is not null
2. print the value of a node printf(Node->data)
3. update the printed node to the next
              Node = Node -> next;
N = N->next;
                    N
1 -> 2 -> 3-> 4 -> null
*/

#include <stdio.h>
#include <stdlib.h>
// create the Node structure
typedef struct node {
  int data;
  struct node *next;
} node;

void printList(node *head) {
  node *temp = head;
  // set while loop
  while (temp != NULL) 
  {
    if (temp->next == NULL) 
    {
      // when the head/temp node doesn't have the next value
      printf("%d", temp->data);
    } else
    {
      printf("%d", temp->data);  
    }
  }
  temp = temp->next;
}

int main() {
  /* Initialize nodes */
  struct node *head;
  struct node *one = NULL;
  struct node *two = NULL;
  struct node *three = NULL;

  /* Allocate memory */
  one = malloc(sizeof(struct node));
  two = malloc(sizeof(struct node));
  three = malloc(sizeof(struct node));

  /* Assign data values */
  one->data = 1;
  two->data = 2;
  three->data = 3;

  /* Connect nodes */
  one->next = two;
  two->next = three;
  three->next = NULL;

  /* Save address of first node in head */
  printList(one);
  // head = one
  return 0;
}