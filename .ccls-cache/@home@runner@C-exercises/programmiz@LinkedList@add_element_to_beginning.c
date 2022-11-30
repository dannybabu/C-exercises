/*
1. Insert at the beginning
      a.Allocate memory for new node
      b.Store data
      c.Change next of new node to point to head
      d.Change head to point to recently created node
*/

#include <stdio.h>
#include <stdlib.h>
// create the Node structure
struct node {
  int data;
  struct node *next;
};

int main()
{

  /***codes that create a linkelist***/
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
three->data=3;

/* Connect nodes */
one->next = two;
two->next = three;
three->next = NULL;

/* Save address of first node in head */
 head = one;

  /** codes that add element at the beginiing **/
 struct node*newNode;
  newNode = malloc(sizeof(struct node));
  // store value in our newNode 
  newNode ->data = 10;
  // link it to the existing linklist
   // 10->1->2->3->Null
  
  newNode ->next = head;
  head = newNode;

  
  // codes that prints elements of a node 
  struct node *temp = head;
  printf("\n\nList elements are - \n");
  while(temp != NULL) {
  printf("%d --->",temp->data);
  temp = temp->next;
}
}