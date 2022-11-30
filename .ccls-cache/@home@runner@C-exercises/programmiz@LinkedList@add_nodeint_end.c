// Create a structure node
// Create a newNode 
// Have a linkedList to attach to 


// loop through linkedList to check the lastNode=> Null
                  // once contain a null as pointer 
// node->next = newNode
// newNode->next = NULL;

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

 struct node*newNode;
  newNode = malloc(sizeof(struct node));
  // store value in our newNode 
  newNode ->data = 10;
   struct node*temp = head;
  while(temp->next !=NULL)
    {
      temp = temp->next;
    }
    temp->next = newNode;
  // codes that prints elements of a node 
  printf("\n\nList elements are - \n");
  while(temp != NULL) {
  printf("%d --->",temp->data);
  temp = temp->next;
}
  }

