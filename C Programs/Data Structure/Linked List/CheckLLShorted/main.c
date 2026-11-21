#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdint.h>
#include <stdbool.h>

struct Node {
	int data;
	struct Node *next;
}*first = NULL;

void create(int A[],int n)
{
	int i = 0;
	struct Node *temp,*last;
	
	first = (struct Node *)malloc(sizeof(struct Node));
	first->data = A[0];
	first->next = NULL;
	last = first;
	
	for(i=1;i<n;i++)
	{
		temp = (struct Node *)malloc(sizeof(struct Node));
		temp->data = A[i];
		temp->next = NULL;
		
		last->next = temp;
		last = temp;
	}
}

void countLinkedListNodes(struct Node *p)
{
	int i=0;
	while(p!=NULL)
	{
		i++;
		p = p->next;
	}
	
	printf("Total Nodes:%d\r\n",i);
}

int countLinkedListNodesUsingRecursive(struct Node *p)
{
	int i=0;
	if(p!=NULL)
	{
	    return countLinkedListNodesUsingRecursive(p->next) + 1;
	}
}


void DisplayLinkedList(struct Node *p)
{
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p = p->next;
	}
	
}

struct Node *LSearch(struct Node *p,int key)
{
	struct Node *q = NULL;
	while(p  != NULL)
	{
		if(p->data == key)
		{
			q = p;
		}
		
		p= p->next;
	}
	
	return q;
}

struct Node *RSearch(struct Node *p,int key)
{
	if(p == NULL)
	{
		return NULL;	    
	}
	else
	{
		if(p->data == key)
		{
			return p;
		}
		else
		{
			return RSearch(p->next,key);
		}
	}
	
}

bool isLLSorted(struct Node *p)
{
	int x = INT_MIN;
	
	
	while(p != NULL)
	{
		if(p->data < x)
		{
			return false;
		}
		else
		{
			x = p->data;
			p = p->next;
		}	
	}
	
	return true;
}

int main(int argc, char *argv[]) {
	
	int A[] = {3,5,10,7,15};
	
	create(A,5);
	
	if(isLLSorted(first)==true)
	{
		printf("Sorted\r\n");
	}
	else
	{
		printf("Not Sorted\r\n");
	}
	
	return 0;
}

