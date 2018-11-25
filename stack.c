#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include "SinglyLinkedList.h"

node* createStack()
{
node *head=createhead();
return head;
}




void push(node *head,node_tree *node)
{
  insertlast(head,node);

}

int pop(node *head)
{
 return(deletelast(head));
}


int peek(node *head)
{
if(head->link!=NULL)
	return head->link->value;
else
 	return 0;
}
