#include <stdlib.h>
// write freeList function 
// define temp pointer of a node 
// while not at the last node => Node!= null
// free temp 
struct node
{
int data;
struct node*next;
};

int freeList(struct node *head)
{
  struct node *temp = head;

  while(temp != NULL)
    {
      free(temp);
      temp = temp->next;
    }
  return 0;
};