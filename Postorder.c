#include<stdlib.h>
#include<stdio.h>
#include"Queue.h"
#include"stack.h"
node_tree* createnode_tree()
{
        node_tree *newnode;
	newnode=malloc(sizeof(node));
	return newnode;
}

node_tree* insert(node_tree *root,int data)
{
	node_tree *newnode=createnode_tree();
	newnode->value=data;
	
	
	if(root==NULL)
		{
		
		root=newnode;
		root->left=NULL;
		root->right=NULL;
		
		}
	else
		{
		node *head=createqueue();
		enqueue(head,root);
		while(head->link!=NULL)
			{
			
			 node_tree *current=dequeue(head);
			
			 if(current->left==NULL)
				{
				current->left=newnode;
				newnode->left=NULL;
				newnode->right=NULL;
				break;
				}
			 else if(current->right==NULL)
				{
				current->right=newnode;
				newnode->left=NULL;
				newnode->right=NULL;
				break;
				}
			else
				{
				enqueue(head,current->left);
				enqueue(head,current->right);
				}
			
			 
			}
		

		}
return root;
}
void postorder(node_tree *root)
{
	if(root==NULL)
		return;
	
	node_tree *tmp;
	while(1)
	{
		while(root!=NULL)
		{
			if(root->right!=NULL)
				push(head,root->right);
			push(head,root);
			root=root->left;
			}
			if(isStackempty)
				break;
			root=pop(head);
			if(isStackempty(head))
			{
				printf("%d",root->data);
				break;
			}
			tmp=pop(head);
			if(tmp==root->right)
			{
				push(head,root);
				root=root->right;
			}
			else
			{
				printf("%d",root->data);
				push(head,tmp);
				root=NULL
			}
			
				
			
		}
	}
}
